#include "middle_str.h"

unsigned char itc_toUpper(unsigned char c){
    if(c >= 97 && c <= 122) return c - 32;
    return c;
}
