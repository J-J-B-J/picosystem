
#include "picosystem.hpp"

namespace picosystem {

  void pen(uint8_t r, uint8_t g, uint8_t b, uint8_t a) {
    _pen = rgb(r, g, b, a);
  }

  void pen(color_t p) {
    _pen = p;
  }

  void alpha() {
    _a = 15;
  }

  void alpha(uint8_t a) {
    _a = a;
  }

  void clip() {
    _cx = 0; _cy = 0; _cw = _dt->w; _ch = _dt->h;
  }

  void clip(int32_t x, int32_t y, uint32_t w, uint32_t h) {
    _cx = x; _cy = y; _cw = w; _ch = h;
  }

  void blend() {
    _bf = ALPHA;
  }

  void blend(blend_func_t bf) {
    _bf = bf;
  }

  void target() {
    target(SCREEN);
  }

  void target(buffer_t *dt) {
    _dt = dt;
    clip(); // reset clip rect
  }

  void camera() {
    _camx = 0; _camy = 0;
  }

  void camera(int32_t x, int32_t y) {
    _camx = x; _camy = y;
  }

  void _camera_offset(int32_t &x, int32_t &y) {
    x -= _camx;
    y -= _camy;
  }

  void cursor() {
    _tx = 0; _ty = 0;
  }

  void cursor(int32_t x, int32_t y) {
    _tx = x; _ty = y;
  }

  void spritesheet() {
    _ss = DEFAULT_SPRITES;
  }

  void spritesheet(buffer_t *ss) {
    _ss = ss;
  }

}