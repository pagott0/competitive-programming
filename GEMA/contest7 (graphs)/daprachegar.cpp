#include <bits/stdc++.h>
#include <iostream>

using namespace std;

const int MAXN = 100010;

vector<int> adj[MAXN]; 
bool visited[MAXN];

void dfs(int u) {
    visited[u] = true;
    
    for(int i =0; i < adj[u].size(); i++){
        int v = adj[u][i];
        if(visited[v] == false){
            dfs(v);
        }
        
    }
}

int main()
{   
    bool ans = false;
    int n, m, A, B;
    cin >> n >> m >> A >> B;
    
    for(int i = 0, a, b; i < m; i++){
        cin >> a >> b;
        adj[a].push_back(b);
    }
    dfs(A);
    for(int i = 0; i < adj[A].size(); i++){
        if(adj[A][i] == B){
            ans = true;
        }
    }
    cout << (visited[B] ? "SIM" : "NAO") << endl;
    return 0;
}
