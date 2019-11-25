#include "rle_string.h"

RLE_run::RLE_run(char _ch, int _len){
    ch = _ch;
    len = _len;
}

string RLE_run::print(){
    stringstream ss;
    ss << "(" << ch << ", " << len << ")";
    return ss.str();
}

vector<RLE_run> RLE_string_helper::get_rle_string(string str){
    vector<RLE_run> rle_str;
    if(str.length() > 0){
        char ch = str[0];
        int count = 1;
        for(int i = 1; i < str.length(); i++){
            if(str[i] != ch){
                RLE_run run(ch, count);
                rle_str.push_back(run);
                ch = str[i];
                count = 1;
            }
            else{
                count ++;
            }
        }
        RLE_run run(ch, count);
        rle_str.push_back(run); 
    }
    return rle_str;
}

string RLE_string_helper::print(vector<RLE_run> rle_str){
    string str;
    for(vector<RLE_run>::iterator it = rle_str.begin(); it != rle_str.end(); ++it){
        str += it->print();
    }
    return str;
}