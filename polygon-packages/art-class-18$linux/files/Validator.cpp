#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv){
    registerValidation(argc, argv);
    
    int N = inf.readInt(1, 100'000, "N");
    inf.readSpace();
    int Q = inf.readInt(1, 100'000, "Q");
    inf.readEoln();
    
    for (int i=0; i<Q; i++) {
        int a = inf.readInt(1, N, "a");
        inf.readSpace();
        int b = inf.readInt(a, N, "b");
        inf.readSpace();
        int x = inf.readInt(1, 1'000'000'000, "x");
        inf.readEoln();
    }
    
    inf.readEof();
    
    return 0;
}
