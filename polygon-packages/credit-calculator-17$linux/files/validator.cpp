#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    registerValidation(argc, argv);
    
    string s = inf.readString("[ABCDEF+]{1,1000}","invalid string");
    inf.readEof();
    
    ensuref(s[0] != '+', "start plus");
    for(int i = 1; i<s.size(); i++)
    {
        ensuref(!(s[i-1] == 'F' && s[i] == '+'),"F+ error");
        ensuref(!(s[i-1] == '+' && s[i] == '+'),"++ error");
    }
    return 0;
}
