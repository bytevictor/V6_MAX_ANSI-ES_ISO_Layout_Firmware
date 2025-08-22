/* Copyright 2024 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H
#include "keychron_common.h"
#include "keymap_spanish.h"


enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
};
// clang-format off

// Programmer Keys (invert the numkeys to default simbols)
// const key_override_t key_override1 = ko_make_basic(MOD_MASK_SHIFT, ES_EXLM, KC_1);
// const key_override_t key_override2 = ko_make_basic(MOD_MASK_SHIFT, ES_AT, KC_2);
// const key_override_t key_override3 = ko_make_basic(MOD_MASK_SHIFT, ES_HASH, KC_3);
// const key_override_t key_override4 = ko_make_basic(MOD_MASK_SHIFT, ES_DLR, KC_4);
// const key_override_t key_override5 = ko_make_basic(MOD_MASK_SHIFT, ES_PERC, KC_5);
// const key_override_t key_override6 = ko_make_basic(MOD_MASK_SHIFT, ES_CIRC, KC_6);
// const key_override_t key_override7 = ko_make_basic(MOD_MASK_SHIFT, ES_AMPR, KC_7);
// const key_override_t key_override8 = ko_make_basic(MOD_MASK_SHIFT, ES_ASTR, KC_8);
// const key_override_t key_override9 = ko_make_basic(MOD_MASK_SHIFT, ES_LPRN, KC_9);
// const key_override_t key_override0 = ko_make_basic(MOD_MASK_SHIFT, ES_RPRN, KC_0);


// ES + ANSI LAYOUT MERGE
const key_override_t key_override1 = ko_make_basic(MOD_MASK_SHIFT,  KC_1, ES_EXLM);
const key_override_t key_override2 = ko_make_basic(MOD_MASK_SHIFT,  KC_2, ES_AT);
const key_override_t key_override3 = ko_make_basic(MOD_MASK_SHIFT,  KC_3, ES_HASH);
const key_override_t key_override4 = ko_make_basic(MOD_MASK_SHIFT,  KC_4, ES_DLR);
const key_override_t key_override5 = ko_make_basic(MOD_MASK_SHIFT,  KC_5, ES_PERC);
const key_override_t key_override6 = ko_make_basic(MOD_MASK_SHIFT,  KC_6, ES_CIRC);
const key_override_t key_override7 = ko_make_basic(MOD_MASK_SHIFT,  KC_7, ES_AMPR);
const key_override_t key_override8 = ko_make_basic(MOD_MASK_SHIFT,  KC_8, ES_ASTR);
const key_override_t key_override9 = ko_make_basic(MOD_MASK_SHIFT,  KC_9, ES_LPRN);
const key_override_t key_override0 = ko_make_basic(MOD_MASK_SHIFT,  KC_0, ES_RPRN);



/*   ` + shift == ~   */  const key_override_t key_override_virgula = ko_make_basic(MOD_MASK_SHIFT, ES_GRV, ES_TILD);

/*   - + shift == _   */  const key_override_t key_override_barrabaja = ko_make_basic(MOD_MASK_SHIFT, ES_MINS, ES_UNDS);

/*   = + shift == +   */  const key_override_t key_override_mas = ko_make_basic(MOD_MASK_SHIFT, ES_EQL, ES_PLUS);

/*   ` + altGr == º   */  const key_override_t key_override_no = ko_make_basic(MOD_MASK_ALT, ES_GRV, ES_MORD);

/*   1 + altGr == ¡   */  const key_override_t key_override_exclamacioninvertida = ko_make_basic(MOD_MASK_ALT, ES_EXLM, ES_IEXL);

/*   [ + shift == {   */  const key_override_t key_override_Lbracket = ko_make_basic(MOD_MASK_SHIFT, ES_LBRC, ES_LCBR);
/*   ] + shift == }   */  const key_override_t key_override_Rbracket = ko_make_basic(MOD_MASK_SHIFT, ES_RBRC, ES_RCBR);

/*   , + altGr == <   */  const key_override_t key_override_menorque = ko_make_basic(MOD_MASK_ALT, KC_COMM, ES_LABK);
/*   . + altGr == >   */  const key_override_t key_override_mayorque = ko_make_basic(MOD_MASK_ALT, KC_DOT, ES_RABK);

/*   \ + shift == |   */  const key_override_t key_override_cauce = ko_make_basic(MOD_MASK_SHIFT, ES_BSLS, ES_PIPE);
/*   \ + altGr == Ç   */  const key_override_t key_override_cedilla = ko_make_basic(MOD_MASK_ALT, ES_BSLS, ES_CCED);

/*   ' + shift == "   */  const key_override_t key_override_quote = ko_make_basic(MOD_MASK_SHIFT, KC_QUOT, ES_DQUO);
/*   ' + altGr == '   */  const key_override_t key_override_singlequote = ko_make_basic(MOD_MASK_ALT, KC_QUOT, ES_QUOT);
/*   ' + shift + altGr == ¨ */  const key_override_t key_override_dieresis = ko_make_basic(MOD_MASK_SA, KC_QUOT, ES_DIAE);

/*   / + shift == ?   */  const key_override_t key_override_question = ko_make_basic(MOD_MASK_SHIFT, ES_SLSH, ES_QUES);
/*   / + altGr == ¿   */  const key_override_t key_override_questioninvertida = ko_make_basic(MOD_MASK_ALT, ES_SLSH, ES_IQUE);

/*   e + altGr == €   */  const key_override_t key_override_euro = ko_make_basic(MOD_MASK_ALT, KC_E, ES_EURO);



// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &key_override1,
    &key_override2,
    &key_override3,
    &key_override4,
    &key_override5,
    &key_override6,
    &key_override7,
    &key_override8,
    &key_override9,
    &key_override0,
    &key_override_virgula,
    &key_override_mas,
    &key_override_barrabaja,
    &key_override_Lbracket,
    &key_override_Rbracket,
    &key_override_euro,
    &key_override_singlequote,
    &key_override_menorque,
    &key_override_mayorque,
    &key_override_cedilla,
    &key_override_quote,
    &key_override_question,
    &key_override_questioninvertida,
    &key_override_dieresis,
    &key_override_no,
    &key_override_cauce,
    &key_override_exclamacioninvertida,
    NULL // Null terminate the array of overrides!
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_ansi_109(
        KC_ESC,   KC_BRID,  KC_BRIU,  KC_MCTRL, KC_LNPAD, RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    KC_MUTE,    KC_SNAP,  KC_SIRI,  RGB_MOD,  KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,    KC_BSLS,    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,              KC_RSFT,              KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LOPTN, KC_LCMMD,                               KC_SPC,                                 KC_RCMMD, KC_ROPTN, MO(MAC_FN), KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [MAC_FN] = LAYOUT_ansi_109(
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  _______,  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______),
    [WIN_BASE] = LAYOUT_ansi_109(
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,     KC_MUTE,    KC_PSCR,  KC_CTANA, RGB_MOD,  KC_F13,  KC_F14,  KC_F15,  KC_F16,
        ES_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     ES_MINS,  ES_EQL,     KC_BSPC,    KC_INS,   KC_HOME,  KC_PGUP,  KC_NUM,   KC_PSLS,  KC_PAST,  KC_PMNS,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     ES_LBRC,  ES_RBRC,    ES_BSLS,    KC_DEL,   KC_END,   KC_PGDN,  KC_P7,    KC_P8,    KC_P9,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,              KC_ENT,                                   KC_P4,    KC_P5,    KC_P6,    KC_PPLS,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   ES_SLSH,              KC_RSFT,              KC_UP,              KC_P1,    KC_P2,    KC_P3,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,  MO(WIN_FN), KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT,  KC_P0,              KC_PDOT,  KC_PENT),
    [WIN_FN] = LAYOUT_ansi_109(
        _______,  KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  RGB_VAD,  RGB_VAI,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,    RGB_TOG,    _______,  _______,  RGB_TOG,  _______,  _______,  _______,  _______,
        _______,  BT_HST1,  BT_HST2,  BT_HST3,  P2P4G,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,  _______,
        RGB_TOG,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,  _______,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,              _______,                                  _______,  _______,  _______,  _______,
        _______,            _______,  _______,  _______,  _______,  BAT_LVL,  NK_TOGG,  _______,  _______,  _______,  _______,              _______,              _______,            _______,  _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,    _______,    _______,  _______,  _______,  _______,            _______,  _______)
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [MAC_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [MAC_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [WIN_FN]   = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI)},
};
#endif // ENCODER_MAP_ENABLE

// clang-format on
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron_common(keycode, record)) {
        return false;
    }
    return true;
}
