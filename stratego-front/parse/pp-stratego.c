#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constant_terms ();
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_WaitStatus_3;
Symbol sym_Infinite_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Anno_2;
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
void init_constructors (void)
{
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
  sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
  ATprotectSymbol(sym_Version_0);
  sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
  ATprotectSymbol(sym_Input_1);
  sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
  ATprotectSymbol(sym_Output_1);
  sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
  ATprotectSymbol(sym_Binary_0);
  sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
  ATprotectSymbol(sym_Statistics_0);
  sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
  ATprotectSymbol(sym_Help_0);
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  init_constant_terms();
}
ATerm term_f_36;
ATerm term_e_36;
ATerm term_d_36;
ATerm term_c_36;
ATerm term_g_35;
ATerm term_q_34;
ATerm term_t_33;
ATerm term_i_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_z_30;
ATerm term_y_30;
ATerm term_m_30;
ATerm term_e_30;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_q_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_e_28;
ATerm term_x_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_d_26;
ATerm term_n_24;
ATerm term_k_24;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_x_22;
ATerm term_v_22;
ATerm term_s_22;
ATerm term_o_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_b_16;
ATerm term_v_15;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_o_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_j_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_q_10;
ATerm term_j_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_j_9;
ATerm term_u_8;
ATerm term_s_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_q_7;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(5);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_XTC_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym_Import_0);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_f_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(4);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(6);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_R__OK_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Repository doesn't exist: ", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: No read permission for repository: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading? ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Repository_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading repository: ", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository read: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Repository stored in table: ", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-r", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC_REPOSITORY", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-load: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym__2, term_w_7, term_f_10);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-loaded: ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("xtc-find: ", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No XTC registration for ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" found", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("XTC repository: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Unknown signal (", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("): ", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("HUP", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Hangup", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_13, term_o_13, term_r_13);
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol("INT", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal interrupt", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_13, term_v_13, term_w_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("QUIT", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(3);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal quit", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_c_14, term_d_14, term_e_14);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ABRT", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Process abort", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_14, term_u_8, term_i_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("KILL", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Kill", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_14, term_l_14, term_m_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ALRM", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeInt(14);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Alarm Clock", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_14, term_w_14, term_x_14);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("TERM", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeInt(15);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Termination", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_15, term_c_15, term_d_15);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("BUS", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(7);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Access to an undefined portion of a memory object", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_h_15, term_i_15, term_j_15);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("CHLD", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(17);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Child process terminated, stopped, or continued", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym_Signal_3, term_r_15, term_s_15, term_t_15);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("CONT", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeInt(18);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Continue executing, if stopped", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_b_16, term_f_16, term_g_16);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("FPE", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(8);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Erroneous arithmetic operation", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_16, term_k_16, term_l_16);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("ILL", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Illegal Instruction", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_16, term_s_8, term_q_16);
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("PIPE", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Write on a pipe with no one to read it", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Signal_3, term_u_16, term_v_16, term_w_16);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("SEGV", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeInt(11);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid memory reference", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_16, term_g_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("STOP", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(19);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Stop executing", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Signal_3, term_n_17, term_s_17, term_t_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("TSTP", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(20);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Terminal stop", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_v_17, term_w_17, term_b_18);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTIN", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeInt(21);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting read", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_d_18, term_e_18, term_f_18);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("TTOU", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeInt(22);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Background process attempting write", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Signal_3, term_m_18, term_u_18, term_v_18);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("URG", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(23);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("High bandwidth data is available at a socket", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_x_18, term_y_18, term_e_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR1", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 1", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_j_19, term_m_19, term_r_19);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("USR2", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeInt(12);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("User-defined signal 2", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Signal_3, term_t_19, term_u_19, term_v_19);
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("POLL", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeInt(29);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pollable event", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_z_19, term_c_20, term_d_20);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("PROF", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeInt(27);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Profiling timer expired", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_g_20, term_h_20, term_i_20);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SYS", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeInt(31);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Bad system call", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_20, term_l_20, term_m_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("TRAP", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Trace/breakpoint trap", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Signal_3, term_s_20, term_q_7, term_t_20);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("VTALRM", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeInt(26);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Virtual timer expired", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_y_20, term_z_20, term_a_21);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XCPU", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeInt(24);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("CPU time limit exceeded", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_e_21, term_f_21, term_g_21);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("XFSZ", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeInt(25);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("File size limit exceeded", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Signal_3, term_k_21, term_l_21, term_m_21);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING -- process signaled: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym__2, term_x_22, term_e_22);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym__2, term_m_26, term_s_22);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_p_7, term_v_26);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_26);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_s_22);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__2, term_e_28, term_s_22);
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--abstract", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, term_c_29, term_s_22);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-a | --abstract  source is abstract syntax", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_30));
  term_z_30 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym__2, term_t_31, term_u_31);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym__2, term_m_30, term_s_22);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym__3, term_t_31, term_u_31, (ATerm) ATempty);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-stratego", 0, ATtrue));
  ATprotect(&(term_d_36));
  term_d_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ast2text", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Stratego-pretty.pp", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
}
ATerm table_keys_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm if_verbose5_1 (ATerm, ATerm r_80 (ATerm));
ATerm error_0 (ATerm);
ATerm xtc_find_loc_0 (ATerm);
ATerm xtc_find_version_loc_0 (ATerm);
ATerm filter_1 (ATerm, ATerm s_76 (ATerm));
ATerm repeat_1 (ATerm, ATerm m_78 (ATerm));
ATerm xtc_import_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_64 (ATerm));
ATerm if_verbose4_1 (ATerm, ATerm q_80 (ATerm));
ATerm if_verbose6_1 (ATerm, ATerm s_80 (ATerm));
ATerm set_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm g_73 (ATerm), ATerm h_73 (ATerm));
ATerm union_1 (ATerm, ATerm c_73 (ATerm));
ATerm union_0 (ATerm);
ATerm get_0 (ATerm);
ATerm table_append_0 (ATerm);
ATerm table_putlist_1 (ATerm, ATerm b_81 (ATerm));
ATerm can_read_file_0 (ATerm);
ATerm read_repository_file_0 (ATerm);
ATerm xtc_read_0 (ATerm);
ATerm getenv_0 (ATerm);
ATerm xtc_location_0 (ATerm);
ATerm xtc_load_0 (ATerm);
ATerm xtc_find_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm fclose_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm i_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm xtc_transform_term_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm close_file_0 (ATerm);
ATerm execvp_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm signal_to_descr_0 (ATerm);
ATerm fetch_elem_1 (ATerm, ATerm m_69 (ATerm));
ATerm signal_from_number_0 (ATerm);
ATerm warn_ifsignaled_0 (ATerm);
ATerm waitpid_0 (ATerm);
ATerm fork_0 (ATerm);
ATerm fork_2 (ATerm, ATerm v_63 (ATerm), ATerm w_63 (ATerm));
ATerm fork_and_wait_1 (ATerm, ATerm x_63 (ATerm));
ATerm call_0 (ATerm);
ATerm xtc_find_warning_0 (ATerm);
ATerm xtc_command_1 (ATerm, ATerm f_83 (ATerm));
ATerm assert_1 (ATerm, ATerm q_79 (ATerm));
ATerm obsolete_1 (ATerm, ATerm b_65 (ATerm));
ATerm open_file_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm xtc_transform_file_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm stdin_0 (ATerm);
ATerm FILE_1 (ATerm, ATerm s_61 (ATerm));
ATerm xtc_transform_2 (ATerm, ATerm h_83 (ATerm), ATerm i_83 (ATerm));
ATerm xtc_transform_1 (ATerm, ATerm g_83 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_69 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm j_55 (ATerm), ATerm k_55 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_64 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm n_79 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm i_80 (ATerm), ATerm j_80 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm m_79 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm r_82 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm s_82 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm pp_stratego_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm p_75 (ATerm), ATerm q_75 (ATerm));
ATerm crush_2 (ATerm, ATerm n_73 (ATerm), ATerm o_73 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm n_80 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_86 (ATerm));
ATerm map_1 (ATerm, ATerm b_69 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_86 (ATerm));
ATerm Program_1 (ATerm, ATerm z_61 (ATerm));
ATerm default_system_usage_0 (ATerm);
ATerm override_system_usage_0 (ATerm);
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm a_62 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_85 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_79 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_56 (ATerm), ATerm t_56 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_86 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm z_84 (ATerm), ATerm a_85 (ATerm));
ATerm pp_stratego_0 (ATerm);
ATerm main_0 (ATerm);
ATerm table_keys_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_table_keys(not_null(e_0));
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm k_1 = NULL;
  k_1 = t;
  {
    t = table_keys_0(t);
    {
      ATerm c_0 (ATerm t)
      {
        ATerm p_1 = NULL;
        ATerm r_1 = NULL;
        p_1 = t;
        {
          ATerm f_2 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_1), not_null(p_1));
          {
            t = table_get_0(t);
            {
              f_2 = t;
              if(((r_1 != NULL) && (r_1 != f_2)))
                _fail(f_2);
              else
                r_1 = f_2;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_1), not_null(r_1));
        }
        return(t);
      }
      t = map_1(t, c_0);
    }
  }
  return(t);
}
ATerm if_verbose5_1 (ATerm t, ATerm r_80 (ATerm))
{
  ATerm f_0 (ATerm t)
  {
    ATerm m_7;
    m_7 = t;
    {
      ATerm u_2 = NULL;
      ATerm y_2 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          y_2 = t;
          if(((u_2 != NULL) && (u_2 != y_2)))
            _fail(y_2);
          else
            u_2 = y_2;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_2), term_q_7);
        t = geq_0(t);
      }
    }
    t = m_7;
    t = r_80(t);
    return(t);
  }
  t = try_1(t, f_0);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm r_7;
  r_7 = t;
  {
    ATerm b_3 = NULL;
    ATerm c_3 = NULL;
    c_3 = t;
    if(((b_3 != NULL) && (b_3 != c_3)))
      _fail(c_3);
    else
      b_3 = c_3;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, not_null(b_3));
      t = printnl_0(t);
    }
  }
  t = r_7;
  return(t);
}
ATerm xtc_find_loc_0 (ATerm t)
{
  ATerm i_3 = NULL;
  ATerm k_3 = NULL,l_3 = NULL;
  i_3 = t;
  {
    ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(i_3)));
    {
      t = table_get_0(t);
      {
        m_3 = t;
        g_3 :
        if(((ATgetType(m_3) == AT_LIST) && !(ATisEmpty(m_3))))
          {
            n_3 = ATgetFirst((ATermList) m_3);
            q_3 = (ATerm) ATgetNext((ATermList) m_3);
            h_3 :
            if(match_cons(n_3, sym__2))
              {
                o_3 = ATgetArgument(n_3, 0);
                p_3 = ATgetArgument(n_3, 1);
                {
                  if(((k_3 != NULL) && (k_3 != o_3)))
                    _fail(o_3);
                  else
                    k_3 = o_3;
                  if(((l_3 != NULL) && (l_3 != p_3)))
                    _fail(p_3);
                  else
                    l_3 = p_3;
                }
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
      }
    }
    t = not_null(l_3);
  }
  return(t);
}
ATerm xtc_find_version_loc_0 (ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
  x_3 = t;
  w_3 :
  if(match_cons(x_3, sym__2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      {
        ATerm c_4 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Tool_1, not_null(y_3)));
        {
          t = table_get_0(t);
          {
            ATerm h_0 (ATerm t)
            {
              ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
              d_4 = t;
              v_3 :
              if(match_cons(d_4, sym__2))
                {
                  e_4 = ATgetArgument(d_4, 0);
                  f_4 = ATgetArgument(d_4, 1);
                  {
                    if(((z_3 != NULL) && (z_3 != e_4)))
                      _fail(e_4);
                    else
                      z_3 = e_4;
                    if(((c_4 != NULL) && (c_4 != f_4)))
                      _fail(f_4);
                    else
                      c_4 = f_4;
                  }
                }
              else
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, h_0);
          }
        }
        t = not_null(c_4);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm s_76 (ATerm))
{
  ATerm x_7 = t;
  int y_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(y_7);
    }
  else
    {
      t = x_7;
      {
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = filter_1(t, s_76);
              return(t);
            }
            t = Cons_2(t, s_76, p_0);
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL;
              k_4 = t;
              j_4 :
              if(((ATgetType(k_4) == AT_LIST) && !(ATisEmpty(k_4))))
                {
                  l_4 = ATgetFirst((ATermList) k_4);
                  m_4 = (ATerm) ATgetNext((ATermList) k_4);
                  {
                    t = not_null(m_4);
                    t = filter_1(t, s_76);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm p_4 (ATerm t)
  {
    ATerm q_0 (ATerm t)
    {
      t = m_78(t);
      t = p_4(t);
      return(t);
    }
    t = try_1(t, q_0);
    return(t);
  }
  t = p_4(t);
  return(t);
}
ATerm xtc_import_0 (ATerm t)
{
  ATerm c_8;
  c_8 = t;
  {
    ATerm r_0 (ATerm t)
    {
      t = term_g_8;
      {
        t = table_get_0(t);
        {
          t = filter_1(t, xtc_read_0);
          {
            ATerm k_8 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = k_8;
              }
          }
        }
      }
      return(t);
    }
    t = repeat_1(t, r_0);
  }
  t = c_8;
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm l_8;
  l_8 = t;
  {
    ATerm r_4 = NULL;
    ATerm s_4 = NULL;
    s_4 = t;
    if(((r_4 != NULL) && (r_4 != s_4)))
      _fail(s_4);
    else
      r_4 = s_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATempty, not_null(r_4)));
      t = printnl_0(t);
    }
  }
  t = l_8;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm m_8;
  m_8 = t;
  {
    t = y_64(t);
    t = debug_0(t);
  }
  t = m_8;
  return(t);
}
ATerm if_verbose4_1 (ATerm t, ATerm q_80 (ATerm))
{
  ATerm s_0 (ATerm t)
  {
    ATerm n_8;
    n_8 = t;
    {
      ATerm v_4 = NULL;
      ATerm w_4 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          w_4 = t;
          if(((v_4 != NULL) && (v_4 != w_4)))
            _fail(w_4);
          else
            v_4 = w_4;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_4), term_s_8);
        t = geq_0(t);
      }
    }
    t = n_8;
    t = q_80(t);
    return(t);
  }
  t = try_1(t, s_0);
  return(t);
}
ATerm if_verbose6_1 (ATerm t, ATerm s_80 (ATerm))
{
  ATerm t_0 (ATerm t)
  {
    ATerm t_8;
    t_8 = t;
    {
      ATerm z_4 = NULL;
      ATerm a_5 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          a_5 = t;
          if(((z_4 != NULL) && (z_4 != a_5)))
            _fail(a_5);
          else
            z_4 = a_5;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_4), term_u_8);
        t = geq_0(t);
      }
    }
    t = t_8;
    t = s_80(t);
    return(t);
  }
  t = try_1(t, t_0);
  return(t);
}
ATerm set_0 (ATerm t)
{
  t = table_put_0(t);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym__2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      if(((f_5 != NULL) && (f_5 != g_5)))
        _fail(g_5);
      else
        f_5 = g_5;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm g_73 (ATerm), ATerm h_73 (ATerm))
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  m_5 = t;
  l_5 :
  if(((ATgetType(m_5) == AT_LIST) && !(ATisEmpty(m_5))))
    {
      n_5 = ATgetFirst((ATermList) m_5);
      o_5 = (ATerm) ATgetNext((ATermList) m_5);
      {
        t = h_73(t);
        {
          ATerm u_0 (ATerm t)
          {
            ATerm r_5 = NULL;
            r_5 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_5), not_null(r_5));
              t = g_73(t);
            }
            return(t);
          }
          t = fetch_1(t, u_0);
        }
        t = not_null(o_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm x_5 = NULL,y_5 = NULL,z_5 = NULL;
  x_5 = t;
  w_5 :
  if(match_cons(x_5, sym__2))
    {
      y_5 = ATgetArgument(x_5, 0);
      z_5 = ATgetArgument(x_5, 1);
      {
        t = not_null(y_5);
        {
          ATerm d_6 (ATerm t)
          {
            ATerm v_8 = t;
            int w_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(z_5);
                ;
                LocalPopChoice(w_8);
              }
            else
              {
                t = v_8;
                {
                  ATerm x_8 = t;
                  int d_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_0 (ATerm t)
                      {
                        t = not_null(z_5);
                        return(t);
                      }
                      t = HdMember_p__2(t, c_73, v_0);
                      t = d_6(t);
                      ;
                      LocalPopChoice(d_9);
                    }
                  else
                    {
                      t = x_8;
                      t = Cons_2(t, _id, d_6);
                    }
                }
              }
            return(t);
          }
          t = d_6(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm get_0 (ATerm t)
{
  t = table_get_0(t);
  return(t);
}
ATerm table_append_0 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL,l_6 = NULL;
  i_6 = t;
  h_6 :
  if(match_cons(i_6, sym__3))
    {
      j_6 = ATgetArgument(i_6, 0);
      k_6 = ATgetArgument(i_6, 1);
      l_6 = ATgetArgument(i_6, 2);
      {
        ATerm g_9;
        g_9 = t;
        {
          ATerm p_6 = NULL;
          ATerm q_6 = NULL,s_6 = NULL;
          ATerm r_6 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_6), not_null(k_6));
          {
            ATerm h_9 = t;
            int i_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = get_0(t);
                ;
                LocalPopChoice(i_9);
              }
            else
              {
                t = h_9;
                t = (ATerm) ATempty;
              }
            {
              r_6 = t;
              if(((q_6 != NULL) && (q_6 != r_6)))
                _fail(r_6);
              else
                q_6 = r_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_6), not_null(l_6));
            {
              t = union_0(t);
              {
                s_6 = t;
                if(((p_6 != NULL) && (p_6 != s_6)))
                  _fail(s_6);
                else
                  p_6 = s_6;
              }
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_6), not_null(k_6), not_null(p_6));
            t = set_0(t);
          }
        }
        t = g_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_putlist_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm a_7 = NULL,b_7 = NULL,c_7 = NULL;
  a_7 = t;
  z_6 :
  if(match_cons(a_7, sym__2))
    {
      b_7 = ATgetArgument(a_7, 0);
      c_7 = ATgetArgument(a_7, 1);
      {
        t = not_null(c_7);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
            f_7 = t;
            y_6 :
            if(match_cons(f_7, sym__2))
              {
                g_7 = ATgetArgument(f_7, 0);
                h_7 = ATgetArgument(f_7, 1);
                {
                  t = (ATerm) ATmakeAppl(sym__3, not_null(b_7), not_null(g_7), not_null(h_7));
                  t = b_81(t);
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, w_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm can_read_file_0 (ATerm t)
{
  ATerm n_7 = NULL;
  ATerm o_7 = NULL;
  o_7 = t;
  if(((n_7 != NULL) && (n_7 != o_7)))
    _fail(o_7);
  else
    n_7 = o_7;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_7), (ATerm) ATinsert(ATempty, term_j_9));
    t = access_0(t);
  }
  return(t);
}
ATerm read_repository_file_0 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = can_read_file_0(t);
      LocalPopChoice(l_9);
      t = ReadFromFile_0(t);
    }
  else
    {
      t = k_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_9 = t;
            if((PushChoice() == 0))
              {
                t = file_exists_0(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = w_9;
              }
            {
              ATerm x_0 (ATerm t)
              {
                t = term_x_9;
                return(t);
              }
              t = debug_1(t, x_0);
            }
            ;
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            {
              ATerm y_0 (ATerm t)
              {
                t = term_y_9;
                return(t);
              }
              t = debug_1(t, y_0);
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm xtc_read_0 (ATerm t)
{
  ATerm s_7 = NULL;
  ATerm u_7 = NULL;
  s_7 = t;
  {
    ATerm z_0 (ATerm t)
    {
      ATerm a_1 (ATerm t)
      {
        t = term_z_9;
        return(t);
      }
      t = debug_1(t, a_1);
      return(t);
    }
    t = if_verbose5_1(t, z_0);
    {
      ATerm d_10 = t;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATmakeAppl(sym_Imported_1, not_null(s_7)));
          t = table_get_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = d_10;
        }
      {
        ATerm e_10;
        e_10 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_7, term_f_10, (ATerm) ATinsert(ATempty, not_null(s_7)));
          t = table_put_0(t);
        }
        t = e_10;
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              t = term_g_10;
              return(t);
            }
            t = debug_1(t, c_1);
            return(t);
          }
          t = if_verbose4_1(t, b_1);
          {
            t = read_repository_file_0(t);
            {
              ATerm d_1 (ATerm t)
              {
                ATerm e_1 (ATerm t)
                {
                  t = term_h_10;
                  return(t);
                }
                t = say_1(t, e_1);
                return(t);
              }
              t = if_verbose6_1(t, d_1);
              {
                ATerm v_7 = NULL;
                v_7 = t;
                if(((u_7 != NULL) && (u_7 != v_7)))
                  _fail(v_7);
                else
                  u_7 = v_7;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_7, not_null(u_7));
                  {
                    t = table_putlist_1(t, table_append_0);
                    {
                      ATerm f_1 (ATerm t)
                      {
                        ATerm g_1 (ATerm t)
                        {
                          t = term_j_10;
                          return(t);
                        }
                        t = say_1(t, g_1);
                        return(t);
                      }
                      t = if_verbose6_1(t, f_1);
                      {
                        t = (ATerm) ATmakeAppl(sym__3, term_w_7, (ATerm)ATmakeAppl(sym_Imported_1, not_null(s_7)), (ATerm) ATempty);
                        {
                          t = table_put_0(t);
                          {
                            ATerm h_1 (ATerm t)
                            {
                              ATerm i_1 (ATerm t)
                              {
                                t = term_h_10;
                                return(t);
                              }
                              t = say_1(t, i_1);
                              return(t);
                            }
                            t = if_verbose4_1(t, h_1);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm getenv_0 (ATerm t)
{
  ATerm z_7 = NULL;
  z_7 = t;
  t = SSL_getenv(not_null(z_7));
  return(t);
}
ATerm xtc_location_0 (ATerm t)
{
  ATerm k_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_10;
      t = get_config_0(t);
      ;
      LocalPopChoice(p_10);
    }
  else
    {
      t = k_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_v_10;
            t = getenv_0(t);
            ;
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = XTC_REPOSITORY();
          }
      }
    }
  return(t);
}
ATerm xtc_load_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm l_1 (ATerm t)
    {
      t = term_y_10;
      return(t);
    }
    t = debug_1(t, l_1);
    return(t);
  }
  t = if_verbose5_1(t, j_1);
  {
    ATerm z_10;
    z_10 = t;
    {
      ATerm c_11 = t;
      int d_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_g_11;
          t = table_get_0(t);
          ;
          LocalPopChoice(d_11);
        }
      else
        {
          t = c_11;
          {
            t = xtc_location_0(t);
            {
              t = xtc_read_0(t);
              t = xtc_import_0(t);
            }
          }
        }
    }
    t = z_10;
    {
      ATerm m_1 (ATerm t)
      {
        ATerm n_1 (ATerm t)
        {
          t = term_h_11;
          return(t);
        }
        t = debug_1(t, n_1);
        return(t);
      }
      t = if_verbose5_1(t, m_1);
    }
  }
  return(t);
}
ATerm xtc_find_0 (ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          t = term_m_11;
          return(t);
        }
        t = debug_1(t, q_1);
        return(t);
      }
      t = if_verbose5_1(t, o_1);
      {
        t = xtc_load_0(t);
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = xtc_find_version_loc_0(t);
              ;
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = xtc_find_loc_0(t);
            }
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = term_m_11;
                return(t);
              }
              t = debug_1(t, t_1);
              return(t);
            }
            t = if_verbose5_1(t, s_1);
          }
        }
      }
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      {
        ATerm d_8 = NULL;
        ATerm e_8 = NULL;
        e_8 = t;
        if(((d_8 != NULL) && (d_8 != e_8)))
          _fail(e_8);
        else
          d_8 = e_8;
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_11), not_null(d_8)), term_p_11);
          {
            t = error_0(t);
            {
              ATerm u_1 (ATerm t)
              {
                t = term_w_7;
                {
                  t = table_getlist_0(t);
                  {
                    ATerm v_1 (ATerm t)
                    {
                      t = term_r_11;
                      return(t);
                    }
                    t = debug_1(t, v_1);
                  }
                }
                return(t);
              }
              t = if_verbose5_1(t, u_1);
              _fail(t);
            }
          }
        }
      }
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm i_8 = NULL,j_8 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Stream_1))
    {
      j_8 = ATgetArgument(i_8, 0);
      t = SSL_read_term_from_stream(not_null(j_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm w_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_8 = NULL;
      ATerm p_8 = NULL;
      p_8 = t;
      if(((o_8 != NULL) && (o_8 != p_8)))
        _fail(p_8);
      else
        o_8 = p_8;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), term_g_12);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = w_11;
      {
        ATerm w_1 (ATerm t)
        {
          t = term_h_12;
          return(t);
        }
        t = debug_1(t, w_1);
        _fail(t);
      }
    }
  {
    ATerm i_12;
    i_12 = t;
    {
      ATerm r_8 = NULL;
      t = read_from_stream_0(t);
      {
        r_8 = t;
        if(((q_8 != NULL) && (q_8 != r_8)))
          _fail(r_8);
        else
          q_8 = r_8;
      }
    }
    t = i_12;
    {
      t = fclose_0(t);
      t = not_null(q_8);
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL;
  z_8 = t;
  y_8 :
  if(match_cons(z_8, sym_stdin_0))
    {
      ATerm b_9 = NULL;
      ATerm c_9 = NULL;
      t = term_j_12;
      {
        t = ReadFromFile_0(t);
        {
          c_9 = t;
          if(((b_9 != NULL) && (b_9 != c_9)))
            _fail(c_9);
          else
            b_9 = c_9;
        }
      }
      t = not_null(b_9);
    }
  else
    {
      if(match_cons(z_8, sym_FILE_1))
        {
          a_9 = ATgetArgument(z_8, 0);
          {
            ATerm e_9 = NULL;
            ATerm f_9 = NULL;
            t = not_null(a_9);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  f_9 = t;
                  if(((e_9 != NULL) && (e_9 != f_9)))
                    _fail(f_9);
                  else
                    e_9 = f_9;
                }
              }
            }
            t = not_null(e_9);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL,r_9 = NULL;
  o_9 = t;
  m_9 :
  if(match_cons(o_9, sym__2))
    {
      p_9 = ATgetArgument(o_9, 0);
      r_9 = ATgetArgument(o_9, 1);
      n_9 :
      if(match_cons(p_9, sym_Stream_1))
        {
          q_9 = ATgetArgument(p_9, 0);
          {
            ATerm u_9 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_9), not_null(r_9));
            {
              ATerm v_9 = NULL;
              v_9 = t;
              if(((u_9 != NULL) && (u_9 != v_9)))
                _fail(v_9);
              else
                u_9 = v_9;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_9));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  ATerm i_10 (ATerm t)
  {
    t = SSL_fclose(not_null(c_10));
    return(t);
  }
  c_10 = t;
  a_10 :
  if(match_cons(c_10, sym_Stream_1))
    {
      b_10 = ATgetArgument(c_10, 0);
      {
        ATerm k_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(b_10));
            ;
            LocalPopChoice(s_12);
          }
        else
          {
            t = k_12;
            t = i_10(t);
          }
      }
    }
  else
    {
      t = i_10(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym__2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        ATerm r_10 = NULL;
        t = SSL_fopen(not_null(n_10), not_null(o_10));
        {
          ATerm s_10 = NULL;
          s_10 = t;
          if(((r_10 != NULL) && (r_10 != s_10)))
            _fail(s_10);
          else
            r_10 = s_10;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_10));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm w_10 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm x_10 = NULL;
    x_10 = t;
    if(((w_10 != NULL) && (w_10 != x_10)))
      _fail(x_10);
    else
      w_10 = x_10;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_10));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm a_11 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm b_11 = NULL;
    b_11 = t;
    if(((a_11 != NULL) && (a_11 != b_11)))
      _fail(b_11);
    else
      a_11 = b_11;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(a_11));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm e_11 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm f_11 = NULL;
    f_11 = t;
    if(((e_11 != NULL) && (e_11 != f_11)))
      _fail(f_11);
    else
      e_11 = f_11;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(e_11));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm l_11 = NULL;
  l_11 = t;
  k_11 :
  if(match_cons(l_11, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(l_11, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(l_11, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm v_11 = NULL;
  ATerm x_11 = NULL,y_11 = NULL;
  v_11 = t;
  {
    ATerm z_11 = NULL;
    ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
    t = not_null(v_11);
    {
      z_11 = t;
      {
        t = SSL_explode_term(not_null(z_11));
        {
          b_12 = t;
          s_11 :
          if(match_cons(b_12, sym__2))
            {
              c_12 = ATgetArgument(b_12, 0);
              d_12 = ATgetArgument(b_12, 1);
              t_11 :
              if(match_string(c_12, ""))
                {
                  u_11 :
                  if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
                    {
                      e_12 = ATgetFirst((ATermList) d_12);
                      f_12 = (ATerm) ATgetNext((ATermList) d_12);
                      {
                        if(((y_11 != NULL) && (y_11 != e_12)))
                          _fail(e_12);
                        else
                          y_11 = e_12;
                        if(((x_11 != NULL) && (x_11 != f_12)))
                          _fail(f_12);
                        else
                          x_11 = f_12;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(y_11);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym__2))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      {
        ATerm t_12 = t;
        int u_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(u_12);
          }
        else
          {
            t = t_12;
            {
              ATerm v_12 = t;
              int w_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_1 (ATerm t)
                  {
                    ATerm q_12 = NULL,r_12 = NULL;
                    q_12 = t;
                    l_12 :
                    if(match_cons(q_12, sym_Path_1))
                      {
                        r_12 = ATgetArgument(q_12, 0);
                        t = not_null(r_12);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, x_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(w_12);
                }
              else
                {
                  t = v_12;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToFile_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL;
  z_12 = t;
  y_12 :
  if(match_cons(z_12, sym__2))
    {
      a_13 = ATgetArgument(z_12, 0);
      b_13 = ATgetArgument(z_12, 1);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        t = not_null(a_13);
        {
          ATerm f_13 = NULL;
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_13), term_x_12);
            {
              t = open_stream_0(t);
              {
                ATerm h_13 = NULL;
                h_13 = t;
                if(((g_13 != NULL) && (g_13 != h_13)))
                  _fail(h_13);
                else
                  g_13 = h_13;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(b_13));
                  {
                    t = i_65(t);
                    {
                      t = fclose_0(t);
                      t = not_null(b_13);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm n_13 = NULL;
  ATerm p_13 = NULL;
  n_13 = t;
  {
    ATerm q_13 = NULL;
    t = xtc_new_file_0(t);
    {
      q_13 = t;
      {
        if(((p_13 != NULL) && (p_13 != q_13)))
          _fail(q_13);
        else
          p_13 = q_13;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(n_13));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(p_13);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_13));
  }
  return(t);
}
ATerm xtc_transform_term_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  t = write_to_0(t);
  {
    t = xtc_transform_file_2(t, o_83, p_83);
    t = read_from_0(t);
  }
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  t = SSL_close_file(not_null(u_13));
  return(t);
}
ATerm execvp_0 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL;
  z_13 = t;
  y_13 :
  if(match_cons(z_13, sym__2))
    {
      a_14 = ATgetArgument(z_13, 0);
      b_14 = ATgetArgument(z_13, 1);
      t = SSL_execvp(not_null(a_14), not_null(b_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm g_14 = NULL;
  g_14 = t;
  t = SSL_int_to_string(not_null(g_14));
  return(t);
}
ATerm signal_to_descr_0 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL;
  o_14 = t;
  n_14 :
  if(match_cons(o_14, sym_UnknownSignal_1))
    {
      p_14 = ATgetArgument(o_14, 0);
      {
        ATerm t_14 = NULL;
        ATerm u_14 = NULL;
        t = not_null(p_14);
        {
          t = int_to_string_0(t);
          {
            u_14 = t;
            if(((t_14 != NULL) && (t_14 != u_14)))
              _fail(u_14);
            else
              t_14 = u_14;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_13), not_null(t_14)), term_c_13);
          t = concat_strings_0(t);
        }
      }
    }
  else
    {
      if(match_cons(o_14, sym_Signal_3))
        {
          p_14 = ATgetArgument(o_14, 0);
          q_14 = ATgetArgument(o_14, 1);
          r_14 = ATgetArgument(o_14, 2);
          {
            ATerm y_14 = NULL;
            ATerm z_14 = NULL;
            t = not_null(q_14);
            {
              t = int_to_string_0(t);
              {
                z_14 = t;
                if(((y_14 != NULL) && (y_14 != z_14)))
                  _fail(z_14);
                else
                  y_14 = z_14;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(r_14)), term_j_13), not_null(y_14)), term_i_13), not_null(p_14));
              t = concat_strings_0(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm fetch_elem_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm f_15 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm g_15 = NULL;
    t = m_69(t);
    {
      g_15 = t;
      if(((f_15 != NULL) && (f_15 != g_15)))
        _fail(g_15);
      else
        f_15 = g_15;
    }
    return(t);
  }
  t = fetch_1(t, y_1);
  t = not_null(f_15);
  return(t);
}
ATerm signal_from_number_0 (ATerm t)
{
  ATerm l_15 = NULL;
  l_15 = t;
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_21), term_j_21), term_d_21), term_x_20), term_n_20), term_j_20), term_e_20), term_y_19), term_s_19), term_i_19), term_w_18), term_l_18), term_c_18), term_u_17), term_m_17), term_x_16), term_s_16), term_m_16), term_h_16), term_v_15), term_m_15), term_e_15), term_a_15), term_s_14), term_j_14), term_f_14), term_x_13), term_s_13);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
            n_15 = t;
            k_15 :
            if(match_cons(n_15, sym_Signal_3))
              {
                o_15 = ATgetArgument(n_15, 0);
                p_15 = ATgetArgument(n_15, 1);
                q_15 = ATgetArgument(n_15, 2);
                if(((l_15 != NULL) && (l_15 != p_15)))
                  _fail(p_15);
                else
                  l_15 = p_15;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_elem_1(t, z_1);
        }
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = (ATerm) ATmakeAppl(sym_UnknownSignal_1, not_null(l_15));
      }
  }
  return(t);
}
ATerm warn_ifsignaled_0 (ATerm t)
{
  ATerm o_21;
  o_21 = t;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
      x_15 = t;
      w_15 :
      if(match_cons(x_15, sym_WaitStatus_3))
        {
          y_15 = ATgetArgument(x_15, 0);
          z_15 = ATgetArgument(x_15, 1);
          a_16 = ATgetArgument(x_15, 2);
          {
            ATerm d_16 = NULL;
            t = not_null(z_15);
            {
              ATerm p_21 = t;
              if((PushChoice() == 0))
                {
                  ATerm c_16 = NULL;
                  c_16 = t;
                  u_15 :
                  if(!(match_int(c_16, -1)))
                    {
                      _fail(t);
                    }
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = p_21;
                }
              {
                t = signal_from_number_0(t);
                {
                  t = signal_to_descr_0(t);
                  {
                    ATerm e_16 = NULL;
                    e_16 = t;
                    if(((d_16 != NULL) && (d_16 != e_16)))
                      _fail(e_16);
                    else
                      d_16 = e_16;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_16)), term_q_21));
                      t = printnl_0(t);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, a_2);
  }
  t = o_21;
  return(t);
}
ATerm waitpid_0 (ATerm t)
{
  ATerm i_16 = NULL;
  i_16 = t;
  t = SSL_waitpid(not_null(i_16));
  return(t);
}
ATerm fork_0 (ATerm t)
{
  t = SSL_fork();
  return(t);
}
ATerm fork_2 (ATerm t, ATerm v_63 (ATerm), ATerm w_63 (ATerm))
{
  ATerm p_16 = NULL;
  ATerm r_16 = NULL;
  p_16 = t;
  {
    t = fork_0(t);
    {
      r_16 = t;
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_16 = NULL;
            t_16 = t;
            o_16 :
            if(match_int(t_16, 0))
              {
                t = not_null(p_16);
                t = v_63(t);
              }
            else
              {
                _fail(t);
              }
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(p_16));
              t = w_63(t);
            }
          }
      }
    }
  }
  return(t);
}
ATerm fork_and_wait_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm c_17 = NULL;
  ATerm b_2 (ATerm t)
  {
    ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
    d_17 = t;
    b_17 :
    if(match_cons(d_17, sym__2))
      {
        e_17 = ATgetArgument(d_17, 0);
        f_17 = ATgetArgument(d_17, 1);
        {
          ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL;
          if(((c_17 != NULL) && (c_17 != f_17)))
            _fail(f_17);
          else
            c_17 = f_17;
          {
            t = not_null(e_17);
            {
              t = waitpid_0(t);
              {
                t = warn_ifsignaled_0(t);
                {
                  h_17 = t;
                  z_16 :
                  if(match_cons(h_17, sym_WaitStatus_3))
                    {
                      i_17 = ATgetArgument(h_17, 0);
                      j_17 = ATgetArgument(h_17, 1);
                      k_17 = ATgetArgument(h_17, 2);
                      a_17 :
                      if(match_int(i_17, 0))
                        {
                          t = not_null(c_17);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = fork_2(t, x_63, b_2);
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym__2))
    {
      q_17 = ATgetArgument(p_17, 0);
      r_17 = ATgetArgument(p_17, 1);
      {
        ATerm c_2 (ATerm t)
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(r_17));
          t = execvp_0(t);
          return(t);
        }
        t = fork_and_wait_1(t, c_2);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_find_warning_0 (ATerm t)
{
  t = xtc_find_0(t);
  return(t);
}
ATerm xtc_command_1 (ATerm t, ATerm f_83 (ATerm))
{
  ATerm x_17 = NULL;
  ATerm t_21;
  t_21 = t;
  {
    ATerm y_17 = NULL;
    t = f_83(t);
    {
      t = xtc_find_warning_0(t);
      {
        y_17 = t;
        if(((x_17 != NULL) && (x_17 != y_17)))
          _fail(y_17);
        else
          x_17 = y_17;
      }
    }
  }
  t = t_21;
  {
    ATerm u_21;
    u_21 = t;
    {
      ATerm z_17 = NULL;
      ATerm a_18 = NULL;
      a_18 = t;
      if(((z_17 != NULL) && (z_17 != a_18)))
        _fail(a_18);
      else
        z_17 = a_18;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(z_17));
        t = call_0(t);
      }
    }
    t = u_21;
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  i_18 = t;
  h_18 :
  if(match_cons(i_18, sym__2))
    {
      j_18 = ATgetArgument(i_18, 0);
      k_18 = ATgetArgument(i_18, 1);
      {
        ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
        ATerm v_21;
        v_21 = t;
        {
          ATerm q_18 = NULL;
          ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
          t = q_79(t);
          {
            q_18 = t;
            {
              if(((n_18 != NULL) && (n_18 != q_18)))
                _fail(q_18);
              else
                n_18 = q_18;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_18), not_null(j_18), not_null(k_18));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_21 = t;
                    int d_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_e_22);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(d_22);
                      }
                    else
                      {
                        t = y_21;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      r_18 = t;
                      g_18 :
                      if(((ATgetType(r_18) == AT_LIST) && !(ATisEmpty(r_18))))
                        {
                          s_18 = ATgetFirst((ATermList) r_18);
                          t_18 = (ATerm) ATgetNext((ATermList) r_18);
                          {
                            if(((o_18 != NULL) && (o_18 != s_18)))
                              _fail(s_18);
                            else
                              o_18 = s_18;
                            {
                              if(((p_18 != NULL) && (p_18 != t_18)))
                                _fail(t_18);
                              else
                                p_18 = t_18;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_18), term_e_22, (ATerm) ATinsert(CheckATermList(not_null(p_18)), (ATerm) ATinsert(CheckATermList(not_null(o_18)), not_null(j_18))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
              }
            }
          }
        }
        t = v_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm f_22;
  f_22 = t;
  {
    t = b_65(t);
    {
      ATerm d_2 (ATerm t)
      {
        t = term_g_22;
        return(t);
      }
      t = debug_1(t, d_2);
    }
  }
  t = f_22;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm b_19 = NULL,c_19 = NULL,d_19 = NULL;
  ATerm k_19 (ATerm t)
  {
    ATerm h_22 = t;
    if((PushChoice() == 0))
      {
        ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
        f_19 = t;
        z_18 :
        if(match_cons(f_19, sym__2))
          {
            g_19 = ATgetArgument(f_19, 0);
            h_19 = ATgetArgument(f_19, 1);
            {
            }
          }
        else
          {
            _fail(t);
          }
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_22;
      }
    {
      ATerm e_2 (ATerm t)
      {
        t = term_i_22;
        return(t);
      }
      t = obsolete_1(t, e_2);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_19), term_x_12);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm l_19 (ATerm t)
  {
    t = SSL_open_file(not_null(c_19), not_null(d_19));
    return(t);
  }
  b_19 = t;
  a_19 :
  if(match_cons(b_19, sym__2))
    {
      c_19 = ATgetArgument(b_19, 0);
      d_19 = ATgetArgument(b_19, 1);
      {
        ATerm j_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_19(t);
            ;
            LocalPopChoice(n_22);
          }
        else
          {
            t = j_22;
            t = l_19(t);
          }
      }
    }
  else
    {
      t = k_19(t);
    }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym__2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      t = SSL_access(not_null(p_19), not_null(q_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm w_19 = NULL;
  ATerm x_19 = NULL;
  x_19 = t;
  if(((w_19 != NULL) && (w_19 != x_19)))
    _fail(x_19);
  else
    w_19 = x_19;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), (ATerm) ATinsert(ATempty, term_o_22));
    t = access_0(t);
  }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm a_20 = NULL;
  ATerm b_20 = NULL;
  t = term_s_22;
  {
    t = new_0(t);
    {
      b_20 = t;
      if(((a_20 != NULL) && (a_20 != b_20)))
        _fail(b_20);
      else
        a_20 = b_20;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), term_v_22);
    {
      t = conc_strings_0(t);
      {
        ATerm g_2 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, g_2);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm f_20 = NULL;
  t = new_file_0(t);
  {
    f_20 = t;
    {
      ATerm w_22;
      w_22 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), term_x_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_20), term_s_22);
            {
              ATerm h_2 (ATerm t)
              {
                t = term_x_22;
                return(t);
              }
              t = assert_1(t, h_2);
            }
          }
        }
      }
      t = w_22;
    }
  }
  return(t);
}
ATerm xtc_transform_file_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm p_20 = NULL,q_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_stdin_0))
    {
      ATerm r_20 = NULL;
      ATerm u_20 = NULL;
      ATerm v_20 = NULL;
      t = xtc_new_file_0(t);
      {
        u_20 = t;
        {
          if(((r_20 != NULL) && (r_20 != u_20)))
            _fail(u_20);
          else
            r_20 = u_20;
          {
            ATerm w_20 = NULL;
            t = o_0(t);
            {
              w_20 = t;
              if(((v_20 != NULL) && (v_20 != w_20)))
                _fail(w_20);
              else
                v_20 = w_20;
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_20)), term_y_22));
              {
                t = conc_0(t);
                {
                  t = xtc_command_1(t, n_0);
                  {
                    t = not_null(r_20);
                    t = close_file_0(t);
                  }
                }
              }
            }
          }
        }
      }
      t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(r_20));
    }
  else
    {
      if(match_cons(p_20, sym_FILE_1))
        {
          q_20 = ATgetArgument(p_20, 0);
          {
            ATerm b_21 = NULL;
            ATerm c_21 = NULL;
            t = not_null(q_20);
            {
              ATerm h_21 = NULL;
              t = xtc_new_file_0(t);
              {
                c_21 = t;
                {
                  if(((b_21 != NULL) && (b_21 != c_21)))
                    _fail(c_21);
                  else
                    b_21 = c_21;
                  {
                    ATerm i_21 = NULL;
                    t = o_0(t);
                    {
                      i_21 = t;
                      if(((h_21 != NULL) && (h_21 != i_21)))
                        _fail(i_21);
                      else
                        h_21 = i_21;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_21), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(b_21)), term_y_22), not_null(q_20)), term_z_22));
                      {
                        t = conc_0(t);
                        {
                          t = xtc_command_1(t, n_0);
                          {
                            t = not_null(b_21);
                            t = close_file_0(t);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_21));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm stdin_0 (ATerm t)
{
  ATerm x_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym_stdin_0))
    {
      ATerm z_21 = NULL,b_22 = NULL;
      ATerm b_23;
      b_23 = t;
      {
        ATerm a_22 = NULL;
        t = SSLgetAnnotations(not_null(x_21));
        {
          a_22 = t;
          if(((z_21 != NULL) && (z_21 != a_22)))
            _fail(a_22);
          else
            z_21 = a_22;
        }
      }
      t = b_23;
      {
        ATerm c_22 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdin_0), not_null(z_21));
        {
          c_22 = t;
          if(((b_22 != NULL) && (b_22 != c_22)))
            _fail(c_22);
          else
            b_22 = c_22;
        }
        t = not_null(b_22);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm FILE_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_FILE_1))
    {
      m_22 = ATgetArgument(l_22, 0);
      {
        ATerm p_22 = NULL,r_22 = NULL;
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        {
          t = not_null(m_22);
          {
            ATerm t_22 = NULL;
            t = s_61(t);
            {
              r_22 = t;
              {
                ATerm u_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FILE_1, not_null(r_22)), not_null(p_22));
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
                t = not_null(t_22);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm xtc_transform_2 (ATerm t, ATerm h_83 (ATerm), ATerm i_83 (ATerm))
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_23 = t;
      int j_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = FILE_1(t, _id);
          ;
          LocalPopChoice(j_23);
        }
      else
        {
          t = i_23;
          t = stdin_0(t);
        }
      LocalPopChoice(d_23);
      t = xtc_transform_file_2(t, h_83, i_83);
    }
  else
    {
      t = c_23;
      t = xtc_transform_term_2(t, h_83, i_83);
    }
  return(t);
}
ATerm xtc_transform_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = xtc_transform_2(t, g_83, i_2);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = SSL_implode_string(not_null(a_23));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
      {
        ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
        f_23 = t;
        e_23 :
        if(((ATgetType(f_23) == AT_LIST) && !(ATisEmpty(f_23))))
          {
            g_23 = ATgetFirst((ATermList) f_23);
            h_23 = (ATerm) ATgetNext((ATermList) f_23);
            {
              t = not_null(g_23);
              {
                ATerm j_2 (ATerm t)
                {
                  t = not_null(h_23);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_2);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm r_23 = NULL;
  ATerm t_23 = NULL;
  r_23 = t;
  {
    ATerm u_23 = NULL;
    ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
    t = not_null(r_23);
    {
      u_23 = t;
      {
        t = SSL_explode_term(not_null(u_23));
        {
          w_23 = t;
          p_23 :
          if(match_cons(w_23, sym__2))
            {
              x_23 = ATgetArgument(w_23, 0);
              y_23 = ATgetArgument(w_23, 1);
              q_23 :
              if(match_string(x_23, ""))
                {
                  if(((t_23 != NULL) && (t_23 != y_23)))
                    _fail(y_23);
                  else
                    t_23 = y_23;
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_23);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm c_24 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_24);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        {
          t = Nil_0(t);
          t = q_69(t);
        }
      }
    return(t);
  }
  t = c_24(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_24 = NULL,g_24 = NULL,l_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym__2))
    {
      g_24 = ATgetArgument(f_24, 0);
      l_24 = ATgetArgument(f_24, 1);
      {
        t = not_null(g_24);
        {
          ATerm k_2 (ATerm t)
          {
            t = not_null(l_24);
            return(t);
          }
          t = at_end_1(t, k_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm o_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(s_23);
    }
  else
    {
      t = o_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_explode_string(not_null(t_24));
  return(t);
}
ATerm _2 (ATerm t, ATerm j_55 (ATerm), ATerm k_55 (ATerm))
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      {
        ATerm k_25 = NULL,m_25 = NULL;
        ATerm l_25 = NULL;
        t = SSLgetAnnotations(not_null(c_25));
        {
          l_25 = t;
          if(((k_25 != NULL) && (k_25 != l_25)))
            _fail(l_25);
          else
            k_25 = l_25;
        }
        {
          t = not_null(d_25);
          {
            ATerm o_25 = NULL;
            t = j_55(t);
            {
              m_25 = t;
              {
                t = not_null(e_25);
                {
                  ATerm q_25 = NULL;
                  t = k_55(t);
                  {
                    o_25 = t;
                    {
                      ATerm r_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_25), not_null(o_25)), not_null(k_25));
                      {
                        r_25 = t;
                        if(((q_25 != NULL) && (q_25 != r_25)))
                          _fail(r_25);
                        else
                          q_25 = r_25;
                      }
                      t = not_null(q_25);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm v_23;
  v_23 = t;
  {
    ATerm z_25 = NULL,g_26 = NULL;
    ATerm z_23;
    z_23 = t;
    {
      ATerm a_26 = NULL;
      t = u_64(t);
      {
        a_26 = t;
        if(((z_25 != NULL) && (z_25 != a_26)))
          _fail(a_26);
        else
          z_25 = a_26;
      }
    }
    t = z_23;
    {
      ATerm h_26 = NULL;
      h_26 = t;
      if(((g_26 != NULL) && (g_26 != h_26)))
        _fail(h_26);
      else
        g_26 = h_26;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_26)), not_null(z_25)));
        t = printnl_0(t);
      }
    }
  }
  t = v_23;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm l_26 = NULL;
  l_26 = t;
  t = SSL_is_string(not_null(l_26));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm d_24 = t;
        int h_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_2);
            ;
            LocalPopChoice(h_24);
          }
        else
          {
            t = d_24;
            {
              ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
              z_26 = t;
              x_26 :
              if(match_cons(z_26, sym_Path_1))
                {
                  a_27 = ATgetArgument(z_26, 0);
                  t = not_null(a_27);
                }
              else
                {
                  if(match_cons(z_26, sym_Var_1))
                    {
                      a_27 = ATgetArgument(z_26, 0);
                      {
                        t = not_null(a_27);
                        {
                          ATerm i_24 = t;
                          int j_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(j_24);
                            }
                          else
                            {
                              t = i_24;
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = term_k_24;
                                  return(t);
                                }
                                t = debug_1(t, m_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(z_26, sym_Prefix_2))
                        {
                          a_27 = ATgetArgument(z_26, 0);
                          b_27 = ATgetArgument(z_26, 1);
                          {
                            ATerm g_27 = NULL,i_27 = NULL;
                            ATerm m_24;
                            m_24 = t;
                            {
                              ATerm h_27 = NULL;
                              t = not_null(a_27);
                              {
                                t = eval_config_0(t);
                                {
                                  h_27 = t;
                                  if(((g_27 != NULL) && (g_27 != h_27)))
                                    _fail(h_27);
                                  else
                                    g_27 = h_27;
                                }
                              }
                            }
                            t = m_24;
                            {
                              ATerm j_27 = NULL;
                              t = not_null(b_27);
                              {
                                t = eval_config_0(t);
                                {
                                  j_27 = t;
                                  if(((i_27 != NULL) && (i_27 != j_27)))
                                    _fail(j_27);
                                  else
                                    i_27 = j_27;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_27), not_null(i_27));
                                t = conc_strings_0(t);
                              }
                            }
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_24, not_null(r_27));
    {
      t = table_get_0(t);
      {
        ATerm n_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_24;
            o_24 = t;
            {
              ATerm t_27 = NULL;
              ATerm u_27 = NULL;
              u_27 = t;
              if(((t_27 != NULL) && (t_27 != u_27)))
                _fail(u_27);
              else
                t_27 = u_27;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_24, not_null(r_27), not_null(t_27));
                t = table_put_0(t);
              }
            }
            t = o_24;
          }
          return(t);
        }
        t = try_1(t, n_2);
      }
    }
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,b_28 = NULL;
  z_27 = t;
  y_27 :
  if(match_cons(z_27, sym__2))
    {
      a_28 = ATgetArgument(z_27, 0);
      b_28 = ATgetArgument(z_27, 1);
      t = SSL_copy(not_null(a_28), not_null(b_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym_stderr_0))
    {
      ATerm l_28 = NULL,n_28 = NULL;
      ATerm p_24;
      p_24 = t;
      {
        ATerm m_28 = NULL;
        t = SSLgetAnnotations(not_null(j_28));
        {
          m_28 = t;
          if(((l_28 != NULL) && (l_28 != m_28)))
            _fail(m_28);
          else
            l_28 = m_28;
        }
      }
      t = p_24;
      {
        ATerm o_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(l_28));
        {
          o_28 = t;
          if(((n_28 != NULL) && (n_28 != o_28)))
            _fail(o_28);
          else
            n_28 = o_28;
        }
        t = not_null(n_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym_stdout_0))
    {
      ATerm y_28 = NULL,a_29 = NULL;
      ATerm q_24;
      q_24 = t;
      {
        ATerm z_28 = NULL;
        t = SSLgetAnnotations(not_null(w_28));
        {
          z_28 = t;
          if(((y_28 != NULL) && (y_28 != z_28)))
            _fail(z_28);
          else
            y_28 = z_28;
        }
      }
      t = q_24;
      {
        ATerm b_29 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(y_28));
        {
          b_29 = t;
          if(((a_29 != NULL) && (a_29 != b_29)))
            _fail(b_29);
          else
            a_29 = b_29;
        }
        t = not_null(a_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  m_29 :
  if(match_cons(n_29, sym_FILE_1))
    {
      o_29 = ATgetArgument(n_29, 0);
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_29 = NULL;
            ATerm r_29 = NULL;
            t = m_0(t);
            {
              r_29 = t;
              {
                if(((q_29 != NULL) && (q_29 != r_29)))
                  _fail(r_29);
                else
                  q_29 = r_29;
                {
                  ATerm u_24 = t;
                  int v_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(v_24);
                    }
                  else
                    {
                      t = u_24;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(q_29));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_29));
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm w_24 = t;
              int x_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_29 = NULL;
                  ATerm u_29 = NULL;
                  t = m_0(t);
                  {
                    u_29 = t;
                    {
                      if(((t_29 != NULL) && (t_29 != u_29)))
                        _fail(u_29);
                      else
                        t_29 = u_29;
                      {
                        ATerm y_24 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm z_24 = t;
                            int a_25 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(a_25);
                              }
                            else
                              {
                                t = z_24;
                                {
                                  ATerm f_25 = t;
                                  int g_25 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(g_25);
                                    }
                                  else
                                    {
                                      t = f_25;
                                      {
                                        ATerm v_29 = NULL;
                                        v_29 = t;
                                        if(((o_29 != NULL) && (o_29 != v_29)))
                                          _fail(v_29);
                                        else
                                          o_29 = v_29;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = y_24;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_29), not_null(t_29));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_29));
                  ;
                  LocalPopChoice(x_24);
                }
              else
                {
                  t = w_24;
                  {
                    ATerm x_29 = NULL;
                    t = m_0(t);
                    {
                      x_29 = t;
                      if(((o_29 != NULL) && (o_29 != x_29)))
                        _fail(x_29);
                      else
                        o_29 = x_29;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(o_29));
                  }
                }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  g_30 :
  if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
    {
      i_30 = ATgetFirst((ATermList) h_30);
      j_30 = (ATerm) ATgetNext((ATermList) h_30);
      t = not_null(j_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      {
        ATerm h_25;
        h_25 = t;
        {
          ATerm u_30 = NULL;
          ATerm v_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), not_null(r_30));
          {
            ATerm i_25 = t;
            int j_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(j_25);
              }
            else
              {
                t = i_25;
                t = (ATerm) ATempty;
              }
            {
              v_30 = t;
              if(((u_30 != NULL) && (u_30 != v_30)))
                _fail(v_30);
              else
                u_30 = v_30;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_30), not_null(r_30), not_null(u_30));
            t = table_put_0(t);
          }
        }
        t = h_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  ATerm n_25;
  n_25 = t;
  {
    ATerm f_31 = NULL;
    ATerm g_31 = NULL,j_31 = NULL,k_31 = NULL;
    t = n_79(t);
    {
      f_31 = t;
      {
        if(((e_31 != NULL) && (e_31 != f_31)))
          _fail(f_31);
        else
          e_31 = f_31;
        {
          ATerm p_25 = t;
          int s_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), term_e_22);
              t = table_get_0(t);
              ;
              LocalPopChoice(s_25);
            }
          else
            {
              t = p_25;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_31 = t;
            b_31 :
            if(((ATgetType(g_31) == AT_LIST) && !(ATisEmpty(g_31))))
              {
                j_31 = ATgetFirst((ATermList) g_31);
                k_31 = (ATerm) ATgetNext((ATermList) g_31);
                {
                  if(((d_31 != NULL) && (d_31 != j_31)))
                    _fail(j_31);
                  else
                    d_31 = j_31;
                  {
                    if(((c_31 != NULL) && (c_31 != k_31)))
                      _fail(k_31);
                    else
                      c_31 = k_31;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_31), term_e_22, not_null(c_31));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_31);
                          {
                            ATerm o_2 (ATerm t)
                            {
                              ATerm o_31 = NULL;
                              o_31 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_31), not_null(o_31));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, o_2);
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  }
  t = n_25;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  t = SSL_remove(not_null(v_31));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm i_80 (ATerm), ATerm j_80 (ATerm))
{
  ATerm t_25 = t;
  int u_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_80(t);
      t = j_80(t);
      ;
      LocalPopChoice(u_25);
    }
  else
    {
      t = t_25;
      {
        t = j_80(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm a_32 = NULL;
  ATerm v_25;
  v_25 = t;
  {
    ATerm b_32 = NULL;
    ATerm c_32 = NULL;
    t = m_79(t);
    {
      b_32 = t;
      {
        if(((a_32 != NULL) && (a_32 != b_32)))
          _fail(b_32);
        else
          a_32 = b_32;
        {
          ATerm d_32 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_32), term_e_22);
          {
            ATerm w_25 = t;
            int x_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_25);
              }
            else
              {
                t = w_25;
                t = (ATerm) ATempty;
              }
            {
              d_32 = t;
              if(((c_32 != NULL) && (c_32 != d_32)))
                _fail(d_32);
              else
                c_32 = d_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_32), term_e_22, (ATerm) ATinsert(CheckATermList(not_null(c_32)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = v_25;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm r_82 (ATerm))
{
  ATerm i_32 = NULL,j_32 = NULL;
  ATerm p_2 (ATerm t)
  {
    t = term_x_22;
    return(t);
  }
  t = begin_scope_1(t, p_2);
  {
    ATerm q_2 (ATerm t)
    {
      ATerm y_25;
      y_25 = t;
      {
        ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_26;
            t = table_get_0(t);
            ;
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          k_32 = t;
          h_32 :
          if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
            {
              l_32 = ATgetFirst((ATermList) k_32);
              m_32 = (ATerm) ATgetNext((ATermList) k_32);
              {
                if(((j_32 != NULL) && (j_32 != l_32)))
                  _fail(l_32);
                else
                  j_32 = l_32;
                {
                  if(((i_32 != NULL) && (i_32 != m_32)))
                    _fail(m_32);
                  else
                    i_32 = m_32;
                  {
                    t = not_null(j_32);
                    {
                      ATerm r_2 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, r_2);
                    }
                  }
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      }
      t = y_25;
      {
        ATerm s_2 (ATerm t)
        {
          t = term_x_22;
          return(t);
        }
        t = end_scope_1(t, s_2);
      }
      return(t);
    }
    t = restore_always_2(t, r_82, q_2);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm s_82 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_32 = NULL;
        ATerm q_32 = NULL;
        t = term_z_22;
        {
          t = get_config_0(t);
          {
            q_32 = t;
            if(((p_32 != NULL) && (p_32 != q_32)))
              _fail(q_32);
            else
              p_32 = q_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_32));
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        t = term_j_12;
      }
    {
      t = s_82(t);
      {
        ATerm v_2 (ATerm t)
        {
          ATerm i_26 = t;
          int j_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_y_22;
              t = get_config_0(t);
              ;
              LocalPopChoice(j_26);
            }
          else
            {
              t = i_26;
              t = term_k_26;
            }
          return(t);
        }
        t = copy_to_1(t, v_2);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, t_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm v_32 = NULL;
    v_32 = t;
    u_32 :
    if(!(match_string(v_32, "-v")))
      {
        if(!(match_string(v_32, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_n_26;
    t = set_config_0(t);
    t = term_o_26;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  t = Option_3(t, w_2, x_2, z_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm y_32 = NULL;
    y_32 = t;
    w_32 :
    if(!(match_string(y_32, "-k")))
      {
        if(!(match_string(y_32, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm q_26;
    q_26 = t;
    {
      ATerm z_32 = NULL;
      ATerm a_33 = NULL;
      t = string_to_int_0(t);
      {
        a_33 = t;
        if(((z_32 != NULL) && (z_32 != a_33)))
          _fail(a_33);
        else
          z_32 = a_33;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_26, not_null(z_32));
        t = set_config_0(t);
      }
    }
    t = q_26;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_s_26;
    return(t);
  }
  t = ArgOption_3(t, a_3, d_3, e_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_33 = NULL;
  d_33 = t;
  t = SSL_string_to_int(not_null(d_33));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm t_26 = t;
  int u_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm l_33 = NULL;
        l_33 = t;
        g_33 :
        if(!(match_string(l_33, "-S")))
          {
            if(!(match_string(l_33, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_w_26;
        t = set_config_0(t);
        t = term_y_26;
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = term_c_27;
        return(t);
      }
      t = Option_3(t, f_3, j_3, r_3);
      ;
      LocalPopChoice(u_26);
    }
  else
    {
      t = t_26;
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 (ATerm t)
            {
              ATerm m_33 = NULL;
              m_33 = t;
              h_33 :
              if(!(match_string(m_33, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              ATerm p_33 = NULL;
              ATerm f_27;
              f_27 = t;
              {
                ATerm n_33 = NULL;
                ATerm o_33 = NULL;
                t = string_to_int_0(t);
                {
                  o_33 = t;
                  if(((n_33 != NULL) && (n_33 != o_33)))
                    _fail(o_33);
                  else
                    n_33 = o_33;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_7, not_null(n_33));
                  t = set_config_0(t);
                }
              }
              t = f_27;
              {
                ATerm q_33 = NULL;
                q_33 = t;
                if(((p_33 != NULL) && (p_33 != q_33)))
                  _fail(q_33);
                else
                  p_33 = q_33;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(p_33));
              }
              return(t);
            }
            ATerm u_3 (ATerm t)
            {
              t = term_k_27;
              return(t);
            }
            t = ArgOption_3(t, s_3, t_3, u_3);
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm a_4 (ATerm t)
              {
                ATerm r_33 = NULL;
                r_33 = t;
                k_33 :
                if(!(match_string(r_33, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                t = term_m_27;
                t = set_config_0(t);
                t = term_n_27;
                return(t);
              }
              ATerm g_4 (ATerm t)
              {
                t = term_o_27;
                return(t);
              }
              t = Option_3(t, a_4, b_4, g_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm p_27 = t;
  int q_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(q_27);
    }
  else
    {
      t = p_27;
      {
        ATerm s_27 = t;
        int v_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(v_27);
          }
        else
          {
            t = s_27;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_4 (ATerm t)
  {
    ATerm x_33 = NULL;
    x_33 = t;
    u_33 :
    if(!(match_string(x_33, "-o")))
      {
        if(!(match_string(x_33, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm a_34 = NULL;
    ATerm w_27;
    w_27 = t;
    {
      ATerm y_33 = NULL;
      ATerm z_33 = NULL;
      z_33 = t;
      if(((y_33 != NULL) && (y_33 != z_33)))
        _fail(z_33);
      else
        y_33 = z_33;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_22, not_null(y_33));
        t = set_config_0(t);
      }
    }
    t = w_27;
    {
      ATerm b_34 = NULL;
      b_34 = t;
      if(((a_34 != NULL) && (a_34 != b_34)))
        _fail(b_34);
      else
        a_34 = b_34;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_34));
    }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    t = term_x_27;
    return(t);
  }
  t = ArgOption_3(t, h_4, i_4, n_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(d_28);
    }
  else
    {
      t = c_28;
      {
        ATerm o_4 (ATerm t)
        {
          ATerm f_34 = NULL;
          f_34 = t;
          e_34 :
          if(!(match_string(f_34, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_f_28;
          t = set_config_0(t);
          t = term_g_28;
          return(t);
        }
        ATerm t_4 (ATerm t)
        {
          t = term_h_28;
          return(t);
        }
        t = Option_3(t, o_4, q_4, t_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL;
  l_34 = t;
  j_34 :
  if(match_string(l_34, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_34) == AT_LIST) && !(ATisEmpty(l_34))))
        {
          m_34 = ATgetFirst((ATermList) l_34);
          n_34 = (ATerm) ATgetNext((ATermList) l_34);
          k_34 :
          if(((ATgetType(n_34) == AT_LIST) && !(ATisEmpty(n_34))))
            {
              o_34 = ATgetFirst((ATermList) n_34);
              p_34 = (ATerm) ATgetNext((ATermList) n_34);
              {
                ATerm t_34 = NULL;
                ATerm k_28;
                k_28 = t;
                {
                  t = not_null(m_34);
                  t = j_0(t);
                }
                t = k_28;
                {
                  ATerm u_34 = NULL;
                  t = not_null(o_34);
                  {
                    t = k_0(t);
                    {
                      u_34 = t;
                      if(((t_34 != NULL) && (t_34 != u_34)))
                        _fail(u_34);
                      else
                        t_34 = u_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_34)), not_null(t_34));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm b_35 = NULL;
    b_35 = t;
    y_34 :
    if(!(match_string(b_35, "-i")))
      {
        if(!(match_string(b_35, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm e_35 = NULL;
    ATerm p_28;
    p_28 = t;
    {
      ATerm c_35 = NULL;
      ATerm d_35 = NULL;
      d_35 = t;
      if(((c_35 != NULL) && (c_35 != d_35)))
        _fail(d_35);
      else
        c_35 = d_35;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_22, not_null(c_35));
        t = set_config_0(t);
      }
    }
    t = p_28;
    {
      ATerm f_35 = NULL;
      f_35 = t;
      if(((e_35 != NULL) && (e_35 != f_35)))
        _fail(f_35);
      else
        e_35 = f_35;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_35));
    }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_q_28;
    return(t);
  }
  t = ArgOption_3(t, u_4, x_4, y_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm pp_stratego_options_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm j_35 = NULL;
    j_35 = t;
    i_35 :
    if(!(match_string(j_35, "-a")))
      {
        if(!(match_string(j_35, "--abstract")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    ATerm x_28;
    x_28 = t;
    {
      t = term_d_29;
      t = set_config_0(t);
    }
    t = x_28;
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_e_29;
    return(t);
  }
  t = Option_3(t, b_5, c_5, h_5);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm f_29;
  f_29 = t;
  {
    ATerm l_35 = NULL;
    ATerm m_35 = NULL;
    t = term_s_22;
    {
      t = whoami_0(t);
      {
        m_35 = t;
        if(((l_35 != NULL) && (l_35 != m_35)))
          _fail(m_35);
        else
          l_35 = m_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_29), not_null(l_35)), term_g_29));
      {
        t = printnl_0(t);
        {
          t = term_o_13;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_29;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm p_35 = NULL;
  t = report_run_time_0(t);
  {
    ATerm q_35 = NULL;
    t = term_s_22;
    {
      t = whoami_0(t);
      {
        q_35 = t;
        if(((p_35 != NULL) && (p_35 != q_35)))
          _fail(q_35);
        else
          p_35 = q_35;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, term_i_29), not_null(p_35)));
      {
        t = printnl_0(t);
        {
          t = term_o_13;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_j_29;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  t = SSL_TicksToSeconds(not_null(t_35));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
  y_35 = t;
  x_35 :
  if(match_cons(y_35, sym__2))
    {
      z_35 = ATgetArgument(y_35, 0);
      a_36 = ATgetArgument(y_35, 1);
      {
        ATerm k_29 = t;
        int l_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_35), not_null(a_36));
            ;
            LocalPopChoice(l_29);
          }
        else
          {
            t = k_29;
            t = SSL_addr(not_null(z_35), not_null(a_36));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_75 (ATerm), ATerm q_75 (ATerm))
{
  ATerm p_29 = t;
  int s_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_75(t);
      ;
      LocalPopChoice(s_29);
    }
  else
    {
      t = p_29;
      {
        ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
        h_36 = t;
        g_36 :
        if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
          {
            i_36 = ATgetFirst((ATermList) h_36);
            j_36 = (ATerm) ATgetNext((ATermList) h_36);
            {
              ATerm m_36 = NULL;
              ATerm n_36 = NULL;
              t = not_null(j_36);
              {
                t = foldr_2(t, p_75, q_75);
                {
                  n_36 = t;
                  if(((m_36 != NULL) && (m_36 != n_36)))
                    _fail(n_36);
                  else
                    m_36 = n_36;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_36), not_null(m_36));
                t = q_75(t);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm crush_2 (ATerm t, ATerm n_73 (ATerm), ATerm o_73 (ATerm))
{
  ATerm u_36 = NULL;
  ATerm w_36 = NULL;
  u_36 = t;
  {
    ATerm x_36 = NULL;
    ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
    t = not_null(u_36);
    {
      x_36 = t;
      {
        t = SSL_explode_term(not_null(x_36));
        {
          z_36 = t;
          t_36 :
          if(match_cons(z_36, sym__2))
            {
              a_37 = ATgetArgument(z_36, 0);
              b_37 = ATgetArgument(z_36, 1);
              if(((w_36 != NULL) && (w_36 != b_37)))
                _fail(b_37);
              else
                w_36 = b_37;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_36);
      t = foldr_2(t, n_73, o_73);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm i_5 (ATerm t)
    {
      t = term_v_26;
      return(t);
    }
    t = crush_2(t, i_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  h_37 = t;
  g_37 :
  if(match_cons(h_37, sym__2))
    {
      i_37 = ATgetArgument(h_37, 0);
      j_37 = ATgetArgument(h_37, 1);
      {
        ATerm w_29;
        w_29 = t;
        {
          ATerm y_29 = t;
          int z_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_37), not_null(j_37));
              ;
              LocalPopChoice(z_29);
            }
          else
            {
              t = y_29;
              t = SSL_gtr(not_null(i_37), not_null(j_37));
            }
        }
        t = w_29;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm p_37 = NULL;
  ATerm a_30 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
      q_37 = t;
      o_37 :
      if(match_cons(q_37, sym__2))
        {
          r_37 = ATgetArgument(q_37, 0);
          s_37 = ATgetArgument(q_37, 1);
          {
            if(((p_37 != NULL) && (p_37 != r_37)))
              _fail(r_37);
            else
              p_37 = r_37;
            if(((p_37 != NULL) && (p_37 != s_37)))
              _fail(s_37);
            else
              p_37 = s_37;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = a_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm j_5 (ATerm t)
  {
    ATerm c_30;
    c_30 = t;
    {
      ATerm v_37 = NULL;
      ATerm w_37 = NULL;
      t = term_p_7;
      {
        t = get_config_0(t);
        {
          w_37 = t;
          if(((v_37 != NULL) && (v_37 != w_37)))
            _fail(w_37);
          else
            v_37 = w_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_37), term_o_13);
        t = geq_0(t);
      }
    }
    t = c_30;
    t = n_80(t);
    return(t);
  }
  t = try_1(t, j_5);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm a_38 = NULL,c_38 = NULL;
    ATerm d_30;
    d_30 = t;
    {
      ATerm b_38 = NULL;
      t = run_time_0(t);
      {
        b_38 = t;
        if(((a_38 != NULL) && (a_38 != b_38)))
          _fail(b_38);
        else
          a_38 = b_38;
      }
    }
    t = d_30;
    {
      ATerm d_38 = NULL;
      t = term_s_22;
      {
        t = whoami_0(t);
        {
          d_38 = t;
          if(((c_38 != NULL) && (c_38 != d_38)))
            _fail(d_38);
          else
            c_38 = d_38;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_30), not_null(a_38)), term_i_13), not_null(c_38)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_v_26;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym_Version_0))
    {
      ATerm m_38 = NULL,o_38 = NULL;
      ATerm f_30;
      f_30 = t;
      {
        ATerm n_38 = NULL;
        t = SSLgetAnnotations(not_null(k_38));
        {
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
        }
      }
      t = f_30;
      {
        ATerm p_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_38));
        {
          p_38 = t;
          if(((o_38 != NULL) && (o_38 != p_38)))
            _fail(p_38);
          else
            o_38 = p_38;
        }
        t = not_null(o_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_84 (ATerm))
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_30;
      t = get_config_0(t);
      ;
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm p_5 (ATerm t)
        {
          ATerm n_30 = t;
          int s_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(s_30);
            }
          else
            {
              t = n_30;
              {
                ATerm t_30 = t;
                int w_30 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(w_30);
                  }
                else
                  {
                    t = t_30;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, p_5);
      }
    }
  t = t_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm x_38 = NULL;
  x_38 = t;
  t = SSL_table_create(not_null(x_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_39 = NULL;
  b_39 = t;
  {
    ATerm x_30;
    x_30 = t;
    {
      t = term_y_30;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_y_30, term_z_30, not_null(b_39));
          t = table_put_0(t);
        }
      }
    }
    t = x_30;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  t = SSL_table_destroy(not_null(f_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_39 = NULL;
  j_39 = t;
  t = SSL_exit(not_null(j_39));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,t_39 = NULL;
  p_39 = t;
  o_39 :
  if(((ATgetType(p_39) == AT_LIST) && ATisEmpty(p_39)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_39) == AT_LIST) && !(ATisEmpty(p_39))))
        {
          q_39 = ATgetFirst((ATermList) p_39);
          t_39 = (ATerm) ATgetNext((ATermList) p_39);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm echo_0 (ATerm t)
{
  ATerm a_31;
  a_31 = t;
  {
    ATerm w_39 = NULL;
    ATerm z_39 = NULL;
    ATerm h_31 = t;
    int i_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(i_31);
      }
    else
      {
        t = h_31;
        {
          ATerm x_39 = NULL;
          ATerm y_39 = NULL;
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
          t = (ATerm) ATinsert(ATempty, not_null(x_39));
        }
      }
    {
      z_39 = t;
      if(((w_39 != NULL) && (w_39 != z_39)))
        _fail(z_39);
      else
        w_39 = z_39;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_26, not_null(w_39));
      t = printnl_0(t);
    }
  }
  t = a_31;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_69 (ATerm))
{
  ATerm c_40 (ATerm t)
  {
    ATerm l_31 = t;
    int m_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(m_31);
      }
    else
      {
        t = l_31;
        t = Cons_2(t, b_69, c_40);
      }
    return(t);
  }
  t = c_40(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  l_40 = t;
  i_40 :
  if(((ATgetType(l_40) == AT_LIST) && !(ATisEmpty(l_40))))
    {
      j_40 = ATgetFirst((ATermList) l_40);
      k_40 = (ATerm) ATgetNext((ATermList) l_40);
      {
        ATerm o_40 = NULL;
        t = not_null(k_40);
        {
          ATerm n_31;
          n_31 = t;
          {
            ATerm p_40 = NULL,t_40 = NULL,v_40 = NULL;
            ATerm p_31;
            p_31 = t;
            {
              ATerm q_40 = NULL;
              t = i_0(t);
              {
                q_40 = t;
                if(((p_40 != NULL) && (p_40 != q_40)))
                  _fail(q_40);
                else
                  p_40 = q_40;
              }
            }
            t = p_31;
            {
              ATerm u_40 = NULL;
              t = not_null(j_40);
              {
                t = g_0(t);
                {
                  u_40 = t;
                  if(((t_40 != NULL) && (t_40 != u_40)))
                    _fail(u_40);
                  else
                    t_40 = u_40;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_40)), not_null(t_40));
                {
                  v_40 = t;
                  if(((o_40 != NULL) && (o_40 != v_40)))
                    _fail(v_40);
                  else
                    o_40 = v_40;
                }
              }
            }
          }
          t = n_31;
          {
            ATerm q_5 (ATerm t)
            {
              t = not_null(o_40);
              return(t);
            }
            t = reverse_acc_2(t, g_0, q_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(l_40) == AT_LIST) && ATisEmpty(l_40)))
        {
          {
            t = term_s_22;
            t = i_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_86 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_61 (ATerm))
{
  ATerm c_42 = NULL,d_42 = NULL;
  c_42 = t;
  b_42 :
  if(match_cons(c_42, sym_Program_1))
    {
      d_42 = ATgetArgument(c_42, 0);
      {
        ATerm g_42 = NULL,i_42 = NULL;
        ATerm h_42 = NULL;
        t = SSLgetAnnotations(not_null(c_42));
        {
          h_42 = t;
          if(((g_42 != NULL) && (g_42 != h_42)))
            _fail(h_42);
          else
            g_42 = h_42;
        }
        {
          t = not_null(d_42);
          {
            ATerm k_42 = NULL;
            t = z_61(t);
            {
              i_42 = t;
              {
                ATerm l_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_42)), not_null(g_42));
                {
                  l_42 = t;
                  if(((k_42 != NULL) && (k_42 != l_42)))
                    _fail(l_42);
                  else
                    k_42 = l_42;
                }
                t = not_null(k_42);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm default_system_usage_0 (ATerm t)
{
  ATerm d_43 = NULL;
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_43 = NULL;
      t = term_j_29;
      {
        t = get_config_0(t);
        {
          e_43 = t;
          if(((d_43 != NULL) && (d_43 != e_43)))
            _fail(e_43);
          else
            d_43 = e_43;
        }
      }
      ;
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm t_5 (ATerm t)
        {
          ATerm u_5 (ATerm t)
          {
            ATerm m_43 = NULL;
            m_43 = t;
            if(((d_43 != NULL) && (d_43 != m_43)))
              _fail(m_43);
            else
              d_43 = m_43;
            return(t);
          }
          t = Program_1(t, u_5);
          return(t);
        }
        t = option_defined_1(t, t_5);
      }
    }
  {
    ATerm v_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        t = not_null(d_43);
        return(t);
      }
      t = short_description_1(t, a_6);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, v_5);
    {
      t = term_s_31;
      {
        t = echo_0(t);
        {
          t = term_w_31;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_6 (ATerm t)
                {
                  ATerm n_43 = NULL;
                  ATerm p_43 = NULL;
                  p_43 = t;
                  if(((n_43 != NULL) && (n_43 != p_43)))
                    _fail(p_43);
                  else
                    n_43 = p_43;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_43)), term_x_31);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_6);
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm q_43 = NULL;
                    ATerm r_43 = NULL;
                    ATerm e_6 (ATerm t)
                    {
                      t = not_null(d_43);
                      return(t);
                    }
                    t = long_description_1(t, e_6);
                    {
                      r_43 = t;
                      if(((q_43 != NULL) && (q_43 != r_43)))
                        _fail(r_43);
                      else
                        q_43 = r_43;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_43)), term_y_31);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_6);
                }
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm override_system_usage_0 (ATerm t)
{
  _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm z_31 = t;
  int e_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = override_system_usage_0(t);
      ;
      LocalPopChoice(e_32);
    }
  else
    {
      t = z_31;
      t = default_system_usage_0(t);
    }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,h_44 = NULL;
  a_44 = t;
  z_43 :
  if(match_cons(a_44, sym__2))
    {
      b_44 = ATgetArgument(a_44, 0);
      h_44 = ATgetArgument(a_44, 1);
      {
        ATerm f_32;
        f_32 = t;
        t = SSL_printnl(not_null(b_44), not_null(h_44));
        t = f_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_62 (ATerm))
{
  ATerm u_44 = NULL,v_44 = NULL;
  u_44 = t;
  t_44 :
  if(match_cons(u_44, sym_Undefined_1))
    {
      v_44 = ATgetArgument(u_44, 0);
      {
        ATerm y_44 = NULL,a_45 = NULL;
        ATerm z_44 = NULL;
        t = SSLgetAnnotations(not_null(u_44));
        {
          z_44 = t;
          if(((y_44 != NULL) && (y_44 != z_44)))
            _fail(z_44);
          else
            y_44 = z_44;
        }
        {
          t = not_null(v_44);
          {
            ATerm e_45 = NULL;
            t = a_62(t);
            {
              a_45 = t;
              {
                ATerm f_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(a_45)), not_null(y_44));
                {
                  f_45 = t;
                  if(((e_45 != NULL) && (e_45 != f_45)))
                    _fail(f_45);
                  else
                    e_45 = f_45;
                }
                t = not_null(e_45);
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm o_45 (ATerm t)
  {
    ATerm g_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_69, _id);
        ;
        LocalPopChoice(n_32);
      }
    else
      {
        t = g_32;
        t = Cons_2(t, _id, o_45);
      }
    return(t);
  }
  t = o_45(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_85 (ATerm))
{
  t = fetch_1(t, o_85);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm t_45 = NULL;
  t_45 = t;
  s_45 :
  if(match_cons(t_45, sym_Help_0))
    {
      ATerm v_45 = NULL,x_45 = NULL;
      ATerm o_32;
      o_32 = t;
      {
        ATerm w_45 = NULL;
        t = SSLgetAnnotations(not_null(t_45));
        {
          w_45 = t;
          if(((v_45 != NULL) && (v_45 != w_45)))
            _fail(w_45);
          else
            v_45 = w_45;
        }
      }
      t = o_32;
      {
        ATerm y_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(v_45));
        {
          y_45 = t;
          if(((x_45 != NULL) && (x_45 != y_45)))
            _fail(y_45);
          else
            x_45 = y_45;
        }
        t = not_null(x_45);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_79(t);
      ;
      LocalPopChoice(s_32);
    }
  else
    {
      t = r_32;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  o_46 :
  if(match_cons(r_46, sym__2))
    {
      s_46 = ATgetArgument(r_46, 0);
      t_46 = ATgetArgument(r_46, 1);
      t = SSL_table_get(not_null(s_46), not_null(t_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL,n_47 = NULL;
  k_47 = t;
  j_47 :
  if(match_cons(k_47, sym__3))
    {
      l_47 = ATgetArgument(k_47, 0);
      m_47 = ATgetArgument(k_47, 1);
      n_47 = ATgetArgument(k_47, 2);
      {
        ATerm t_32;
        t_32 = t;
        {
          ATerm r_47 = NULL;
          ATerm t_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_47), not_null(m_47));
          {
            ATerm x_32 = t;
            int b_33 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(b_33);
              }
            else
              {
                t = x_32;
                t = (ATerm) ATempty;
              }
            {
              t_47 = t;
              if(((r_47 != NULL) && (r_47 != t_47)))
                _fail(t_47);
              else
                r_47 = t_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_47), not_null(m_47), (ATerm) ATinsert(CheckATermList(not_null(r_47)), not_null(n_47)));
            t = table_put_0(t);
          }
        }
        t = t_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_86 (ATerm))
{
  ATerm c_48 = NULL;
  ATerm d_48 = NULL;
  t = term_s_22;
  {
    t = t_86(t);
    {
      d_48 = t;
      if(((c_48 != NULL) && (c_48 != d_48)))
        _fail(d_48);
      else
        c_48 = d_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_31, term_u_31, not_null(c_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  m_48 :
  if(match_string(n_48, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(n_48) == AT_LIST) && !(ATisEmpty(n_48))))
        {
          o_48 = ATgetFirst((ATermList) n_48);
          p_48 = (ATerm) ATgetNext((ATermList) n_48);
          {
            ATerm s_48 = NULL;
            ATerm c_33;
            c_33 = t;
            {
              t = not_null(o_48);
              t = a_0(t);
            }
            t = c_33;
            {
              ATerm t_48 = NULL;
              t = term_s_22;
              {
                t = b_0(t);
                {
                  t_48 = t;
                  if(((s_48 != NULL) && (s_48 != t_48)))
                    _fail(t_48);
                  else
                    s_48 = t_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_48)), not_null(s_48));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm y_48 = NULL;
    y_48 = t;
    x_48 :
    if(!(match_string(y_48, "--help")))
      {
        if(!(match_string(y_48, "-h")))
          {
            if(!(match_string(y_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = term_e_33;
    {
      t = set_config_0(t);
      t = term_f_33;
    }
    return(t);
  }
  ATerm m_6 (ATerm t)
  {
    t = term_i_33;
    return(t);
  }
  t = Option_3(t, f_6, g_6, m_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_49 = NULL,c_49 = NULL,d_49 = NULL;
  b_49 = t;
  a_49 :
  if(((ATgetType(b_49) == AT_LIST) && !(ATisEmpty(b_49))))
    {
      c_49 = ATgetFirst((ATermList) b_49);
      d_49 = (ATerm) ATgetNext((ATermList) b_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_56 (ATerm), ATerm t_56 (ATerm))
{
  ATerm n_49 = NULL,o_49 = NULL,p_49 = NULL;
  n_49 = t;
  m_49 :
  if(((ATgetType(n_49) == AT_LIST) && !(ATisEmpty(n_49))))
    {
      o_49 = ATgetFirst((ATermList) n_49);
      p_49 = (ATerm) ATgetNext((ATermList) n_49);
      {
        ATerm t_49 = NULL,v_49 = NULL;
        ATerm u_49 = NULL;
        t = SSLgetAnnotations(not_null(n_49));
        {
          u_49 = t;
          if(((t_49 != NULL) && (t_49 != u_49)))
            _fail(u_49);
          else
            t_49 = u_49;
        }
        {
          t = not_null(o_49);
          {
            ATerm x_49 = NULL;
            t = s_56(t);
            {
              v_49 = t;
              {
                t = not_null(p_49);
                {
                  ATerm z_49 = NULL;
                  t = t_56(t);
                  {
                    x_49 = t;
                    {
                      ATerm a_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_49)), not_null(v_49)), not_null(t_49));
                      {
                        a_50 = t;
                        if(((z_49 != NULL) && (z_49 != a_50)))
                          _fail(a_50);
                        else
                          z_49 = a_50;
                      }
                      t = not_null(z_49);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm k_50 = NULL;
  k_50 = t;
  j_50 :
  if(((ATgetType(k_50) == AT_LIST) && ATisEmpty(k_50)))
    {
      {
        ATerm m_50 = NULL,o_50 = NULL;
        ATerm j_33;
        j_33 = t;
        {
          ATerm n_50 = NULL;
          t = SSLgetAnnotations(not_null(k_50));
          {
            n_50 = t;
            if(((m_50 != NULL) && (m_50 != n_50)))
              _fail(n_50);
            else
              m_50 = n_50;
          }
        }
        t = j_33;
        {
          ATerm p_50 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_50));
          {
            p_50 = t;
            if(((o_50 != NULL) && (o_50 != p_50)))
              _fail(p_50);
            else
              o_50 = p_50;
          }
          t = not_null(o_50);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL;
  v_50 = t;
  u_50 :
  if(match_cons(v_50, sym__2))
    {
      w_50 = ATgetArgument(v_50, 0);
      x_50 = ATgetArgument(v_50, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_24, not_null(w_50), not_null(x_50));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm s_33;
  s_33 = t;
  {
    ATerm n_6 (ATerm t)
    {
      t = term_t_33;
      t = r_86(t);
      return(t);
    }
    t = try_1(t, n_6);
  }
  t = s_33;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm f_51 = NULL;
      ATerm v_33;
      v_33 = t;
      {
        ATerm d_51 = NULL;
        ATerm e_51 = NULL;
        e_51 = t;
        if(((d_51 != NULL) && (d_51 != e_51)))
          _fail(e_51);
        else
          d_51 = e_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_29, not_null(d_51));
          t = set_config_0(t);
        }
      }
      t = v_33;
      {
        ATerm g_51 = NULL;
        g_51 = t;
        if(((f_51 != NULL) && (f_51 != g_51)))
          _fail(g_51);
        else
          f_51 = g_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_51));
      }
      return(t);
    }
    ATerm t_6 (ATerm t)
    {
      ATerm w_33 = t;
      int c_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_34 = t;
          int g_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(g_34);
            }
          else
            {
              t = d_34;
              {
                t = r_86(t);
                t = Cons_2(t, _id, t_6);
              }
            }
          ;
          LocalPopChoice(c_34);
        }
      else
        {
          t = w_33;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_6, t_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL;
  ATerm h_34;
  h_34 = t;
  {
    ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL;
    p_51 = t;
    l_51 :
    if(match_cons(p_51, sym__3))
      {
        q_51 = ATgetArgument(p_51, 0);
        r_51 = ATgetArgument(p_51, 1);
        s_51 = ATgetArgument(p_51, 2);
        {
          if(((m_51 != NULL) && (m_51 != q_51)))
            _fail(q_51);
          else
            m_51 = q_51;
          {
            if(((n_51 != NULL) && (n_51 != r_51)))
              _fail(r_51);
            else
              n_51 = r_51;
            {
              if(((o_51 != NULL) && (o_51 != s_51)))
                _fail(s_51);
              else
                o_51 = s_51;
              t = SSL_table_put(not_null(m_51), not_null(n_51), not_null(o_51));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_34;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm v_51 = NULL;
  ATerm i_34;
  i_34 = t;
  {
    t = term_q_34;
    t = table_put_0(t);
  }
  t = i_34;
  {
    ATerm u_6 (ATerm t)
    {
      ATerm r_34 = t;
      int s_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_86(t);
          ;
          LocalPopChoice(s_34);
        }
      else
        {
          t = r_34;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_6);
    {
      ATerm v_6 (ATerm t)
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_34;
            x_34 = t;
            {
              ATerm z_34 = t;
              int a_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_m_30;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(a_35);
                }
              else
                {
                  t = z_34;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = x_34;
            {
              t = system_usage_0(t);
              {
                t = term_v_26;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            {
              ATerm w_6 (ATerm t)
              {
                ATerm x_6 (ATerm t)
                {
                  ATerm w_51 = NULL;
                  w_51 = t;
                  if(((v_51 != NULL) && (v_51 != w_51)))
                    _fail(w_51);
                  else
                    v_51 = w_51;
                  return(t);
                }
                t = Undefined_1(t, x_6);
                return(t);
              }
              t = option_defined_1(t, w_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_51)), term_g_35));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_o_13;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_6);
      {
        ATerm h_35;
        h_35 = t;
        {
          t = term_t_31;
          t = table_destroy_0(t);
        }
        t = h_35;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_84 (ATerm), ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm y_84 (ATerm))
{
  t = parse_options_1(t, v_84);
  {
    t = store_options_0(t);
    {
      t = x_84(t);
      {
        ATerm k_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_84);
            ;
            LocalPopChoice(n_35);
          }
        else
          {
            t = k_35;
            {
              ATerm o_35 = t;
              int r_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_84(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(r_35);
                }
              else
                {
                  t = o_35;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm z_84 (ATerm), ATerm a_85 (ATerm))
{
  t = option_wrap_4(t, z_84, default_usage_0, _id, a_85);
  return(t);
}
ATerm pp_stratego_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm s_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_stratego_options_0(t);
        ;
        LocalPopChoice(u_35);
      }
    else
      {
        t = s_35;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    ATerm i_7 (ATerm t)
    {
      ATerm v_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_36;
          b_36 = t;
          {
            t = term_c_29;
            t = get_config_0(t);
          }
          t = b_36;
          ;
          LocalPopChoice(w_35);
        }
      else
        {
          t = v_35;
          {
            ATerm j_7 (ATerm t)
            {
              t = term_c_36;
              return(t);
            }
            t = xtc_transform_1(t, j_7);
          }
        }
      {
        ATerm k_7 (ATerm t)
        {
          t = term_d_36;
          return(t);
        }
        ATerm l_7 (ATerm t)
        {
          ATerm z_51 = NULL;
          ATerm a_52 = NULL;
          t = term_e_36;
          {
            t = xtc_find_0(t);
            {
              a_52 = t;
              if(((z_51 != NULL) && (z_51 != a_52)))
                _fail(a_52);
              else
                z_51 = a_52;
            }
          }
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_51)), term_f_36);
          return(t);
        }
        t = xtc_transform_2(t, k_7, l_7);
      }
      return(t);
    }
    t = xtc_io_1(t, i_7);
    return(t);
  }
  t = option_wrap_2(t, d_7, e_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = pp_stratego_0(t);
  return(t);
}
