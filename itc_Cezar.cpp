#include "middle_str.h"

string itc_Cezar(string str, int k){
    string newstr;
    if(itc_abs(k) > 25) k -= (k / 25) * 25;
    if(k >= 0){
        for(long long i = 0; i <= itc_len(str); i++){
            if(str[i] >= 65 && str[i] <= 90){
                newstr += (str[i] + k - ((str[i] + k) / 90 * k));
            }
            if(str[i] >= 97 && str[i] <= 122){
                newstr += (str[i] + k - ((str[i] + k) / 122 * k));
            }
        }
    }
    else{
        for(long long i = 0; i <= itc_len(str); i++){
            if(str[i] >= 65 && str[i] <= 90){
                if(str[i] + k < 65)
                    newstr += str[i] + 26 + k;
                else newstr += str[i] + k;
            }
            if(str[i] >= 97 && str[i] <= 122){
                if(str[i] + k < 97)
                    newstr += str[i] + 26 + k;
                else newstr += str[i] + k;
            }
        }
    }
    return newstr;
}
