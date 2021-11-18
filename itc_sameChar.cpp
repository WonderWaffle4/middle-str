#include "middle_str.h"

char itc_sameChar(string str){
    string letters = "";
    bool flag = false;
    long long count = 0;
    for(long long i = 0; i <= itc_len(str); i++){
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)){
            for(long long j = 0; j <= itc_len(letters) && !flag ; j++){
                if(str[i] == letters[j]) flag = true;
            }
            if(!flag) letters += str[i];
            flag = false;
        }
    }
    for(long long i = 0; i <= itc_len(letters); i++){
        for(long long j = 0; j <= itc_len(str); j++){
            if(letters[i] == str[j]) count++;
            if(count > 2) j = itc_len(str) + 1;
        }

        if(count == 2) return str[i];
        count = 0;
    }
    return 'a';
}
