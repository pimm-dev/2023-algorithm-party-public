#include "testlib.h"
#include <iostream>
#include <set>
using namespace std;
vector<int> s,ns;
vector<int> v[100001];
int index[100001];
int tempParent[100001];
void dfs(int node){
    for(int i = 0;i<v[node].size();i++){
        tempParent[index[v[node][i]]] = index[node];
        dfs(v[node][i]);
    }
}
int main(int argc, char* argv[])
{
    registerGen(argc, argv, 1);
 
    int n = 100000;
    int m = 100000;
    cout << n << " " << m <<endl;
    //1
    
    cout<<"-1";
    for(int i=2;i<=n;i++)
    {
        cout<<" "<<i-1;
    }
    cout<<endl;
    //2
    
    cout<<"0";
    for(int i=2;i<=n;i++)
    {
        cout<<" "<<atoi(argv[2]);
    }
    cout<<endl;
    //3
    int target = 100000 - atoi(argv[1]);
    for(int i = 1;i<= target ;i++){
    
       int target = n+i-1;
       int node = n+i;
       int w = atoi(argv[2]);
       cout<<1<<" "<<target<<" "<<node<<" "<<w<<endl;

    }
    
    for(int i = target+1;i<= m ;i++){
    
       cout<<2<<" "<<1<<endl;

    }
    
    
    return 0;
}
