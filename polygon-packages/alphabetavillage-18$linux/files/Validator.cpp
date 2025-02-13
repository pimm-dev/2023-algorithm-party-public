#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv){
    registerValidation(argc, argv);
    
    int n = inf.readInt(1, 1000, "n");
    inf.readSpace();
    int m = inf.readInt(1, 1000, "m");
    inf.readEoln();
    ensuref(n >= m, "n < m");
    
    set<int> arr;
    set<int> frd;
    
    for(int i = 0; i<n; i++)
    {
        int a = inf.readInt(1, n, "out of range (arr)");
        ensuref(!arr.count(a), "duplication (arr)");
        arr.insert(a);
        if(i != n-1)
            inf.readSpace();
    }
    inf.readEoln();
    
    for(int i = 0; i<m; i++)
    {
        int a = inf.readInt(1, n, "out of range (frd)");
        ensuref(!frd.count(a), "duplication (frd)");
        frd.insert(a);
        if(i != m-1)
            inf.readSpace();
    }
    inf.readEoln();
    inf.readEof();
    
    return 0;
}
