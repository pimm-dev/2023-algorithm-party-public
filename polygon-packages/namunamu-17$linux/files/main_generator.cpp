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
 
    int n = atoi(argv[1]);
    int m = atoi(argv[2]);
    cout << n << " " << m <<endl;
    //1
    for(int i = 1;i<=m;i++){
        ns.push_back(i+n);
    }
    
    s.push_back(1);
    for(int i = 2;i<=n;i++){
        s.push_back(i);
        index[i] = i;
        int parent = rnd.next(1,i-1);
        v[parent].push_back(i);
    }
    index[1] = 1;
    shuffle(index + 2,index + n+1);
    dfs(1);
    
    cout<<"-1";
    for(int i=2;i<=n;i++)
    {
        cout<<" "<<tempParent[i];
    }
    cout<<endl;
    //2
    
    cout<<"0";
    for(int i=2;i<=n;i++)
    {
        int temp = rnd.next(0,600);
        if(temp>500) temp = 0;
        cout<<" "<<temp;
    }
    cout<<endl;
    //3
    
    shuffle(ns.begin(),ns.end());
    
    vector<int> q;
    q.push_back(2);
    for(int i = 2;i<=m;i++){
        q.push_back(rnd.next(1,2));
    }
    shuffle(q.begin(),q.end());
    
    for(int i = 0;i< m;i++){
       if(q[i] == 1){
           int target = rnd.any(s);
           int node = ns[ns.size()-1];
           int w = rnd.next(0,600);
           if(w>500) w = 0;
           cout<<q[i]<<" "<<target<<" "<<node<<" "<<w<<endl;
           s.push_back(node);
           ns.pop_back();
       }else{
           int target = rnd.any(s);
           cout<<q[i]<<" "<<target<<endl;
       }
    }
    
    
    return 0;
}
