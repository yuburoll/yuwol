#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_reversible_rowstag(

        KC_ESC,         KC_GRV,         KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_6,
                                                                KC_7,           KC_8,           KC_9,           KC_0,           KC_MINS,        KC_EQL,         KC_NUHS,        KC_BSPC,

        KC_DEL,         KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_Y,
                                                                KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_LBRC,        KC_RBRC,        KC_BSLS,

        KC_ENT,         KC_CAPS,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_H,
                                                                KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOT,                        KC_ENT,

        MO(1),          KC_LSFT,        KC_NUBS,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,
                                                                KC_B,           KC_N,           KC_M,           KC_COMM,        KC_DOT,         KC_SLSH,        KC_RSFT,        MO(1),
        
        MO(2),          KC_LCTL,        KC_LGUI,                        KC_APP,        KC_LALT,         KC_SPC,         KC_BSPC,
                                                                KC_ENT,         KC_SPC,         KC_RALT,        KC_RCTL,        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT
        ),
    
    [1] = LAYOUT_reversible_rowstag(

        KC_ESC,         KC_GRV,         KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_F6,          
                                                                KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_INS,         KC_DEL,          

        KC_NO,          KC_TRNS,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                                KC_NO,          KC_NO,          KC_PSCR,        KC_SCRL,        KC_BRK,         KC_UP,          KC_NO,          KC_NO, 
                                                            
        KC_NO,          KC_LCTL,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                                KC_NO,          KC_NO,          KC_HOME,        KC_PGUP,        KC_LEFT,        KC_RGHT,                        KC_NO,          

        KC_TRNS,        KC_TRNS,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                                KC_NO,          KC_NO,          KC_NO,          KC_END,         KC_PGDN,        KC_DOWN,        KC_TRNS,        KC_TRNS,          

        KC_NO,          KC_TRNS,        KC_TRNS,                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,          
                                                                KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_HOME,        KC_PGUP,        KC_PGDN,        KC_END
        ),
    
    [2] = LAYOUT_reversible_rowstag(

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        
                                                                KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        
                                                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MS_WHLU,        KC_NO,          KC_NO, 
                                                            
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        
                                                                QK_BOOT,        QK_RBT,         KC_NO,          KC_NO,          MS_WHLL,        MS_WHLR,                        KC_NO,          

        KC_NO,          KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,        
                                                                KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          MS_WHLD,        KC_TRNS,        KC_NO,          

        KC_TRNS,        KC_TRNS,        KC_TRNS,                        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,          
                                                                KC_NO,          MS_BTN1,        MS_BTN2,        MS_BTN3,        MS_LEFT,        MS_DOWN,        MS_UP,          MS_RGHT          
        )
};
