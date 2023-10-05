#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x1337
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0003
#define MANUFACTURER    therick
#define PRODUCT         lefty lucy
#define DESCRIPTION     Blatant copy of a Planck plus a column

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

//lucy
#define MATRIX_ROW_PINS { B0, D0, C7, C6 }
#define MATRIX_COL_PINS { B2, B3, D1, D2, D3, D5, D4, D6, D7, B4, B5, B6, B1 }

#define UNUSED_PINS

/* COL2ROW, ROW2COL, or CUSTOM_MATRIX */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0


