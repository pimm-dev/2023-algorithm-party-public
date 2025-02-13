#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
 
int n,p;
 
void div(vector<int> & res, int mx)
{
    int pre = 0;
    res.clear();
    vector<int> googan;
    for(int i = 0; i<n-1; i++)
	{
	    googan.push_back(rnd.next(0,mx));
	}
	googan.push_back(mx);
    sort(googan.begin(),googan.end());
    pre = 0;
    for(int i = 0; i<n; i++)
    {
        res.push_back(googan[i]-pre);
        pre = googan[i];
    }
}
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	
	int MaxN = stoi(argv[1]);
	n = rnd.next(2,MaxN);
	p = stoi(argv[2]);
	
	cout << n << " " << p << endl;
	
	int mx = 100*(int)pow(10,p);
	
	vector<int> a;
	vector<int> b;
	while(true)
	{
	    div(a,mx);
	    div(b,mx);
	    bool isTrue = true;
	    
	    for(int i = 0; i<n; i++)
	    {
	        if(a[i] != 0 && b[i] == 0)
	            isTrue = false;
	    }
	    if(isTrue)
	        break;
	}
    cout << a[0];
	for(int i = 1; i<n; i++)
	{
	    cout << " " << a[i];
	}
	cout << endl << b[0];
	for(int i = 1; i<n; i++)
	{
	    cout << " " << b[i];
	}
	cout << endl;
    return 0;
}
