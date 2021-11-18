#include "middle_str.h"

string itc_rmFreeSpace(string str){
    if(itc_len(str) == 0) return "";
    string newstr = "";
    string answ = "";
    bool wasOnSpace = false;
    bool flag = false;
    for(long long i = 0; i <= itc_len(str); i++){
        if(str[0] == ' ' && !flag){
            while(str[i] == ' '){
                i++;
            }
            flag = true;
        }
        if(str[i] == ' ' && !wasOnSpace) {
            wasOnSpace = true;
            newstr += ' ';
        }
        if(wasOnSpace && str[i] != ' ') wasOnSpace = false;
        if(!wasOnSpace) newstr += str[i];
    }
    if(newstr[itc_len(newstr) - 1] == ' '){
        for(long long i = 0; i < itc_len(newstr) - 1; i++) answ += newstr[i];
    }
    else answ = newstr;
    return answ;
}
