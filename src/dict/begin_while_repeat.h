// samsuanchen@gmail.com 20190502

extern const char begin_str[]; // = "begin";
extern void _begin(void);

extern const char again_str[]; // = "again";
extern void _again(void);

extern const char until_str[]; // = "until";
extern void _until(void);

extern const char while_str[]; // = "while";
extern void _while(void);

extern const char repeat_str[]; // = "repeat";
extern void _repeat(void);

extern cell_t* pHere;               // HERE, points to the next free position in
                                    // Forth Space
extern void dStack_push(cell_t value);
extern cell_t dStack_pop(void);
extern void _dot_s(void);
extern void _throw(void);

/******************************************************************************/
/**  YAFFA - Yet Another Forth for Arduino                                   **/
/**                                                                          **/
/**  File: Dictionary.ino                                                    **/
/**  Copyright (C) 2012 Stuart Wood (swood@rochester.rr.com)                 **/
/******************************************************************************/
