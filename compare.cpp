#include "middle_str.h"

bool itc_compare(string S1, string S2){
    if(itc_len(S1) == itc_len(S2)){
        for(long long i = 0; i < itc_len(S1); i++){
            if(S1[i] != S2[i]) return false;
        }
        return true;
    }
    return false;
}
