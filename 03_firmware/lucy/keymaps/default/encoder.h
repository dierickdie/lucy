// Encoder stuff
bool encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    switch(biton32(layer_state)){
      // Base layers      
        case 0: // macOS
          if (clockwise) { // Volume
            tap_code(KC_VOLD);
            //tap_code16(S(C(A(KC_DOWN))));
          } else {
            tap_code(KC_VOLU);
            //tap_code16(S(C(A(KC_UP))));
          }
        break;

      case 7: // Windows
        if (clockwise) { // Volume
          tap_code(KC_VOLD);
        } else {
          tap_code(KC_VOLU);
        }
        break;

      // Raise layers
      case 3: // macOS
        if (clockwise) { // Vertical scroll
          tap_code(KC_MS_WH_DOWN);
        } else {
          tap_code(KC_MS_WH_UP);
        }
        break;

      case 10: // Windows
        if (clockwise) { // Vertical scroll
          tap_code(KC_MS_WH_UP);
        } else {
          tap_code(KC_MS_WH_DOWN);
        }
        break;

      // Function layers
      case 2: // macOS
        if (clockwise) { // Horizontal scroll
          tap_code(KC_MS_WH_RIGHT);
        } else {
          tap_code(KC_MS_WH_LEFT);
        }
        break;

      case 9: // Windows
        if (clockwise) { // Horizontal scroll
          tap_code(KC_MS_WH_RIGHT);
        } else {
          tap_code(KC_MS_WH_LEFT);
        }
        break;

    }
  }
  return true;
}