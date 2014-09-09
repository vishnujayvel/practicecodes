/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1a59): first defined here
/tmp/ccK1kus0.o: In function `yyget_leng':
y.tab.c:(.text+0x1a66): multiple definition of `yyget_leng'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1a66): first defined here
/tmp/ccK1kus0.o: In function `yyget_text':
y.tab.c:(.text+0x1a72): multiple definition of `yyget_text'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1a72): first defined here
/tmp/ccK1kus0.o: In function `yyset_lineno':
y.tab.c:(.text+0x1a7f): multiple definition of `yyset_lineno'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1a7f): first defined here
/tmp/ccK1kus0.o: In function `yyset_in':
y.tab.c:(.text+0x1a91): multiple definition of `yyset_in'
%{
int tos=-1,op_tos=-1,flag;
 char op[20],arr[20];

/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1a59): first defined here
/tmp/ccUJvXvP.o: In function `yyget_leng':
y.tab.c:(.text+0x1a66): multiple definition of `yyget_leng'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1a66): first defined here
/tmp/ccUJvXvP.o: In function `yyget_text':
y.tab.c:(.text+0x1a72): multiple definition of `yyget_text'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1a72): first defined here
/tmp/ccUJvXvP.o: In function `yyset_lineno':
y.tab.c:(.text+0x1a7f): multiple definition of `yyset_lineno'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1a7f): first defined here
/tmp/ccUJvXvP.o: In function `yyset_in':
y.tab.c:(.text+0x1a91): multiple definition of `yyset_in'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1a91): first defined here
/tmp/ccUJvXvP.o: In function `yyset_out':
y.tab.c:(.text+0x1aa6): multiple definition of `yyset_out'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1aa6): first defined here
/tmp/ccUJvXvP.o: In function `yyget_debug':
y.tab.c:(.text+0x1abb): multiple definition of `yyget_debug'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1abb): first defined here
/tmp/ccUJvXvP.o: In function `yyset_debug':
y.tab.c:(.text+0x1ac7): multiple definition of `yyset_debug'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1ac7): first defined here
/tmp/ccUJvXvP.o: In function `yylex_destroy':
y.tab.c:(.text+0x1b3a): multiple definition of `yylex_destroy'
/tmp/cchGiVxX.o:lex.yy.c:(.text+0x1b3a): first defined here
/tmp/cchGiVxX.o: In function `yylex':
lex.yy.c:(.text+0x499): undefined reference to `yywrap'
/tmp/cchGiVxX.o: In function `input':
lex.yy.c:(.text+0xfda): undefined reference to `yywrap'
/tmp/ccUJvXvP.o: In function `yylex':
y.tab.c:(.text+0x499): undefined reference to `yywrap'
/tmp/ccUJvXvP.o: In function `input':
y.tab.c:(.text+0xfda): undefined reference to `yywrap'
collect2: ld returned 1 exit status
[c6i3621@gflinux infix]$ cc lex.yy.c y.tab.c -ll
/tmp/ccwyIh0b.o:(.bss+0x0): multiple definition of `yyin'
/tmp/ccMXwuA7.o:(.bss+0x0): first defined here
/tmp/ccwyIh0b.o:(.bss+0x8): multiple definition of `yyout'
/tmp/ccMXwuA7.o:(.bss+0x8): first defined here
/tmp/ccwyIh0b.o:(.data+0x3f8): multiple definition of `yylineno'
/tmp/ccMXwuA7.o:(.data+0x0): first defined here
/tmp/ccwyIh0b.o:(.bss+0x10): multiple definition of `yy_flex_debug'
/tmp/ccMXwuA7.o:(.bss+0x10): first defined here
/tmp/ccwyIh0b.o:(.data+0x3fc): multiple definition of `tos'
/tmp/ccMXwuA7.o:(.data+0x4): first defined here
/tmp/ccwyIh0b.o:(.data+0x400): multiple definition of `op_tos'
/tmp/ccMXwuA7.o:(.data+0x8): first defined here
/tmp/ccwyIh0b.o: In function `yylex':
y.tab.c:(.text+0x0): multiple definition of `yylex'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x0): first defined here
/tmp/ccwyIh0b.o: In function `yy_create_buffer':
y.tab.c:(.text+0x128d): multiple definition of `yy_create_buffer'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x128d): first defined here
/tmp/ccwyIh0b.o: In function `yyrestart':
y.tab.c:(.text+0x1061): multiple definition of `yyrestart'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1061): first defined here
/tmp/ccwyIh0b.o: In function `yyrealloc':
y.tab.c:(.text+0x1bfd): multiple definition of `yyrealloc'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1bfd): first defined here
/tmp/ccwyIh0b.o: In function `yy_switch_to_buffer':
y.tab.c:(.text+0x110f): multiple definition of `yy_switch_to_buffer'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x110f): first defined here
/tmp/ccwyIh0b.o: In function `yyalloc':
y.tab.c:(.text+0x1be3): multiple definition of `yyalloc'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1be3): first defined here
/tmp/ccwyIh0b.o: In function `yy_delete_buffer':
y.tab.c:(.text+0x1323): multiple definition of `yy_delete_buffer'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1323): first defined here
/tmp/ccwyIh0b.o: In function `yyfree':
y.tab.c:(.text+0x1c22): multiple definition of `yyfree'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1c22): first defined here
/tmp/ccwyIh0b.o: In function `yy_flush_buffer':
y.tab.c:(.text+0x146f): multiple definition of `yy_flush_buffer'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x146f): first defined here
/tmp/ccwyIh0b.o: In function `yypush_buffer_state':
y.tab.c:(.text+0x150c): multiple definition of `yypush_buffer_state'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x150c): first defined here
/tmp/ccwyIh0b.o: In function `yypop_buffer_state':
y.tab.c:(.text+0x1611): multiple definition of `yypop_buffer_state'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1611): first defined here
/tmp/ccwyIh0b.o: In function `yy_scan_buffer':
y.tab.c:(.text+0x1826): multiple definition of `yy_scan_buffer'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1826): first defined here
/tmp/ccwyIh0b.o: In function `yy_scan_string':
y.tab.c:(.text+0x191d): multiple definition of `yy_scan_string'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x191d): first defined here
/tmp/ccwyIh0b.o: In function `yy_scan_bytes':
y.tab.c:(.text+0x1947): multiple definition of `yy_scan_bytes'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1947): first defined here
/tmp/ccwyIh0b.o: In function `yyget_lineno':
y.tab.c:(.text+0x1a40): multiple definition of `yyget_lineno'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1a40): first defined here
/tmp/ccwyIh0b.o: In function `yyget_in':
y.tab.c:(.text+0x1a4c): multiple definition of `yyget_in'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1a4c): first defined here
/tmp/ccwyIh0b.o: In function `yyget_out':
y.tab.c:(.text+0x1a59): multiple definition of `yyget_out'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1a59): first defined here
/tmp/ccwyIh0b.o: In function `yyget_leng':
y.tab.c:(.text+0x1a66): multiple definition of `yyget_leng'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1a66): first defined here
/tmp/ccwyIh0b.o: In function `yyget_text':
y.tab.c:(.text+0x1a72): multiple definition of `yyget_text'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1a72): first defined here
/tmp/ccwyIh0b.o: In function `yyset_lineno':
y.tab.c:(.text+0x1a7f): multiple definition of `yyset_lineno'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1a7f): first defined here
/tmp/ccwyIh0b.o: In function `yyset_in':
y.tab.c:(.text+0x1a91): multiple definition of `yyset_in'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1a91): first defined here
/tmp/ccwyIh0b.o: In function `yyset_out':
y.tab.c:(.text+0x1aa6): multiple definition of `yyset_out'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1aa6): first defined here
/tmp/ccwyIh0b.o: In function `yyget_debug':
y.tab.c:(.text+0x1abb): multiple definition of `yyget_debug'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1abb): first defined here
/tmp/ccwyIh0b.o: In function `yyset_debug':
y.tab.c:(.text+0x1ac7): multiple definition of `yyset_debug'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1ac7): first defined here
/tmp/ccwyIh0b.o: In function `yylex_destroy':
y.tab.c:(.text+0x1b3a): multiple definition of `yylex_destroy'
/tmp/ccMXwuA7.o:lex.yy.c:(.text+0x1b3a): first defined here
collect2: ld returned 1 exit status
[c6i3621@gflinux infix]$ gcc lex.yy.c y.tab.c
/tmp/ccK1kus0.o:(.bss+0x0): multiple definition of `yyin'
/tmp/ccnUDIwK.o:(.bss+0x0): first defined here
/tmp/ccK1kus0.o:(.bss+0x8): multiple definition of `yyout'
/tmp/ccnUDIwK.o:(.bss+0x8): first defined here
/tmp/ccK1kus0.o:(.data+0x3f8): multiple definition of `yylineno'
/tmp/ccnUDIwK.o:(.data+0x0): first defined here
/tmp/ccK1kus0.o:(.bss+0x10): multiple definition of `yy_flex_debug'
/tmp/ccnUDIwK.o:(.bss+0x10): first defined here
/tmp/ccK1kus0.o:(.data+0x3fc): multiple definition of `tos'
/tmp/ccnUDIwK.o:(.data+0x4): first defined here
/tmp/ccK1kus0.o:(.data+0x400): multiple definition of `op_tos'
/tmp/ccnUDIwK.o:(.data+0x8): first defined here
/tmp/ccK1kus0.o: In function `yylex':
y.tab.c:(.text+0x0): multiple definition of `yylex'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x0): first defined here
/tmp/ccK1kus0.o: In function `yy_create_buffer':
y.tab.c:(.text+0x128d): multiple definition of `yy_create_buffer'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x128d): first defined here
/tmp/ccK1kus0.o: In function `yyrestart':
y.tab.c:(.text+0x1061): multiple definition of `yyrestart'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1061): first defined here
/tmp/ccK1kus0.o: In function `yyrealloc':
y.tab.c:(.text+0x1bfd): multiple definition of `yyrealloc'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1bfd): first defined here
/tmp/ccK1kus0.o: In function `yy_switch_to_buffer':
y.tab.c:(.text+0x110f): multiple definition of `yy_switch_to_buffer'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x110f): first defined here
/tmp/ccK1kus0.o: In function `yyalloc':
y.tab.c:(.text+0x1be3): multiple definition of `yyalloc'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1be3): first defined here
/tmp/ccK1kus0.o: In function `yy_delete_buffer':
y.tab.c:(.text+0x1323): multiple definition of `yy_delete_buffer'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1323): first defined here
/tmp/ccK1kus0.o: In function `yyfree':
y.tab.c:(.text+0x1c22): multiple definition of `yyfree'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1c22): first defined here
/tmp/ccK1kus0.o: In function `yy_flush_buffer':
y.tab.c:(.text+0x146f): multiple definition of `yy_flush_buffer'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x146f): first defined here
/tmp/ccK1kus0.o: In function `yypush_buffer_state':
y.tab.c:(.text+0x150c): multiple definition of `yypush_buffer_state'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x150c): first defined here
/tmp/ccK1kus0.o: In function `yypop_buffer_state':
y.tab.c:(.text+0x1611): multiple definition of `yypop_buffer_state'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1611): first defined here
/tmp/ccK1kus0.o: In function `yy_scan_buffer':
y.tab.c:(.text+0x1826): multiple definition of `yy_scan_buffer'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1826): first defined here
/tmp/ccK1kus0.o: In function `yy_scan_string':
y.tab.c:(.text+0x191d): multiple definition of `yy_scan_string'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x191d): first defined here
/tmp/ccK1kus0.o: In function `yy_scan_bytes':
y.tab.c:(.text+0x1947): multiple definition of `yy_scan_bytes'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1947): first defined here
/tmp/ccK1kus0.o: In function `yyget_lineno':
y.tab.c:(.text+0x1a40): multiple definition of `yyget_lineno'
/tmp/ccnUDIwK.o:lex.yy.c:(.text+0x1a40): first defined here
%
