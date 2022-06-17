//// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 528)
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);
const int ricardoallArray_LEN = 1;


//-------------------------------------------

const unsigned char ricardo3 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x04, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x10, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x70, 0xe4, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x7f, 0xe4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x7f, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x1e, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xff, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0c, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x7c, 0x0c, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xcc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x80, 0x00, 0x01, 0xff, 0xfe, 0x00, 
  0x00, 0x01, 0x80, 0x07, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x03, 0x80, 0x0f, 0xff, 0xff, 0xff, 0x00, 
  0x00, 0x01, 0x00, 0x3f, 0xff, 0xff, 0xff, 0x00, 0x00, 0x01, 0x00, 0xff, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x00, 0xff, 0xf3, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xf1, 0x7f, 0xff, 0x80, 
  0x00, 0x00, 0x01, 0xff, 0xf0, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x01, 0xff, 0xe0, 0x07, 0xff, 0xc0, 
  0x00, 0x00, 0x00, 0xff, 0xc0, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x7f, 0x80, 0x03, 0xff, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 
  0x00, 0x00, 0x00, 0x1f, 0xf0, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x3f, 0xf8, 0x07, 0xff, 0xfc, 
  0x00, 0x00, 0x06, 0x7f, 0xf8, 0x07, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x7f, 0xfc, 0x03, 0xff, 0xf8, 
  0x00, 0x00, 0x00, 0xff, 0xfc, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x01, 0xff, 0xfc, 
  0x00, 0x00, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x7f, 0xfc, 
  0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x7f, 0xfc, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x1f, 0xfc, 
  0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x07, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// this is the bitmap, change this variable for your specification.
const unsigned char myBitmap [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xf0, 0x00, 0x07, 0xc1, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x8f, 0xf0, 0x1c, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x80, 0x7f, 0x70, 0x00, 0x06, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xc2, 0x07, 0xe0, 0x00, 0x03, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x60, 0x60, 0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x30, 0x1c, 0x00, 0x49, 0x00, 0x00, 0x70, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x18, 0x06, 0x00, 0x08, 0x00, 0x0f, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x08, 0x03, 0x01, 0x00, 0x7c, 0x30, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x0c, 0x01, 0x3f, 0x00, 0x7e, 0x60, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x06, 0x01, 0x7f, 0x80, 0xfe, 0x40, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x01, 0x3f, 0x89, 0xfe, 0x40, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x03, 0x00, 0x3f, 0x91, 0xfe, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x01, 0xc0, 0x1f, 0x81, 0xf8, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x81, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x3c, 0x00, 0x00, 0x01, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0xc0, 0x00, 0x3f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x3f, 0xff, 0xf0, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x1e, 0xe0, 0x00, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x80, 0x00, 0x01, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xc0, 0x00, 0x07, 0x8c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xe0, 0x00, 0x1d, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x98, 0x00, 0xcd, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x8f, 0x81, 0x99, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x4b, 0x9f, 0x19, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x72, 0x68, 0x2c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x92, 0x48, 0x4c, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xd0, 0x48, 0xdf, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x03, 0x7c, 0x09, 0x9e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xf8, 0x0b, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x88, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x88, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x20, 0x88, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x70, 0x88, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x88, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x60, 0x88, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x78, 0xc8, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};//
const unsigned char ricardoB3 [] PROGMEM = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x3f, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x10, 0x00, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x30, 0x10, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xcc, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x30, 0x20, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xc8, 0xff, 0xf0, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x1f, 0xc0, 0x7f, 0xff, 0xff, 0xff, 0xff, 0x80, 0x0f, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xc0, 0x0e, 0x40, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x0e, 0x40, 0x7f, 0xff, 
  0xff, 0xff, 0xff, 0xe7, 0xfe, 0x40, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xfe, 0x78, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xc7, 0xfe, 0x78, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc7, 0xfe, 0x31, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x83, 0xfe, 0x01, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x7c, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0xf8, 0x00, 0xb6, 0x00, 0x0f, 0xff, 0xff, 0xff, 0xe0, 0x00, 0xff, 0x00, 0x07, 0xff, 
  0xff, 0xff, 0xc0, 0x00, 0x7e, 0x00, 0x03, 0xff, 0xff, 0xff, 0x80, 0x00, 0x20, 0x00, 0x01, 0xff, 
  0xff, 0xff, 0x00, 0x20, 0x30, 0x00, 0x01, 0xff, 0xff, 0xfc, 0x30, 0x26, 0x08, 0x00, 0x01, 0xff, 
  0xff, 0xfc, 0x00, 0x33, 0x00, 0x00, 0x01, 0xff, 0xff, 0xf0, 0x00, 0x1c, 0x00, 0x00, 0x01, 0xff, 
  0xff, 0xc0, 0x00, 0x0e, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x40, 0x01, 0xff, 
  0xfe, 0x01, 0xfd, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfc, 0x0f, 0xff, 0x00, 0x00, 0x00, 0x01, 0xff, 
  0xfc, 0x1f, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xfc, 0x7f, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 
  0xfc, 0x7f, 0xff, 0xdc, 0xc0, 0x01, 0x80, 0xff, 0xfc, 0xff, 0xff, 0xff, 0xf0, 0x01, 0x80, 0xff, 
  0xfc, 0xff, 0xff, 0xff, 0xfc, 0x00, 0x80, 0xff, 0xf9, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0xff, 
  0xf9, 0xff, 0xff, 0xcf, 0xff, 0x00, 0x00, 0xff, 0xf1, 0xff, 0xfc, 0x0f, 0xff, 0x00, 0x00, 0x7f, 
  0xf1, 0xff, 0xf0, 0x0f, 0xff, 0x00, 0x00, 0x7f, 0xe3, 0xff, 0xe0, 0x07, 0xff, 0x00, 0x00, 0x3f, 
  0xe7, 0xff, 0xc0, 0x03, 0xff, 0x00, 0x00, 0x3f, 0xc7, 0xff, 0xc0, 0x01, 0xfe, 0x00, 0x00, 0x3f, 
  0xcf, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xdf, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  0xdf, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x9f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x1f, 
  0x9f, 0xff, 0xf0, 0x0f, 0xf0, 0x00, 0x00, 0x1f, 0x9f, 0xff, 0xe0, 0x1f, 0xf8, 0x00, 0x00, 0x0f, 
  0x9f, 0xff, 0xc0, 0x1f, 0xfc, 0x20, 0x00, 0x0f, 0x9f, 0xff, 0xc0, 0x3f, 0xfe, 0x00, 0x00, 0x07, 
  0x9f, 0xff, 0x80, 0x3f, 0xff, 0x00, 0x00, 0x07, 0xbf, 0xff, 0x00, 0x3f, 0xff, 0x80, 0x00, 0x03, 
  0xbf, 0xff, 0x00, 0x1f, 0xff, 0x00, 0x00, 0x03, 0xbf, 0xfe, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x03, 
  0xbf, 0xfc, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x01, 0xbf, 0xf8, 0x00, 0x0f, 0xfe, 0x00, 0x00, 0x01, 
  0x9f, 0xe0, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x01, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
const unsigned char PauseButtonR [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 0x00, 0x3f, 0xff, 0x80, 0x01, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
const unsigned char ContinousButtonR__1_ [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 
  0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xf8, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 
  0x00, 0x00, 0x00, 0x01, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfe, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x07, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x3f, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0x80, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

const unsigned char musicdownload__1_ [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x01, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x02, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x07, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xc8, 0x00, 0x7f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x88, 0x03, 0xfa, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x01, 0x08, 0x1f, 0x82, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
  0x08, 0xf8, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0b, 
  0xc0, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x1e, 0x00, 
  0x03, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x78, 0x00, 0x03, 
  0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x7f, 0xff, 
  0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x80, 0x0f, 0xff, 0xff, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0xfe, 0x00, 0xf0, 0x60, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc3, 0xb0, 0x47, 0xc0, 0x00, 0xf8, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc3, 0xc0, 0x3f, 0xe0, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc3, 0xc0, 0xe7, 0xe0, 0x00, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x26, 0x07, 0x07, 0xf0, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x38, 0x1c, 0x03, 0xe0, 0x30, 0x2f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x60, 0x60, 0x00, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0xc1, 0xa0, 0x0f, 0xf8, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 
  0x06, 0x20, 0xfc, 0x00, 0x01, 0xcf, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x18, 
  0x07, 0x80, 0x00, 0x07, 0xf1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x20, 0x3c, 
  0x00, 0x00, 0x0f, 0xf8, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x90, 0xe0, 0x00, 
  0x00, 0x0f, 0xf8, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x13, 0x00, 0x00, 0x7e, 
  0x1e, 0x5c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0c, 0x1f, 0x10, 0x7f, 0xff, 0xfe, 
  0x0c, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x70, 0x7f, 0xf7, 0xf0, 0x00, 0x7f, 0xec, 
  0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x41, 0x80, 0x7c, 0x00, 0x00, 0x1b, 0xfc, 0x40, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x46, 0x03, 0xc0, 0x00, 0x00, 0x18, 0xbf, 0xc0, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x84, 0x98, 0x0e, 0x00, 0x00, 0x00, 0x18, 0x8f, 0xe0, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x06, 0x10, 0x60, 0x70, 0x00, 0x00, 0x00, 0x08, 0x90, 0xe0, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x18, 0x41, 0xa1, 0x80, 0x0f, 0xff, 0xfe, 0x0c, 0x01, 0x20, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x41, 0x06, 0x2e, 0x00, 0xfe, 0x00, 0x3f, 0xf7, 0x02, 0x00, 0x80, 0x20, 0x00, 0x00, 0x03, 
  0x0c, 0x10, 0x30, 0x0f, 0x80, 0x00, 0x00, 0xff, 0x9c, 0x00, 0x90, 0x00, 0x00, 0x00, 0x18, 0x60, 
  0xc1, 0xc0, 0x78, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x41, 0x00, 0x00, 0x01, 0x81, 0x62, 0x06, 
  0x1f, 0x80, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x20, 0x9e, 0x00, 0x70, 0x10, 0x30, 0x30, 0x1e, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x7c, 0x00, 0x00, 0x40, 0x00, 0x42, 0x01, 0xa1, 0xc0, 0xec, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x01, 0x22, 0x00, 0x10, 0x38, 0x2c, 0x07, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x0f, 0xc0, 0x00, 0x22, 0x07, 0xf8, 0x01, 0xe0, 0x38, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x02, 0x1f, 0xe0, 0x00, 0x02, 0x1c, 0x00, 0xf8, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x02, 0x3e, 0x60, 0x00, 0x00, 0x30, 0x40, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 
  0x3f, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x1e, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x0e, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x84, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x00
};
const unsigned char darkdownload__2_ [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x0b, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x4f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x5e, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x5f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe1, 0x4e, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x47, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x03, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x5f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf3, 0xe3, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x01, 0xe1, 0xc3, 0xc0, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xf5, 0xcf, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xef, 0xe0, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0x7f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xcf, 0xf7, 0xf0, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0x7f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xbf, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xfb, 0xbf, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xf6, 0xbf, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf7, 0xf7, 0xf8, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xc0, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xfc, 
  0x00, 0x00, 0x00, 0x00, 0x37, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x01, 0xd7, 0xff, 0xff, 0xfc, 
  0x00, 0x00, 0x00, 0x02, 0xe5, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x0f, 0x17, 0xfb, 0x7f, 0xfc, 
  0x00, 0x00, 0x00, 0x1d, 0x4f, 0xb9, 0x7f, 0x7c, 0x00, 0x00, 0x00, 0x3d, 0xfe, 0x38, 0x7c, 0x48, 
  0x00, 0x00, 0x00, 0x7f, 0xf8, 0x00, 0x78, 0x50, 0x00, 0x00, 0x00, 0x7f, 0xf0, 0x00, 0x08, 0x10, 
  0x00, 0x00, 0x00, 0xff, 0xe0, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x00, 0x10, 
  0x00, 0x00, 0x01, 0xff, 0x00, 0x80, 0x90, 0xb0, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x80, 0x40, 0xe0, 
  0x00, 0x00, 0x03, 0xfc, 0x10, 0x90, 0x20, 0x94, 0x00, 0x00, 0x07, 0xff, 0xf8, 0x90, 0x00, 0xf4, 
  0x00, 0x00, 0x07, 0xff, 0xb8, 0x80, 0x01, 0xfc, 0x9e, 0x00, 0x0f, 0xff, 0xfb, 0xc4, 0x17, 0xfc
};
const unsigned char halodownload__3_ [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x3e, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xbf, 0x80, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xbf, 0xc0, 0x00, 
  0x00, 0x00, 0x1f, 0xff, 0xbf, 0x40, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xbf, 0xc0, 0x00, 0x00, 0x00, 
  0xff, 0xff, 0xbf, 0xc0, 0x00, 0x00, 0x09, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0xff, 
  0xff, 0xc0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x01, 0x0f, 0xff, 0xff, 0xff, 0x80, 
  0x00, 0x00, 0x0f, 0xef, 0xff, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 
  0x0f, 0xff, 0xff, 0xdf, 0x80, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xdf, 0x80, 0x00, 0x00, 0x0f, 0xdf, 
  0xff, 0xdf, 0x80, 0x00, 0x00, 0x0f, 0xef, 0xff, 0xde, 0x00, 0x00, 0x00, 0x0e, 0x67, 0xff, 0x58, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x01, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x00, 
  0x02, 0x00, 0x07, 0xff, 0xc0, 0x00, 0x00, 0x06, 0x00, 0x07, 0xff, 0x00, 0x00, 0x00, 0x10, 0x20, 
  0x07, 0xfe, 0x00, 0x00, 0x00, 0x12, 0x00, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x17, 0x00, 0x07, 0xf8, 
  0x00, 0x00, 0x00, 0x14, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x16, 0x00, 0x07, 0x60, 0x00, 0x00, 
  0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x17, 
  0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x17, 0x00, 0x1f, 0xf8, 0x00, 0x00, 0x00, 0x06, 0x00, 0x1b, 
  0xfe, 0x00, 0x00, 0x00, 0x06, 0x00, 0x1f, 0xfe, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x1f, 0xff, 0x00, 
  0x00, 0x00, 0x1f, 0x00, 0x1f, 0xff, 0x80, 0x00, 0x00, 0x36, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x00, 
  0x02, 0x00, 0x1e, 0x0f, 0xd0, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x28, 
  0x07, 0xff, 0xfc, 0xc0, 0x00, 0x00, 0x0e, 0x0d, 0xff, 0xf7, 0x80, 0x00, 0x00, 0x07, 0xfb, 0xff, 
  0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xf9, 0xc0, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xef, 0x80, 
  0x00, 0x00, 0x00, 0x0f, 0xff, 0xfd, 0x00, 0x00, 0x10, 0x00, 0x1f, 0xff, 0xff, 0x00
};
