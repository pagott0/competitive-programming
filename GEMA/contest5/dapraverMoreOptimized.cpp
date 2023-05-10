// More optimized version of the 'Da pra ver' problem solution, this one is O(N^2), while the another one is O(N^3)

#include <bits/stdc++.h>
using namespace std;

int n, m; 
const int MAXN = 1e3 + 5;
char v[MAXN][MAXN];
bool inimigo[MAXN][MAXN];

void filldown(){
    for(int j = 0; j < m; j++){
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(v[i][j] == '#'){
                flag = false;
            }
            else if (v[i][j] == 'D'){
                flag = true;
            }
            inimigo[i][j] |= flag; // se o inimigo(i,j) for dado como verdadeiro em algum dos preenchimentos, nunca vai ser colocado como falso

        }
    }
}
void fillup(){
    for(int j = 0; j < m; j++){
        bool flag = false;
        for(int i = n-1; i >= 0; i--){
            if(v[i][j] == '#'){
                flag = false;
            }
            else if (v[i][j] == 'U'){
                flag = true;
            }
            inimigo[i][j] |= flag; // se o inimigo(i,j) for dado como verdadeiro em algum dos preenchimentos, nunca vai ser colocado como falso

        }
    }
}
void fillright(){
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < m; j++){
            if(v[i][j] == '#'){
                flag = false;
            }
            else if (v[i][j] == 'R'){
                flag = true;
            }
            inimigo[i][j] |= flag; // se o inimigo(i,j) for dado como verdadeiro em algum dos preenchimentos, nunca vai ser colocado como falso

        }
    }
}
void fillleft(){
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = m - 1; j >= 0; j--){
            if(v[i][j] == '#'){
                flag = false;
            }
            else if (v[i][j] == 'L'){
                flag = true;
            }
            inimigo[i][j] |= flag; // se o inimigo(i,j) for dado como verdadeiro em algum dos preenchimentos, nunca vai ser colocado como falso

        }
    }
    
}

int main(){
    cin >> n >> m;
    int sol = 0;
   

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }

    fillup();
    filldown();
    fillleft();
    fillright();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == '.' && inimigo[i][j] == false){
                sol++;
            }
        }
    }

    
    if(sol == 0){
        cout << "NO SOLUTION" << endl;
    }
    else if(sol == 1){
        cout << "ONLY ONE SOLUTION" << endl;
    }
    else {
        cout << "MULTIPLE SOLUTIONS" << endl;
    }
    

}
