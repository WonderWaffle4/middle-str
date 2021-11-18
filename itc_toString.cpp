#include "middle_str.h"

string itc_toString(long long num){
    string newstr = "";
    string answ = "";
    if(num == 0) return "0";
    while(num > 0){
        newstr += num % 10 + 48;
        num /= 10;
    }
    for(long long i = itc_len(newstr) - 1; i >=0; i--){
        answ += newstr[i];
    }
    return answ;
}
