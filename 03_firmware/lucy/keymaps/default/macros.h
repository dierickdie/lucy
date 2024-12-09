// Macros
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // macOS
    case INS_ROW: // Insert row in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(  // Ctrl+Alt+i, r, r
          SS_LCTL(SS_LALT("irr")) 
          //SS_DELAY(250) 
          //"r" 
          //SS_DELAY(250) 
          //"r"
        );
      } else { // when keycode is released
      }
      break;

    case DEL_ROW: // Delete row in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(  // Ctrl+Alt+e, d, d
          SS_LCTL(SS_LALT("edd")) 
          //SS_DELAY(250) 
          //"d" 
          //SS_DELAY(250) 
          //"d"
        );
      } else { // when keycode is released
      }
      break;

    case INS_COL: // Insert column in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(  // Ctrl+Alt+i, c, c
          SS_LCTL(SS_LALT("icc")) 
          //SS_DELAY(250) 
          //"c" 
          //SS_DELAY(250) 
          //"c"
        );
      } else { // when keycode is released
      }
      break;    

    case DEL_COL: // Delete column in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(  // Ctrl+Alt+e, d, e
          SS_LCTL(SS_LALT("ede")) 
          //SS_DELAY(250) 
          //"d" 
          //SS_DELAY(250) 
          //"e"
        );
      } else { // when keycode is released
      }
      break;

    // Windows
    case INS_ROWW: // Insert row in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(SS_LALT(SS_LSFT("i") SS_DELAY(250)) "r"); // Alt+Shift+i, r
      } else { // when keycode is released
      }
      break;

    case DEL_ROWW: // Delete row in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(SS_LALT(SS_LSFT("e") SS_DELAY(250)) "d"); // Alt+Shift+e, d
      } else { // when keycode is released
      }
      break;

    case INS_COLW: // Insert column in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(SS_LALT(SS_LSFT("i") SS_DELAY(250)) "c"); // Alt+Shift+i, c
      } else { // when keycode is released
      }
      break;    

    case DEL_COLW: // zDelete column in Sheets
      if (record->event.pressed) { // when keycode is pressed
        SEND_STRING(SS_LALT(SS_LSFT("e") SS_DELAY(250)) "e"); // Alt+Shift+e, e
      } else { // when keycode is released
      }
      break;

  }
  return true;
};
