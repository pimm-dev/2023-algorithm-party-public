#include "testlib.h"
#include "set"
#include "vector"
using namespace std;
vector<int> v[100001];
bool visit[100001];
bool err = false;
int Cnt = 0;
set<int>s;

void dfs(int node){
    visit[node] = 1;
    Cnt++;
    for(int i = 0;i<v[node].size();i++){
        if(visit[v[node][i]]){
            err = true;
        }else{
            dfs(v[node][i]);  
        }
    }
}
int main()
{
    registerValidation();
 
    int n = inf.readInt(2, 100000, "n");
    inf.readSpace();
    int m = inf.readInt(2, 100000, "m");
    inf.readEoln();
 
    s.insert(1);
    int temp1 = inf.readInt(-1, -1, "root");
    
    
    for (int i = 2; i <=n; i++)
    {
        s.insert(i);
        inf.readSpace();
        int parent = inf.readInt(0, n, "parent");
        v[parent].push_back(i);
        ensuref(i != parent, "i and parent must diff");
    }
    inf.readEoln();
    dfs(1);
    ensuref(!err && Cnt == n, "base graph is wrong");
    
    int temp2 = inf.readInt(0, 0, "rootFruit");
    
    for (int i = 2; i <=n; i++)
    {
        inf.readSpace();
        int fruit = inf.readInt(0, 500, "fruit");
    }
    inf.readEoln();
    
    int Cnt2 = 0;
    for (int i = 1; i <=m; i++)
    {
        int a = inf.readInt(1, 2, "type");
        inf.readSpace();
        if(a==1){
            int b = inf.readInt(1, n+m, "1 target");
            inf.readSpace();
        
            int c = inf.readInt(n+1, n+m, "node");
            inf.readSpace();
        
            int d = inf.readInt(0, 500, "weight");
            inf.readEoln();
            
            ensuref(s.find(b)!=s.end(), "not exist target");
            ensuref(s.find(c) == s.end(), "exist node");
            s.insert(c);
        }else{
            Cnt2++;
            int b = inf.readInt(1, n+m, "2 target");
            inf.readEoln();
            
            ensuref(s.find(b)!=s.end(), "not exist target");
            
        }
    }
    ensuref(Cnt2 > 0, "Query number 2 must appear.");
    inf.readEof();
    
    
    return 0;
}
