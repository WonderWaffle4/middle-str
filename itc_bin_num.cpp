#include "middle_str.h"

long long itc_bin_num(long long number){
    long long binnum = 0;
    long long kol = 0;
    while(number > 0){
        binnum += number % 2 * itc_pow(10, kol);
        number /= 2;

        kol++;
    }
    return binnum;
}
