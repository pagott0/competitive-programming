#include <bits/stdc++.h>
using namespace std;

int n, m; 
const int MAXN = 1e3 + 5;
char v[MAXN][MAXN];
bool inimigo[MAXN][MAXN];

void isEnemyLookingLR(int i, int j, int dx){
    for(; j >= 0 && j < m; j += dx ){
        if(v[i][j] == '#'){
            break;
        }
        inimigo[i][j] = true;
    }

}

void isEnemyLookingUD(int i, int j, int dy){
    for(; i >= 0 && i < n; i += dy){
        if(v[i][j] == '#'){
            break;
        }
        inimigo[i][j] = true;
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
    //1 espaço vai ser possivel se: não estiver em nenhum campo de visão; for '.';

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(v[i][j] == 'U'){
                isEnemyLookingUD(i, j, -1);
            }
            else if(v[i][j] == 'D'){
                isEnemyLookingUD(i, j, 1);
            }
            else if(v[i][j] == 'R'){
                isEnemyLookingLR(i, j, 1);
            }
            else if(v[i][j] == 'L'){
                isEnemyLookingLR(i, j, -1);
            }
        }
    }

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
