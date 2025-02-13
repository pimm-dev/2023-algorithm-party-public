#include "testlib.h"
#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
using namespace std;
int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);

    int p = stoi(argv[1]);

    int prev[101];
    int curr[101];
    memset(prev, 0, sizeof(prev));
    memset(curr, 0, sizeof(curr));
    
    long offset = 1;
    for (int i = 0; i < p; i++) {
        offset *= 10;
    }

    for (int i = 0; i < 50 * offset; i++)
    {
        prev[rnd.next(0, 99)] += 1;
    }

    for (int i = 0; i < 100; i++) {
        curr[i] = prev[i];
    }
    for (int i = 0; i < 50 * offset; i++)
    {
        curr[rnd.next(0, 99)] += 1;
    }

    cout << 100 << " " << p << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << prev[i] * 2;
        if (i != 99)
            cout << " ";
        else
            cout << endl;
    }

    for (int i = 0; i < 100; i++)
    {
        cout << curr[i];
        if (i != 99)
            cout << " ";
        else
            cout << endl;
    }

    return 0;
}
