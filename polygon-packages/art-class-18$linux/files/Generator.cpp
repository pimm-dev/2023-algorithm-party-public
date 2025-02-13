#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
    
    int N = atoi(argv[1]);
    int Q = atoi(argv[2]);
    
    int max_dif = atoi(argv[3]);
    
    cout << N << ' ' << Q << endl;
    
    for (int i=0; i<Q; i++) {
        int dif = rnd.next(0,max_dif);
        int a = rnd.next(1,N-dif);
        int b = a+dif;
        int x = rnd.next(1,1'000'000'000);
        cout << a << ' ' << b << ' ' << x << endl;
    }
}
