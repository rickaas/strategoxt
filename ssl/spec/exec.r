\literate[exec]

	\begin{abstract}

	Transformation systems often consist of multiple components, e.g.,
	parsers, pretty-printers and several actual transformation
	components.
	To glue these components together this module defines the
	process control primitive \verb|call|.

	\end{abstract}

	The strategy \verb|<call> (prog, args)| executes the program
	with name \verb|prog| and passes the list
	of arguments \verb|args| to it.

	The strategy
	\verb|<transform-file(s, suf)> (base, ext)| reads in the
	term from file "base.ext", applies strategy \verb|s| to
	it and write the result to the concatenation of the
	strings \verb|(base, <suf>())|.

\begin{code}
module exec
strategies //primitives

  // exit :: Int
  // abort execution with exit value n

  exit = 
    ?n; prim("SSL_exit", n)

  // call :: String * List(String) -> String * List(String)
  // call prog with list of strings args

  call = 
    ?(prog,args); prim("SSL_call",prog,args)

  // call-noisy :: String * List(String) -> String * List(String)
  // call prog with list of strings args and print information

  call-noisy = 
    ?(prog,args); prim("SSL_call_noisy",prog,args)

  // get-pid :: a -> Int
  // return process identifier of current process

  get-pid = 
    prim("SSL_get_pid")

strategies // non-primitives

  // rm-files :: List(String) -> List(String)
  // remove files

  rm-files = 
    ?files; where(<call> ("rm", ["-f" | files]))

  pipe(c, suf2) = 
    pipe(c, suf2, ![])

  pipe(c, suf2, args) = 
    where(conc-strings => 'in);
    (id, suf2);
    where(conc-strings => out);
    //where(<debug(!"calling : ")> [<c>, 'in, out | <args>]);
    where(<call> (<c>, ["-i", 'in, "-o", out | <args>]))

  pipe'(c, suf2, args) = 
    obsolete(!"pipe'/3; use pipe/3");
    pipe(c, suf2, args)

  // call-tmp :: (a -> String) * (b -> List(String)) * (String -> String) -> (String -> String)
  //
  // Apply command <comm> to input file (current term) and write the result to a temporary file
  // which is then passed on to the continuation command cont. The temporary file is created
  // and removed afterwards by temp-file.

  call-tmp(comm, args, cont) = 
    ?filein
    ; temp-file(\ (fileout, _) -> <
        <call>(<comm>, ["-i", filein, "-o", fileout | <args> ])
        ; !fileout
        ; cont
      >\ )

  // call-out :: (a -> String) * (b -> List(String)) * (c -> String) * (String -> d) -> (String -> d)
  // 
  // Apply command <comm> to the current file (current term) and write the result to 
  // file <out>. <args> are additional arguments for the command. cont is the continuation
  // which applies to the filename of the result

  call-out(comm, args, out, cont) = 
    ? filein
    ; <call>(<comm>, ["-i", filein, "-o", <out>, | <args> ])
    ; out
    ; cont

  transform-file(s, suf) =
    where(conc-strings => 'in);
    (id, suf);
    where(conc-strings => out);
    where(<apply-to-file(s)> ('in, out))

  apply-to-file(s) =
    ?('in, out);
    where(<ReadFromFile; s> 'in => trm);
    where(<WriteToBinaryFile> (out, trm))

  copy-file(s, new-base, new-suf) =
    ?(base, suf);
    (new-base, new-suf); 
    ?(nbase, nsuf);
    where(<apply-to-file(s)> 
	    (<conc-strings> (base, suf),
	     <conc-strings> (nbase, nsuf)))

  apply-program(name) = 
    apply-program(name, ![])
  
  apply-program(name, args) = 
    temp-file(
      ?(infile,_)
    ; WriteToBinaryFile
    ; temp-file(
        ?(outfile,_)
      ; <call> (<name>(), ["-i", infile, "-o", outfile | <args>()])
      ; <ReadFromFile> outfile
      )
    )
\end{code}
% Copyright (C) 1998-2002 Eelco Visser <visser@acm.org>
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
