#include "middle_str.h"

int itc_len(string str){
    long long kol = 0;
    for(long long i = 0; str[i] != '\0'; i++){
        kol++;
    }
    return kol;
}
