#include "middle_str.h"

string itc_maxCharWord(string str){
    string longest;
    string buffer = "";
    bool onWord = false;
    if(itc_countWords(str) > 1){
    for(long long i = 0; i <= itc_len(str); i++){
        if(str[i] == ' ') onWord = false;
        if(str[i] != ' ' && ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))) onWord = true;
        if(!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) && onWord == true){
            while(str[i] != ' ' && str[i] != '\0'){
                i++;
            }
            onWord = false;
            longest = "";
        }
        if((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) longest += str[i];
        if((str[i + 1] == ' ' || str[i + 1] == '\0') && onWord == true){
            if(itc_len(longest) > itc_len(buffer)) buffer = longest;
            longest = "";
        }

    }
    return buffer;
    }
    return "error";
}
