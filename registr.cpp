#include "middle_str.h"

unsigned char itc_changeCase(unsigned char c){
    if(c >= 97 && c <= 122) return c - 32;
    if(c >= 65 && c <= 90) return c + 32;
    return c;
}
