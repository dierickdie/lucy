

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1337
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    therick
#define PRODUCT         ori
#define DESCRIPTION     Blatant copy of Planck plus a column

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

#define MATRIX_ROW_PINS { F7, F6, D4, D6 }
#define MATRIX_COL_PINS { D7, D5, B7, F5, F4, F1, F0, E6, B0, B1, B2, B3,    C6} // ori
//#define MATRIX_COL_PINS { D7, D5, B7, B3, B2, B1, B0, E6, F0, F1, F4, F5, C6 } // therick48

#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCING_DELAY 0

/* encoder support */
#define ENCODERS_PAD_A { D3 }
#define ENCODERS_PAD_B { D2 }

#define ENCODER_RESOLUTION 2

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE


