#include "middle_str.h"

string itc_decToBase(int num, int base){
    string newstr = "";
    string answer = "";
    while(num > 0){
        if(num % base >= 10){
             newstr += (num % base) % 10 + 65;
        }
        else newstr += (num % base) + 48;
        num /= base;
    }
    for(long long i = itc_len(newstr) - 1; i >= 0; i--){
        answer += newstr[i];
    }
    return answer;
}
