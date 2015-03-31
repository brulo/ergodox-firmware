/* ----------------------------------------------------------------------------
 * Copyright (c) 2013, 2014 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (see "doc/licenses/MIT.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */

/**                                                                 description
 * My QWERTY layout, at the moment.  I imagine this will evolve over time.
 * Once I'm done with the Arensito layout, it may disappear altogether.
 *
 * Implements the "layout" section of '.../firmware/keyboard.h'
 */


#include "./fragments/includes.part.h"
#include "./fragments/macros.part.h"
#include "./fragments/types.part.h"
#include "./fragments/variables.part.h"


// ----------------------------------------------------------------------------
// keys
// ----------------------------------------------------------------------------

#include "./fragments/keys.part.h"


// ----------------------------------------------------------------------------
// LED control
// ----------------------------------------------------------------------------

#include "./fragments/led-control.part.h"


// ----------------------------------------------------------------------------
// matrix control
// ----------------------------------------------------------------------------

#include "./fragments/matrix-control.part.h"


// ----------------------------------------------------------------------------
// layout
// ----------------------------------------------------------------------------

static layout_t layout PROGMEM = {
// ............................................................................

    MATRIX_LAYER(  // layer 0 : default
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   equal,        1,        2,        3,        4,        5,      nop,
     tab,        q,        w,        e,        r,        t,      nop,
     esc,        a,        s,        d,        f,        g,
    guiL,        z,        x,        c,        v,        b,   arrowL,
    altL,    grave,  bkslash,     ctrlL,   shiftL,
                                                                 nop,       nop,
                                                       nop,      nop,     pageU,
                                                     enter,      del,    pageD,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,        6,        7,        8,        9,        0,     dash,
               nop,        y,        u,        i,        o,        p,      nop,
                           h,        j,        k,        l,  semicol,    quote,
            arrowR,        n,        m,    comma,   period,    slash,   shiftR,
                                    bs, lpupo1l1,   arrowD,   arrowU,     guiR,
      mute,      nop,
   volumeU,      nop,      nop,
   volumeD,      nop,      space  ),


// ............................................................................

    MATRIX_LAYER(  // layer 1 : symbols and function keys
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,       F1,       F2,       F3,       F4,       F5,      F6,
  transp,        1,        2,        3,        4,        5,     nop,
  transp,  lessThan,    braceL,   brktL,  parenL,     dash,
  transp,   exclam,       at,    pound,    dollar, percent,  transp,
  transp,   transp,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
               F7,       F8,       F9,       F10,       F11,      F12,     transp,
             transp,      6,        7,         8,         9,        0,     transp,
                      equal,   parenR,    brktR,    braceR,  grtrThan,       nop, 
             transp,  caret,      amp,  asterisk,    parenL,    parenR,    transp,

                                transp,   transp,    transp,    transp,    transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,   transp  ),

// ............................................................................

    MATRIX_LAYER(  // layer 2 : number pad
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,
  transp,   transp,   transp,   transp,   transp,   transp,   transp,
  transp,      ins,   transp,   transp,   transp,
                                                              transp,   transp,
                                                    transp,   transp,   transp,
                                                    transp,   transp,   transp,
// right hand ..... ......... ......... ......... ......... ......... .........
            lpo1l1,   transp,   lpo1l1,    equal,    slash, asterisk,   transp,
            transp,   transp,        7,        8,        9,     dash,   transp,
                      transp,        4,        5,        6,     plus,   transp,
            transp,   transp,        1,        2,        3,    enter,   transp,
                                transp,   transp,   period,    enter,   transp,
  transp,   transp,
  transp,   transp,   transp,
  transp,   transp,        0  ),
// ............................................................................

    MATRIX_LAYER(  // layer 3 : keyboard functions
// macro, unused,
       K,    nop,
// left hand ...... ......... ......... ......... ......... ......... .........
   btldr,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,      nop,      nop,
     nop,      nop,      nop,      nop,      nop,
                                                                 nop,      nop,
                                                       nop,      nop,      nop,
                                                       nop,      nop,      nop,
// right hand ..... ......... ......... ......... ......... ......... .........
               nop,      nop,      nop,      nop,      nop,      nop, dmp_sram,
               nop,      nop,      nop,      nop,      nop,      nop, dmp_prog,
                         nop,      nop,      nop,      nop,      nop, dmp_eepr,
               nop,      nop,      nop,      nop,      nop,      nop,      nop,
                                   nop,      nop,      nop,      nop,      nop,
     nop,      nop,
     nop,      nop,      nop,
     nop,      nop,      nop  ),

// ............................................................................
};

