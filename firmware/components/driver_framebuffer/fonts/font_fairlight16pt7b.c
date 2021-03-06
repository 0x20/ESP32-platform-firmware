#include "../include/driver_framebuffer.h"
const uint8_t fairlight16pt7bBitmaps[] = {
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0x0E, 0x00, 0x00, 0x70, 0xE1, 0xC0,
  0xE1, 0xB8, 0x7E, 0x1C, 0x39, 0xC3, 0x9C, 0x39, 0xCF, 0xFF, 0xFF, 0xF3,
  0x9C, 0x39, 0xCF, 0xFF, 0xFF, 0xF3, 0x9C, 0x39, 0xC3, 0x9C, 0x1E, 0x07,
  0x87, 0xFD, 0xFF, 0xE0, 0x38, 0x07, 0xF9, 0xFE, 0xFF, 0xBF, 0xE1, 0xE0,
  0x78, 0xE0, 0xF0, 0x78, 0x3C, 0x70, 0x70, 0x38, 0x70, 0x70, 0x38, 0x71,
  0xF0, 0xF8, 0x70, 0x3F, 0x83, 0xF8, 0xE1, 0xCE, 0x1C, 0x3F, 0x83, 0xF8,
  0x3E, 0x0E, 0x1F, 0xE1, 0xFE, 0x1C, 0x3F, 0xF3, 0xFF, 0x1C, 0x77, 0x38,
  0xE0, 0x1C, 0x73, 0x8E, 0x38, 0xEE, 0x38, 0xE0, 0xE3, 0x8E, 0x1C, 0x70,
  0xE3, 0x87, 0x1C, 0x71, 0xC1, 0xC7, 0x1D, 0xC7, 0x1C, 0xE3, 0x80, 0x39,
  0xC3, 0x9C, 0x1F, 0x0F, 0xFF, 0xFF, 0xF1, 0xF0, 0x39, 0xC3, 0x9C, 0x1C,
  0x07, 0x01, 0xC3, 0xFF, 0xFF, 0xC7, 0x01, 0xC0, 0x70, 0x39, 0xCF, 0xCE,
  0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0xE0, 0x1C,
  0x0E, 0x01, 0xC0, 0x70, 0x38, 0x07, 0x01, 0xC0, 0xE0, 0x1C, 0x00, 0x3F,
  0xC3, 0xFC, 0xF8, 0x7E, 0x1F, 0xE1, 0xFF, 0xE7, 0xFE, 0x7F, 0x87, 0xE1,
  0xFE, 0x1F, 0x3F, 0xC3, 0xFC, 0x7C, 0x7C, 0xE0, 0xE0, 0x1C, 0x1C, 0x1C,
  0x1C, 0x1C, 0x1C, 0x1F, 0x1F, 0x3F, 0x38, 0x0E, 0x00, 0x07, 0x01, 0xC7,
  0xC1, 0xF0, 0xE0, 0xE1, 0xF8, 0x7F, 0xF3, 0xFC, 0xFF, 0x3F, 0xC0, 0x00,
  0x07, 0x01, 0xC7, 0xC1, 0xF0, 0x07, 0xE1, 0xF8, 0x73, 0xF0, 0xFC, 0x07,
  0xC0, 0x7C, 0x18, 0x01, 0x80, 0x39, 0xCE, 0x1C, 0xE1, 0xCF, 0xFF, 0xFF,
  0xF0, 0x1C, 0x01, 0xF0, 0x1F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xE0,
  0x0F, 0xFC, 0xFF, 0xC0, 0x07, 0xE1, 0xFE, 0x1F, 0x3F, 0xC3, 0xFC, 0x1F,
  0xC1, 0xFC, 0x38, 0x73, 0x87, 0xE0, 0x0F, 0xFC, 0xFF, 0xCE, 0x07, 0xE0,
  0x7E, 0x1F, 0x3F, 0xC3, 0xFC, 0xFF, 0xFF, 0xF0, 0x00, 0x0E, 0x03, 0x80,
  0xE1, 0xC0, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x3F, 0xC3, 0xFC, 0xF8,
  0x0E, 0x07, 0xE0, 0x73, 0xFC, 0x3F, 0xCE, 0x07, 0xE0, 0x7E, 0x1F, 0x3F,
  0xC3, 0xFC, 0x3F, 0xC3, 0xFC, 0xF8, 0x0E, 0x07, 0xE0, 0x73, 0xFF, 0x3F,
  0xF0, 0x07, 0xE1, 0xFE, 0x1F, 0x3F, 0xC3, 0xFC, 0xFC, 0x01, 0xF8, 0x39,
  0xC0, 0x00, 0x00, 0xE7, 0x3F, 0x38, 0x07, 0xC1, 0xF1, 0xC0, 0xE0, 0x38,
  0x38, 0x0E, 0x00, 0xE0, 0x38, 0x07, 0x00, 0x7C, 0x1F, 0xFF, 0xFF, 0xF0,
  0x00, 0x00, 0xFF, 0xFF, 0xF0, 0xF8, 0x7C, 0x07, 0x00, 0xE0, 0x70, 0x1C,
  0x0E, 0x0E, 0x07, 0x0E, 0x3E, 0x1F, 0x00, 0x7F, 0x9F, 0xEE, 0x1F, 0x87,
  0x01, 0xC0, 0x70, 0x38, 0x78, 0x1E, 0x00, 0x01, 0xE0, 0x78, 0x3F, 0x0F,
  0xCE, 0x1F, 0x9F, 0xE7, 0xF9, 0xFE, 0x03, 0x80, 0xE0, 0xF8, 0x33, 0xF0,
  0xFC, 0x1F, 0xF1, 0xFF, 0x38, 0x0E, 0x07, 0xE0, 0x7F, 0xFF, 0xFF, 0xFE,
  0x07, 0xE0, 0x7E, 0x07, 0x38, 0x73, 0x87, 0xFF, 0xCF, 0xFC, 0x00, 0x70,
  0x07, 0xE1, 0xFF, 0xFC, 0xFF, 0xCE, 0x07, 0xE0, 0x7E, 0x1F, 0xFF, 0xCF,
  0xFC, 0x1F, 0xC7, 0xF3, 0x83, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE1,
  0xF8, 0x73, 0xF8, 0xFE, 0xFF, 0xCF, 0xFC, 0x00, 0x7E, 0x07, 0xE0, 0x7E,
  0x07, 0xE0, 0x7E, 0x1C, 0xE1, 0xCE, 0x7C, 0xFE, 0x0F, 0xE0, 0xFF, 0xFF,
  0xFF, 0x00, 0x0E, 0x00, 0xE0, 0x0F, 0xF8, 0xFF, 0x8E, 0x00, 0xF8, 0x7F,
  0x87, 0x3F, 0xC3, 0xFC, 0xFF, 0xFF, 0xFF, 0x00, 0x0E, 0x00, 0xE0, 0x0F,
  0xF8, 0xFF, 0x8E, 0x00, 0xE0, 0x0E, 0x00, 0x38, 0x03, 0x80, 0x3F, 0xC3,
  0xFC, 0xF8, 0x7F, 0x87, 0xE0, 0x0E, 0x1F, 0xE1, 0xFE, 0x07, 0xE0, 0x7E,
  0x1F, 0x3F, 0xC3, 0xFC, 0xE0, 0x7E, 0x07, 0x00, 0x7E, 0x07, 0xE0, 0x7F,
  0xFF, 0xFF, 0xFE, 0x07, 0xE0, 0x7E, 0x07, 0x38, 0x73, 0x87, 0xFF, 0xFF,
  0xF0, 0x00, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x03, 0xFC,
  0xFF, 0x3F, 0xF3, 0xFF, 0x00, 0x00, 0x38, 0x03, 0x80, 0x38, 0x03, 0x8C,
  0x38, 0xC3, 0x8E, 0x38, 0x3E, 0x03, 0xE0, 0xE0, 0x7E, 0x07, 0x01, 0xCE,
  0x38, 0xE3, 0x8F, 0xE0, 0xFE, 0x0E, 0x38, 0xE3, 0x8E, 0x1C, 0x60, 0x76,
  0x07, 0xE0, 0x0E, 0x00, 0x00, 0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x0E,
  0x00, 0xE1, 0xFE, 0x1F, 0xFF, 0xCF, 0xFC, 0x18, 0x71, 0x87, 0x3E, 0x0F,
  0xFF, 0xFF, 0xFE, 0x67, 0xE6, 0x7E, 0x67, 0xE6, 0x7E, 0x07, 0x38, 0x73,
  0x87, 0x38, 0x73, 0x87, 0xF8, 0x0F, 0xE7, 0xFE, 0x7F, 0xE7, 0xE1, 0xFE,
  0x1F, 0xE1, 0xFE, 0x07, 0x38, 0x73, 0x87, 0x3F, 0xC3, 0xFC, 0xF8, 0x7E,
  0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x1F, 0x3F, 0xC3,
  0xFC, 0xFF, 0xCF, 0xFC, 0x00, 0x7E, 0x07, 0xE0, 0x7F, 0xFC, 0xFF, 0xCE,
  0x00, 0xE0, 0x0E, 0x00, 0x38, 0x03, 0x80, 0x3F, 0xC3, 0xFC, 0xF8, 0x7E,
  0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x1F, 0xE1, 0xFF, 0xFF, 0x3E, 0x73,
  0xE7, 0xFF, 0xDF, 0xF8, 0x03, 0xF0, 0x7E, 0x0F, 0xFF, 0xBF, 0xF7, 0x38,
  0xE1, 0xDC, 0x38, 0xE3, 0x9C, 0x70, 0x3F, 0xC3, 0xFC, 0xF8, 0x7F, 0x87,
  0xE0, 0x03, 0xFC, 0x3F, 0xC0, 0x07, 0xE1, 0xFE, 0x1F, 0x3F, 0xC3, 0xFC,
  0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xF0, 0x1F, 0x01, 0xF0, 0x1F, 0x01, 0xF0,
  0x1F, 0x01, 0xF0, 0x07, 0xC0, 0x7C, 0xE0, 0x7E, 0x07, 0xE0, 0x0E, 0x07,
  0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x73, 0x9F, 0x1F, 0xF1, 0xFF,
  0xE0, 0x7E, 0x07, 0xE0, 0x0E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x73, 0x87,
  0x38, 0x71, 0xC7, 0x07, 0xC0, 0x7C, 0x38, 0x73, 0x87, 0xE0, 0x0E, 0x00,
  0xE6, 0x7E, 0x67, 0xE6, 0x7F, 0xFF, 0xFF, 0xF3, 0x9F, 0x18, 0x71, 0x87,
  0x38, 0xFF, 0x03, 0xE0, 0x1F, 0xC3, 0xF8, 0x0E, 0x0F, 0xE1, 0xFC, 0xFB,
  0xFF, 0x7C, 0xE3, 0x9C, 0x70, 0xE0, 0x7E, 0x07, 0xE0, 0x0E, 0x07, 0xE0,
  0x73, 0x9C, 0x1F, 0x81, 0xF8, 0x1F, 0x81, 0xF8, 0x1F, 0x81, 0xF8, 0xFF,
  0xFF, 0xF0, 0xE0, 0xE0, 0x70, 0xE0, 0xE0, 0x70, 0xE3, 0xF1, 0xFF, 0xDF,
  0xE0, 0xFF, 0xFF, 0x87, 0x0E, 0x1C, 0x38, 0x70, 0xE1, 0xC3, 0xFF, 0xF0,
  0xE0, 0x1C, 0x00, 0xE0, 0x0E, 0x01, 0xC0, 0x0E, 0x00, 0xE0, 0x1C, 0x00,
  0xE0, 0x1C, 0xFF, 0xFC, 0x38, 0x70, 0xE1, 0xC3, 0x87, 0x0E, 0x1F, 0xFF,
  0xF0, 0x1C, 0x0E, 0x1F, 0xDC, 0x7E, 0x38, 0xFF, 0xFF, 0xFF, 0xF0, 0xE7,
  0x0E, 0x1F, 0xF1, 0xFF, 0x38, 0x0E, 0x07, 0xE0, 0x7F, 0xFF, 0xFF, 0xFE,
  0x07, 0xE0, 0x7E, 0x07, 0x38, 0x73, 0x87, 0xFF, 0xCF, 0xFC, 0x00, 0x70,
  0x07, 0xE1, 0xFF, 0xFC, 0xFF, 0xCE, 0x07, 0xE0, 0x7E, 0x1F, 0xFF, 0xCF,
  0xFC, 0x1F, 0xC7, 0xF3, 0x83, 0x80, 0xE0, 0x38, 0x0E, 0x03, 0x80, 0xE1,
  0xF8, 0x73, 0xF8, 0xFE, 0xFF, 0xCF, 0xFC, 0x00, 0x7E, 0x07, 0xE0, 0x7E,
  0x07, 0xE0, 0x7E, 0x1C, 0xE1, 0xCE, 0x7C, 0xFE, 0x0F, 0xE0, 0xFF, 0xFF,
  0xFF, 0x00, 0x0E, 0x00, 0xE0, 0x0F, 0xF8, 0xFF, 0x8E, 0x00, 0xF8, 0x7F,
  0x87, 0x3F, 0xC3, 0xFC, 0xFF, 0xFF, 0xFF, 0x00, 0x0E, 0x00, 0xE0, 0x0F,
  0xF8, 0xFF, 0x8E, 0x00, 0xE0, 0x0E, 0x00, 0x38, 0x03, 0x80, 0x3F, 0xC3,
  0xFC, 0xF8, 0x7F, 0x87, 0xE0, 0x0E, 0x1F, 0xE1, 0xFE, 0x07, 0xE0, 0x7E,
  0x1F, 0x3F, 0xC3, 0xFC, 0xE0, 0x7E, 0x07, 0x00, 0x7E, 0x07, 0xE0, 0x7F,
  0xFF, 0xFF, 0xFE, 0x07, 0xE0, 0x7E, 0x07, 0x38, 0x73, 0x87, 0xFF, 0xFF,
  0xF0, 0x00, 0x70, 0x1C, 0x07, 0x01, 0xC0, 0x70, 0x1C, 0x07, 0x03, 0xFC,
  0xFF, 0x3F, 0xF3, 0xFF, 0x00, 0x00, 0x38, 0x03, 0x80, 0x38, 0x03, 0x8C,
  0x38, 0xC3, 0x8E, 0x38, 0x3E, 0x03, 0xE0, 0xE0, 0x7E, 0x07, 0x01, 0xCE,
  0x38, 0xE3, 0x8F, 0xE0, 0xFE, 0x0E, 0x38, 0xE3, 0x8E, 0x1C, 0x60, 0x76,
  0x07, 0xE0, 0x0E, 0x00, 0x00, 0x0E, 0x00, 0xE0, 0x0E, 0x00, 0xE0, 0x0E,
  0x00, 0xE1, 0xFE, 0x1F, 0xFF, 0xCF, 0xFC, 0x18, 0x71, 0x87, 0x3E, 0x0F,
  0xFF, 0xFF, 0xFE, 0x67, 0xE6, 0x7E, 0x67, 0xE6, 0x7E, 0x07, 0x38, 0x73,
  0x87, 0x38, 0x73, 0x87, 0xF8, 0x0F, 0xE7, 0xFE, 0x7F, 0xE7, 0xE1, 0xFE,
  0x1F, 0xE1, 0xFE, 0x07, 0x38, 0x73, 0x87, 0x3F, 0xC3, 0xFC, 0xF8, 0x7E,
  0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x1F, 0x3F, 0xC3,
  0xFC, 0xFF, 0xCF, 0xFC, 0x00, 0x7E, 0x07, 0xE0, 0x7F, 0xFC, 0xFF, 0xCE,
  0x00, 0xE0, 0x0E, 0x00, 0x38, 0x03, 0x80, 0x3F, 0xC3, 0xFC, 0xF8, 0x7E,
  0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x1F, 0xE1, 0xFF, 0xFF, 0x3E, 0x73,
  0xE7, 0xFF, 0xDF, 0xF8, 0x03, 0xF0, 0x7E, 0x0F, 0xFF, 0xBF, 0xF7, 0x38,
  0xE1, 0xDC, 0x38, 0xE3, 0x9C, 0x70, 0x3F, 0xC3, 0xFC, 0xF8, 0x7F, 0x87,
  0xE0, 0x03, 0xFC, 0x3F, 0xC0, 0x07, 0xE1, 0xFE, 0x1F, 0x3F, 0xC3, 0xFC,
  0xFF, 0xFF, 0xFF, 0x00, 0x01, 0xF0, 0x1F, 0x01, 0xF0, 0x1F, 0x01, 0xF0,
  0x1F, 0x01, 0xF0, 0x07, 0xC0, 0x7C, 0xE0, 0x7E, 0x07, 0xE0, 0x0E, 0x07,
  0xE0, 0x7E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x73, 0x9F, 0x1F, 0xF1, 0xFF,
  0xE0, 0x7E, 0x07, 0xE0, 0x0E, 0x07, 0xE0, 0x7E, 0x07, 0xE0, 0x73, 0x87,
  0x38, 0x71, 0xC7, 0x07, 0xC0, 0x7C, 0x38, 0x73, 0x87, 0xE0, 0x0E, 0x00,
  0xE6, 0x7E, 0x67, 0xE6, 0x7F, 0xFF, 0xFF, 0xF3, 0x9F, 0x18, 0x71, 0x87,
  0x38, 0xFF, 0x03, 0xE0, 0x1F, 0xC3, 0xF8, 0x0E, 0x0F, 0xE1, 0xFC, 0xFB,
  0xFF, 0x7C, 0xE3, 0x9C, 0x70, 0xE0, 0x7E, 0x07, 0xE0, 0x0E, 0x07, 0xE0,
  0x73, 0x9C, 0x1F, 0x81, 0xF8, 0x1F, 0x81, 0xF8, 0x1F, 0x81, 0xF8, 0xFF,
  0xFF, 0xF0, 0xE0, 0xE0, 0x70, 0xE0, 0xE0, 0x70, 0xE3, 0xF1, 0xFF, 0xDF,
  0xE0, 0x3F, 0x9F, 0xCE, 0x07, 0x03, 0x87, 0xC3, 0xE0, 0x70, 0x38, 0x1C,
  0x0F, 0xE7, 0xF0, 0xFF, 0xFE, 0x07, 0xFF, 0xF0, 0xFE, 0x7F, 0x03, 0x81,
  0xC0, 0xE0, 0x7C, 0x3E, 0x1C, 0x0E, 0x07, 0x3F, 0x9F, 0xC0, 0x39, 0xF9,
  0xCE, 0x70 };

const GFXglyph fairlight16pt7bGlyphs[] = {
  {     0,   1,   1,  14,    0,    0 },   // 0x20 ' '
  {     1,   7,  12,  14,    3,  -11 },   // 0x21 '!'
  {    12,  10,   3,  14,    2,  -11 },   // 0x22 '"'
  {    16,  12,  12,  14,    1,  -11 },   // 0x23 '#'
  {    34,  10,  12,  14,    2,  -11 },   // 0x24 '$'
  {    49,   9,  12,  14,    2,  -11 },   // 0x25 '%'
  {    63,  12,  12,  14,    1,  -11 },   // 0x26 '&'
  {    81,   6,   5,  14,    4,  -11 },   // 0x27 '''
  {    85,   6,  14,  14,    4,  -11 },   // 0x28 '('
  {    96,   6,  14,  14,    4,  -11 },   // 0x29 ')'
  {   107,  12,   8,  14,    1,   -9 },   // 0x2A '*'
  {   119,  10,   8,  14,    2,   -9 },   // 0x2B '+'
  {   129,   5,   5,  14,    4,   -2 },   // 0x2C ','
  {   133,  12,   4,  14,    1,   -6 },   // 0x2D '-'
  {   139,   3,   3,  14,    5,   -2 },   // 0x2E '.'
  {   141,  11,  10,  14,    2,   -9 },   // 0x2F '/'
  {   155,  12,  12,  14,    1,  -11 },   // 0x30 '0'
  {   173,   8,  12,  14,    3,  -11 },   // 0x31 '1'
  {   185,  10,  12,  14,    3,  -11 },   // 0x32 '2'
  {   200,  10,  12,  14,    2,  -11 },   // 0x33 '3'
  {   215,  12,  12,  14,    1,  -11 },   // 0x34 '4'
  {   233,  12,  12,  14,    1,  -11 },   // 0x35 '5'
  {   251,  12,  12,  14,    1,  -11 },   // 0x36 '6'
  {   269,  10,  12,  14,    2,  -11 },   // 0x37 '7'
  {   284,  12,  12,  14,    1,  -11 },   // 0x38 '8'
  {   302,  12,  12,  14,    1,  -11 },   // 0x39 '9'
  {   320,   3,   7,  14,    5,   -8 },   // 0x3A ':'
  {   323,   5,  11,  14,    4,   -8 },   // 0x3B ';'
  {   330,  10,  12,  14,    2,  -11 },   // 0x3C '<'
  {   345,  10,   6,  14,    2,   -8 },   // 0x3D '='
  {   353,   9,  12,  14,    2,  -11 },   // 0x3E '>'
  {   367,  10,  12,  14,    2,  -11 },   // 0x3F '?'
  {   382,  10,  12,  14,    2,  -11 },   // 0x40 '@'
  {   397,  12,  12,  14,    1,  -11 },   // 0x41 'A'
  {   415,  12,  12,  14,    1,  -11 },   // 0x42 'B'
  {   433,  10,  12,  14,    3,  -11 },   // 0x43 'C'
  {   448,  12,  12,  14,    1,  -11 },   // 0x44 'D'
  {   466,  12,  12,  14,    1,  -11 },   // 0x45 'E'
  {   484,  12,  12,  14,    1,  -11 },   // 0x46 'F'
  {   502,  12,  12,  14,    1,  -11 },   // 0x47 'G'
  {   520,  12,  12,  14,    1,  -11 },   // 0x48 'H'
  {   538,  10,  12,  14,    2,  -11 },   // 0x49 'I'
  {   553,  12,  12,  14,    1,  -11 },   // 0x4A 'J'
  {   571,  12,  12,  14,    1,  -11 },   // 0x4B 'K'
  {   589,  12,  12,  14,    1,  -11 },   // 0x4C 'L'
  {   607,  12,  12,  14,    1,  -11 },   // 0x4D 'M'
  {   625,  12,  12,  14,    1,  -11 },   // 0x4E 'N'
  {   643,  12,  12,  14,    1,  -11 },   // 0x4F 'O'
  {   661,  12,  12,  14,    1,  -11 },   // 0x50 'P'
  {   679,  12,  12,  14,    1,  -11 },   // 0x51 'Q'
  {   697,  11,  12,  14,    1,  -11 },   // 0x52 'R'
  {   714,  12,  12,  14,    1,  -11 },   // 0x53 'S'
  {   732,  12,  12,  14,    1,  -11 },   // 0x54 'T'
  {   750,  12,  12,  14,    1,  -11 },   // 0x55 'U'
  {   768,  12,  12,  14,    1,  -11 },   // 0x56 'V'
  {   786,  12,  12,  14,    1,  -11 },   // 0x57 'W'
  {   804,  11,  12,  14,    2,  -11 },   // 0x58 'X'
  {   821,  12,  12,  14,    1,  -11 },   // 0x59 'Y'
  {   839,   9,  12,  14,    4,  -11 },   // 0x5A 'Z'
  {   853,   7,  12,  14,    3,  -11 },   // 0x5B '['
  {   864,  11,  10,  14,    1,   -9 },   // 0x5C '\'
  {   878,   7,  12,  14,    5,  -11 },   // 0x5D ']'
  {   889,   9,   5,  14,    2,  -16 },   // 0x5E '^'
  {   895,  14,   2,  14,    0,    1 },   // 0x5F '_'
  {   899,   5,   3,  14,    4,  -16 },   // 0x60 '`'
  {   901,  12,  12,  14,    1,  -11 },   // 0x61 'a'
  {   919,  12,  12,  14,    1,  -11 },   // 0x62 'b'
  {   937,  10,  12,  14,    3,  -11 },   // 0x63 'c'
  {   952,  12,  12,  14,    1,  -11 },   // 0x64 'd'
  {   970,  12,  12,  14,    1,  -11 },   // 0x65 'e'
  {   988,  12,  12,  14,    1,  -11 },   // 0x66 'f'
  {  1006,  12,  12,  14,    1,  -11 },   // 0x67 'g'
  {  1024,  12,  12,  14,    1,  -11 },   // 0x68 'h'
  {  1042,  10,  12,  14,    2,  -11 },   // 0x69 'i'
  {  1057,  12,  12,  14,    1,  -11 },   // 0x6A 'j'
  {  1075,  12,  12,  14,    1,  -11 },   // 0x6B 'k'
  {  1093,  12,  12,  14,    1,  -11 },   // 0x6C 'l'
  {  1111,  12,  12,  14,    1,  -11 },   // 0x6D 'm'
  {  1129,  12,  12,  14,    1,  -11 },   // 0x6E 'n'
  {  1147,  12,  12,  14,    1,  -11 },   // 0x6F 'o'
  {  1165,  12,  12,  14,    1,  -11 },   // 0x70 'p'
  {  1183,  12,  12,  14,    1,  -11 },   // 0x71 'q'
  {  1201,  11,  12,  14,    1,  -11 },   // 0x72 'r'
  {  1218,  12,  12,  14,    1,  -11 },   // 0x73 's'
  {  1236,  12,  12,  14,    1,  -11 },   // 0x74 't'
  {  1254,  12,  12,  14,    1,  -11 },   // 0x75 'u'
  {  1272,  12,  12,  14,    1,  -11 },   // 0x76 'v'
  {  1290,  12,  12,  14,    1,  -11 },   // 0x77 'w'
  {  1308,  11,  12,  14,    2,  -11 },   // 0x78 'x'
  {  1325,  12,  12,  14,    1,  -11 },   // 0x79 'y'
  {  1343,   9,  12,  14,    4,  -11 },   // 0x7A 'z'
  {  1357,   9,  12,  14,    2,  -11 },   // 0x7B '{'
  {  1371,   3,  12,  14,    5,  -11 },   // 0x7C '|'
  {  1376,   9,  12,  14,    3,  -11 },   // 0x7D '}'
  {  1390,  10,   3,  14,    2,  -11 } }; // 0x7E '~'

const GFXfont fairlight16pt7b = {
  (uint8_t  *)fairlight16pt7bBitmaps,
  (GFXglyph *)fairlight16pt7bGlyphs,
  0x20, 0x7E, 16 };//B

// Approx. 2066 bytes
