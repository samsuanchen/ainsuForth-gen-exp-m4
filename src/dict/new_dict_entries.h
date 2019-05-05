// Fri 22 Jun 18:03:52 UTC 2018
// 4737-a3b-005-

// Thu 21 Jun 22:17:21 UTC 2018
// 4737-a3b-001-  +dict_comments_only.cpp file

// Sat Jul 29 18:14:02 UTC 2017
// 4735-b0b-01-

// count word evaluate : ; c, here 

extern char cInputBuffer[BUFFER_SIZE]; // Input Buffer that gets parsed
// extern char cTokenBuffer[WORD_SIZE];  // Stores Single Parsed token to be acted on

#if defined(INCL_NOP_WORD) || defined(XDICT)
extern const char nop_str[]; // = "nop";
extern void _nop(void);
#endif // #if defined(INCL_NOP_WORD) || defined(XDICT)

extern const char here_str[]; // = "here";
extern void _here(void);

extern const char strlen_str[]; // = "strlen" // samsuanchen@gmail.com 20190502
extern void _strlen(void);

extern const char i_str[]; // = "i" // samsuanchen@gmail.com 20190502
extern void _i(void);

extern const char j_str[]; // = "j" // samsuanchen@gmail.com 20190502
extern void _j(void);

extern const char lt_str[]; // = "<" // samsuanchen@gmail.com 20190502
extern void _lt(void);

extern const char if_str[]; // = "if" // samsuanchen@gmail.com 20190502
extern void _if(void);

extern const char else_str[]; // = "else" // samsuanchen@gmail.com 20190502
extern void _else(void);

extern const char then_str[]; // = "then" // samsuanchen@gmail.com 20190502
extern void _then(void);

extern const char count_str[]; // = "count";
extern void _count(void);

extern const char evaluate_str[]; // = "evaluate";
extern void _evaluate(void);

extern const char word_str[]; // = "word";
extern void _word(void);

extern const char back_slash_str[]; // = "\\";
extern void _back_slash();

extern const char source_str[]; // = "source"; // ( -- c-addr u )
extern void _source(void);

extern const char see_str[]; // = "see";
extern void _see(void);

extern const char pinWrite_str[]; // = "pinWrite";
extern void _pinWrite(void);

extern const char pinMode_str[]; // = "pinMode";
extern void _pinMode(void);

extern const char pinRead_str[]; // = "pinRead";
extern void _pinRead(void);

extern const char colon_str[]; // = ":";
extern void _colon(void);

extern const char semicolon_str[]; // = ";";
extern void _semicolon(void);

extern const char tick_str[]; //samsuanchen@gmail.com 20190502
extern void _tick();          //samsuanchen@gmail.com 20190502
