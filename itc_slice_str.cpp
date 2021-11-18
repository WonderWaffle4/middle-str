#include "middle_str.h"

string itc_slice_str(string str, int start, int last){
    string newstr = "";
    if(last > itc_len(str)) last = itc_len(str) - 1;
    for(int i = start; i <= last; i++) newstr += str[i];
    return newstr;
}
