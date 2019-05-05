// Tue Jun 27 21:19:58 UTC 2017
// 4735-a0s-00-

#include <Arduino.h>
#include "../../yaffa.h"
// #include "../../Error_Codes.h"

#include "begin_while_repeat.h"
/******************************************************************************/
/** begin ... again                                                          **/
/** begin ... until                                                          **/
/** begin ... while ... repeat                                               **/
/******************************************************************************/
const char again_str[] = "again";
// Compilation: (C: begin-sys -- )
// Run-Time: ( -- )
void _again(void) {
//Serial.println("\nbefore _again();"); _dot_s();
  cell_t* beginAdr = (cell_t*) dStack_pop();
  if ( dStack_pop() != BEGIN_SYS) {
    dStack_push(-22);
    _throw();
  }
  *pHere++ = JUMP_IDX;
  *pHere++ = (cell_t) beginAdr;
//Serial.println("\nafter _again();"); _dot_s();
}

const char until_str[] = "until";
// Compilation: (C: begin-sys -- )
// Run-Time: ( -- )
void _until(void) {
  cell_t* beginAdr = (cell_t*) dStack_pop();
  if ( dStack_pop() != BEGIN_SYS) {
    dStack_push(-22);
    _throw();
  }
  *pHere++ = ZJUMP_IDX;
  *pHere++ = (cell_t) beginAdr;
}

const char repeat_str[] = "repeat";
// Compilation: (C: begin-adr whie-sys -- )
// Run-Time: ( -- )
extern void _swap();
void _repeat(void) {
  cell_t* whileAdr = (cell_t*) dStack_pop();
  if ( dStack_pop() != WHILE_SYS) {
    dStack_push(-22);
    _throw();
  }
  *pHere++ = JUMP_IDX;
  *pHere++ = dStack_pop();
  * whileAdr = (cell_t) pHere;
}

const char while_str[] = "while";
// Interpretation: undefined
// Compilation: (C: begin-sys -- begin-adr whie-sys )
// Run-Time: ( flag -- )
extern void _swap();
void _while(void) {
  _swap();
  if ( dStack_pop() != BEGIN_SYS) {
    dStack_push(-22);
    _throw();
  }
  *pHere++ = ZJUMP_IDX;
  dStack_push(WHILE_SYS);
  dStack_push((size_t) pHere++);
}

const char begin_str[] = "begin";
// Interpretation: undefined
// Compilation: (C: -- begin-sys )
// Run-Time: ( -- )
void _begin(void) {
//Serial.println("\nbefore _begin();"); _dot_s();
  dStack_push(BEGIN_SYS);
  dStack_push((size_t) pHere);
//Serial.println("\nafter _begin();"); _dot_s();
}

// #endif

/******************************************************************************/
/**  YAFFA - Yet Another Forth for Arduino                                   **/
/**                                                                          **/
/**  File: Dictionary.ino                                                    **/
/**  Copyright (C) 2012 Stuart Wood (swood@rochester.rr.com)                 **/
/******************************************************************************/
