#include "middle_str.h"

bool itc_isIp(string str){
    string newstr;
    long long num = 0;
    int ipCount = 0;
    for(long long j = 0; j < itc_len(str); j++){
        if(str[j] == '.') return false;
        if(str[j] >= '0' && str[j] <= '9'){
            while(str[j] != '.' && str[j] != '\0'){
                if(!(str[j] >= '0' && str[j] <= '9')) return false;
                newstr += str[j];
                j++;
            }
            if(itc_len(newstr) > 3) return false;
            for(int i = 0; i < itc_len(newstr); i++){
                num += newstr[i] - 48;
                num *= 10;
            }
            num /= 10;
            if(num > 255) return false;
            num = 0;
            newstr = "";
            ipCount++;
        }
        else return false;
        if(ipCount == 4 && j != itc_len(str)) return false;
    }
    if(ipCount < 4) return false;
    return true;
}
