\literate[layout]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

% $Id: layout.r,v 1.2 2001/12/19 12:04:35 mdejonge Exp $

% Author: Merijn de Jonge (mdejonge@cwi.nl)

\begin{code}
module layout
imports lib pp-tables

signature
   constructors
      Conservative: Option

strategies

insert-layout =
   (id, ?[initial-layout| _]; Tl);
   rec x ({a,a',b,w,b',w',w'': 
      ?(H(a, b), w);
      <InsLayout(x)>(b, w) => (b',w');
      !(H(a, b'), w')
   <+
      ?(HV(a, b), w);
      <InsLayout(x)>(b, w) => (b',w');
      !(HV(a, b'), w')
   <+
      ?(V(a, b), w);
      <InsLayout(x)>(b, w) => (b',w');
      !(V(a, b'), w')
   <+
      ?(A(a, a', b,), w);
      <InsLayout(x)>(b, w) => (b',w');
      !(A(a, a', b'), w')
   <+
      ?(R(a, b), w);
      <InsLayout(x)>(b, w) => (b',w');
      !(R(a, b'), w')
   <+
      ?(ALT(a,b), w);
      <InsLayout(x)>(a, w) => (a',w');
      <InsLayout(x)>(b, w) => (b', w'');
      !(ALT(a', b'), w'')
   <+
      ?(LBL(a,b),w);
      <InsLayout(x)>(b, w) => (b', w');
      !(LBL(a,b'), w')
   <+
      ?(REF(a,b),w);
      <InsLayout(x)>(b, w) => (b', w');
      !(REF(a,b'), w')
   <+
      ?(L(a,b),w);
      <InsLayout(x)>(b, w) => (b', w');
      !(L(a,b'), w')
   <+
      ?(LNAT(a,b),w);
      <InsLayout(x)>(b, w) => (b', w');
      !(LNAT(a,b'), w')


   <+
      ([id|id],id);InsLayout(x)
   <+
      id
   }   );
   // Add initial + trailing layout to result BOX term
   ?(abox, [trailing-layout|xs]);
   !HV([SOpt(HS,"0")],
   <filter(
      not(layout(id))
     <+layout(id);has-option(!Conservative);has-layout;layout2box
     <+layout(id);not(has-option(!Conservative));has-significant-layout;layout2box
     );
     flat-list>[initial-layout, abox, trailing-layout])

InsLayout(s) = 
   rec x ( {a,a',w,b,b',xs, ws, ws', ws'',xs',ws''':
      ([], id)
   <+
      ?([a], ws);<s>(a,ws);?(a',ws');!([a'],ws')
   <+
      ?([a,b|xs], ws); 
      <s>(a,ws) => (a',[w|ws']);
      <x>([b|xs], ws');?([b'|xs'], ws'');
      (
         // In case of conservative pretty-printing we insert original
         // layout (when it exists) in the generated BOX expression. When
         // No layout exists, we use the layout of te generated BOX
         // expressions.

         has-option(!Conservative);
         <has-layout>w;
         !([H([SOpt(HS,"0")],[a', <layout2box>w, b'])|xs'], ws'')
      <+
         // For non-conservative pretty-printing, we only insert significant
         // layout (i.e., layout other than spaces, tabs, and new lines).
         not(has-option(!Conservative));
         <has-significant-layout>w;
         !([H([SOpt(HS,"0")],[a', <layout2box>w, b'])|xs'], ws'')
     <+
         // No existing layout used. Instead, generated layout is used.
         !([a', b'|xs'],ws'')
      )
   } )

has-layout = 
   not(layout([]))

has-significant-layout =
   where(
   ?layout(xs);!xs;concat-strings;
   explode-string;
   filter( not(9);not(10); not(32) );
   not([])
   )

layout2box =
   ?layout(x);
   (
      has-significant-layout;
      !C([],[S(<concat-strings>x)])
   <+
      !S(<concat-strings>x)
   )
\end{code}
