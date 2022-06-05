

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1337
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    therick
#define PRODUCT         lucy
#define DESCRIPTION     Blatant copy of a Planck plus a column

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

//lucy
#define MATRIX_ROW_PINS { B2, F0, E6, F1 }
#define MATRIX_COL_PINS { B0, B1, B3, D4, D6, D7, B4, B5, B6, C6, C7, F7,    F6}

//ori
//#define MATRIX_ROW_PINS { F7, F6, D4, D6 }
//#define MATRIX_COL_PINS { D7, D5, B7, F5, F4, F1, F0, E6, B0, B1, B2, B3,    C6}

//therick48
//#define MATRIX_ROW_PINS { F7, F6, D4, D6 }
//#define MATRIX_COL_PINS { D7, D5, B7, F5, F4, F1, F0, E6, B0, B1, B2, B3,    C6 }

#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 0

/* encoder support */
//#define ENCODERS_PAD_A { D3 }  // ori
//#define ENCODERS_PAD_B { D2 }  // ori
#define ENCODERS_PAD_A { F5 } // lucy
#define ENCODERS_PAD_B { F4 } // lucy

#define ENCODER_RESOLUTION 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

// QMK-DFU
//#define QMK_ESC_OUTPUT F1  // COL pin if COL2ROW
//#define QMK_ESC_INPUT  D5  // ROW pin if COL2ROW
// Optional:
//#define QMK_LED E6
//#define QMK_SPEAKER C6


