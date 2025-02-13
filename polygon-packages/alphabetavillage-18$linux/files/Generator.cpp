#include "testlib.h"
#include <bits/stdc++.h>
#define all(x) x.begin(),x.end()
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	
	int maxN = stoi(argv[1]);
	
	int n = rnd.next(1,maxN);
    int m = rnd.next(1,n);
    
    vector<int> a;
    vector<int> b;
    for(int i = 1; i<=n; i++)
    {
        a.push_back(i);
        b.push_back(i);
    }
    shuffle(all(a));
    shuffle(all(b));
    
    cout << n << " " << m << "\n";
    
    cout << a[0];
    for(int i = 1; i<n; i++)
        cout << " " << a[i];
    cout << "\n";
    
    cout << b[0];
    for(int i = 1; i<m; i++)
        cout << " " << b[i];
    cout << "\n";
    	
    return 0;
}
