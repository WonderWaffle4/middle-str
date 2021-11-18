#include "middle_str.h"

double itc_pow (long long n, long long i)
{
    long long num = n;
    if (i == 0){
        n = 1;
        return n;
    }
    else{
        for (long long pow = 1; pow < itc_abs(i); pow++){
            n = n * num;
        }
        if(i > 0) return n;
        return 1.00 / n;
    }
}
