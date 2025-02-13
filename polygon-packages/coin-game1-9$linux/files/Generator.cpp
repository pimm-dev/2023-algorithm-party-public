#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char* argv[]){
	registerGen(argc, argv, 1);
	
	int index = stoi(argv[1]);
	
	for(int i = 0; i<30; i++)
	{
	    startTest(index+i);
    	int n = rnd.next(1,1000);
        int m = rnd.next(1,1000);
        int k = rnd.next(0,2000);
        while(n == m)
        {
            n = rnd.next(1,1000);
            m = rnd.next(1,1000);
        }
    	cout << n << " " << m << " " << k << endl;
	}
	
	for(int i = 30; i<50; i++)
	{
	    startTest(index+i);
    	int n = rnd.next(1,1000);
        int m = n;
        int k = rnd.next(0,2000);
    	cout << n << " " << m << " " << k << endl;
	}
    return 0;
}
