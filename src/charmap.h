#ifndef FANPIP
#define FANPIP

const byte CHAR_A       = B01110111;
const byte CHAR_B       = B00011111;
const byte CHAR_C       = B01001110;
const byte CHAR_D       = B00111101;
const byte CHAR_E       = B01001111;
const byte CHAR_F       = B01000111;
const byte CHAR_G       = B01011110;
const byte CHAR_g       = B01111011;
const byte CHAR_H       = B00110111;
const byte CHAR_I       = B00000110;
const byte CHAR_i       = B00000100;
const byte CHAR_J       = B00111100;
const byte CHAR_K       = B00110111;
const byte CHAR_L       = B00001110;
const byte CHAR_LL      = B00110110;
const byte CHAR_l       = B00110000;
// M = No M
const byte CHAR_N       = B00010101;
const byte CHAR_O       = B01111110;
const byte CHAR_o       = B00011101;
const byte CHAR_P       = B01100111;
// Q = No Q
const byte CHAR_R       = B00000101;
const byte CHAR_S       = B01011011;
const byte CHAR_T       = B00001111;
const byte CHAR_U       = B00011100;
// V = No V
// W = No W
// X = No X
const byte CHAR_Y       = B00111011;
// Z
const byte CHAR_EXL     = B10110000;
const byte CHAR_DOT     = B10000000;
const byte CHAR_DASH    = B00000001;
const byte CHAR_BLANK   = B00000000;

byte getByteByChar(char c)
{
    byte b;
    switch (c) {
        case 'A':
        case 'a':
          b = CHAR_A;
          break;
        case 'B':
        case 'b':
          b = CHAR_B;
          break;
        case 'C':
        case 'c':
          b = CHAR_C;
          break;
        case 'D':
        case 'd':
          b = CHAR_D;
          break;
        case 'E':
        case 'e':
          b = CHAR_E;
          break;
        case 'F':
        case 'f':
          b = CHAR_F;
          break;
        case 'G':
        case 'g':
          b = CHAR_G;
          break;
        case 'H':
        case 'h':
          b = CHAR_H;
          break;
        case 'I':
        case 'i':
          b = CHAR_I;
          break;
        case 'J':
        case 'j':
          b = CHAR_J;
          break;
        case 'L':
        case 'l':
          b = CHAR_L;
          break;
        case 'N':
        case 'n':
          b = CHAR_N;
          break;
        case 'O':
        case 'o':
          b = CHAR_O;
          break;
        case 'P':
        case 'p':
          b = CHAR_P;
          break;
        case 'R':
        case 'r':
          b = CHAR_R;
          break;
        case 'S':
        case 's':
        case '5':
          b = CHAR_S;
          break;
        case 'T':
        case 't':
          b = CHAR_T;
          break;
        case 'U':
        case 'u':
          b = CHAR_U;
          break;
        case 'Y':
        case 'y':
          b = CHAR_Y;
          break;
        case '.':
          b = CHAR_DOT;
          break;
        case ' ':
        default:
          b = CHAR_BLANK;
          break;
      }

      return b;
}

#endif
