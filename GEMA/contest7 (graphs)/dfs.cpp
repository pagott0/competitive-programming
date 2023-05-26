#include <bits/stdc++.h>

using namespace std;

const int MAXN = 100010;
vector<int> adj[MAXN];
bool visited[MAXN];

void dfs(int x) {
    //already visited nodes are marked as true in the visited array
    if(visited[x]) return;
    cout<< x << endl; //Prints first node
    visited[x] = 1;

    for(int i = 0; i < adj[x].size(); i++){
        int atual = adj[x][i];

        if(visited[atual] == 0){
            dfs(atual);
            cout<< x << endl; //Prints current node
        }
    }


}


int main () {
    // A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8, I = 9
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(5);
    adj[2].push_back(6);
    adj[3].push_back(7);
    adj[6].push_back(8);
    adj[7].push_back(9); 

    
    dfs(1);
}
