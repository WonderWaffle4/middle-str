#include "middle_str.h"

int itc_countWords(string str){
    int words = 0;
    bool onWord = false;
    for(long long i = 0; i < itc_len(str); i++){
        if(str[i] == ' ') onWord = false;
        if(str[i] != ' ' && ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))) onWord = true;
        if(!((str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122)) && onWord == true){
            while(str[i] != ' ' && str[i] != '\0'){
                i++;
            }
            onWord = false;
        }
        if((str[i + 1] == ' ' || str[i + 1] == '\0') && onWord == true){
            words++;
        }
    }
    return words;
}
