#include "middle_str.h"

bool itc_isFirstInSecond(string s1, string s2){
    for(int i = 0; itc_len(itc_slice_str(s2, i, i + itc_len(s1) - 1)) == itc_len(s1); i++){
        if(itc_slice_str(s2, i, i + itc_len(s1) - 1) == s1) return true;
    }
    return false;
}
