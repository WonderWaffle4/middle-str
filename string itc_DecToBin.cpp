#include "middle_str.h"

string itc_DecToBin(string str){
    string newstr = "";
    string numstr = "";
    long long num = 0;
    for(long long i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            while(str[i] >= '0' && str[i] <= '9'){
                numstr += str[i];
                i++;
            }
            for(long long j = 0; numstr[j] != '\0'; j++){
                num += numstr[j] - 48;
                num *= 10;
            }
            num /= 10;
            num = itc_bin_num(num);
            newstr += itc_toString(num);
            num = 0;
            numstr = "";
        }
        newstr += str[i];
    }
    return newstr;
}
