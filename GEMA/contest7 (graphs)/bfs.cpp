#include <iostream>
#include <bits/stdc++.h>

using namespace std;


const int MAXN = 100010;

vector <int> v[MAXN];
bool visited[MAXN];


void bfs(int x) {
    queue<int> q;

    
    q.push(x);
    visited[x] = 1;

    while(!q.empty()) {
        int atual = q.front();
        cout << atual << '\n';
        q.pop();
        for(int i = 0; i < v[atual].size(); i++){
            int y = v[atual][i];

            if(visited[y] == 0) {
                q.push(y);
                visited[y] = 1;
            }
        }
    }
    
}



int main() {
       
    // A = 1, B = 2, C = 3, D = 4, E = 5, F = 6, G = 7, H = 8, I = 9
    v[1].push_back(2);
    v[1].push_back(3);
    v[2].push_back(4);
    v[2].push_back(5);
    v[2].push_back(6);
    v[3].push_back(7);
    v[6].push_back(8);
    v[7].push_back(9);
    bfs(1);
    
}
