#ifndef BITMAPS_H //If the bitmap header hasn't already been defined
#define	BITMAPS_H //Define the bitmap header. This is done so that a single header file
                  //isn't included more than once

//The dino jump bitmap
const unsigned char dinoJumpUp[] = {0x00, 0x0f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x19, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1e, 0x5c, 
                                    0x00, 0x1e, 0x0c, 
                                    0x00, 0x1f, 0xf8, 
                                    0x00, 0x3f, 0x80, 
                                    0x00, 0xbf, 0x00, 
                                    0x83, 0xff, 0x80, 
                                    0x87, 0xff, 0x60, 
                                    0xcf, 0xff, 0xc0, 
                                    0xff, 0xff, 0x00, 
                                    0xff, 0xff, 0x80, 
                                    0xff, 0xff, 0x00, 
                                    0x7f, 0xff, 0x00, 
                                    0x7f, 0xfe, 0x00, 
                                    0x3f, 0xff, 0x00, 
                                    0x0f, 0xfc, 0x00, 
                                    0x07, 0xf8, 0x80, 
                                    0x7f, 0xbf, 0xc0, 
                                    0x55, 0x09, 0x00};

//The dino run 1 bitmap
const unsigned char dinoRunOne[] = {0x00, 0x0f, 0xf8, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1b, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0x80, 
                                    0x00, 0x1f, 0xf0, 
                                    0x80, 0x3f, 0x00, 
                                    0x80, 0xff, 0x00, 
                                    0xc3, 0xff, 0x00, 
                                    0xe7, 0xff, 0xc0, 
                                    0xff, 0xff, 0x40, 
                                    0xff, 0xff, 0x00, 
                                    0x7f, 0xff, 0x00, 
                                    0x3f, 0xfe, 0x00, 
                                    0x1f, 0xfe, 0x00, 
                                    0x0f, 0xfc, 0x00, 
                                    0x07, 0xf8, 0x00, 
                                    0x03, 0xb0, 0x00, 
                                    0x03, 0x18, 0x00, 
                                    0x02, 0x00, 0x00, 
                                    0x02, 0x00, 0x00, 
                                    0x03, 0x00, 0x00};

//The dino run 2 bitmap
const unsigned char dinoRunTwo[] = {0x00, 0x0f, 0xf8, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1b, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0xfc, 
                                    0x00, 0x1f, 0x80, 
                                    0x00, 0x1f, 0xf0, 
                                    0x80, 0x3f, 0x00, 
                                    0x80, 0xff, 0x00, 
                                    0xc3, 0xff, 0x00, 
                                    0xe7, 0xff, 0xc0, 
                                    0xff, 0xff, 0x40, 
                                    0xff, 0xff, 0x00, 
                                    0x7f, 0xff, 0x00, 
                                    0x3f, 0xfe, 0x00, 
                                    0x1f, 0xfe, 0x00, 
                                    0x0f, 0xfc, 0x00, 
                                    0x07, 0xf8, 0x00, 
                                    0x03, 0xb0, 0x00, 
                                    0x02, 0x10, 0x00, 
                                    0x03, 0x10, 0x00, 
                                    0x00, 0x10, 0x00, 
                                    0x00, 0x18, 0x00};

//The small cactus bitmap
const unsigned char obsTypeZer[] = {0x08, 0x00, 
                                    0x1e, 0x00, 
                                    0x1c, 0x00, 
                                    0x1e, 0x00, 
                                    0x1c, 0x80, 
                                    0x1c, 0xc0, 
                                    0xce, 0xc0, 
                                    0x9c, 0xc0, 
                                    0xde, 0xc0, 
                                    0x9c, 0xc0, 
                                    0xdf, 0x80, 
                                    0x8e, 0x00, 
                                    0xdc, 0x00, 
                                    0x7e, 0x00, 
                                    0x1c, 0x00, 
                                    0x1c, 0x00, 
                                    0x1e, 0x00, 
                                    0x1c, 0x00, 
                                    0x1c, 0x00, 
                                    0x0e, 0x00};

//The large cactus bitmap
const unsigned char obsTypeOne[] = {0x03, 0xc0, 
                                    0x07, 0xc0, 
                                    0x07, 0xe0, 
                                    0x07, 0xc0, 
                                    0x07, 0xe0, 
                                    0x07, 0xc0, 
                                    0x47, 0xe0, 
                                    0xe7, 0xc0, 
                                    0xef, 0xe0, 
                                    0xe7, 0xce, 
                                    0xe7, 0xee, 
                                    0xe7, 0xce, 
                                    0xe7, 0xee, 
                                    0xef, 0xce, 
                                    0xe7, 0xee, 
                                    0xe7, 0xce, 
                                    0xe7, 0xee, 
                                    0xe7, 0xce, 
                                    0xef, 0xfe, 
                                    0xe7, 0xfc, 
                                    0xff, 0xe8, 
                                    0x7f, 0xc0, 
                                    0x3f, 0xe0, 
                                    0x07, 0xc0, 
                                    0x07, 0xe0, 
                                    0x07, 0xc0, 
                                    0x07, 0xe0, 
                                    0x07, 0xc0, 
                                    0x07, 0xe0, 
                                    0x07, 0xc0};

//The multi cactus bitmap
const unsigned char obsTypeTwo[] = {0x20, 0x00, 0x20, 0x60, 
                                    0x30, 0x00, 0x30, 0x64, 
                                    0x36, 0x01, 0xb3, 0x74, 
                                    0x34, 0x01, 0x72, 0x64, 
                                    0xb4, 0xc1, 0x36, 0x74, 
                                    0xb4, 0xe1, 0xb5, 0x64, 
                                    0xb6, 0xe1, 0x76, 0x74, 
                                    0xb4, 0xe1, 0xb6, 0x64, 
                                    0xbc, 0xed, 0x66, 0x74, 
                                    0xb0, 0xed, 0x37, 0x6c, 
                                    0xb4, 0xcd, 0xb5, 0xf8, 
                                    0xb4, 0xed, 0xb4, 0x70, 
                                    0xb4, 0xed, 0xf4, 0x60, 
                                    0xf4, 0xfc, 0x74, 0x70, 
                                    0x36, 0xf8, 0x3c, 0x60, 
                                    0x37, 0xe0, 0x30, 0x60, 
                                    0x33, 0xe0, 0x70, 0x70, 
                                    0x30, 0xe0, 0x30, 0x60, 
                                    0x30, 0xc0, 0x60, 0x60, 
                                    0x30, 0xe0, 0x30, 0x70};

#endif //End define