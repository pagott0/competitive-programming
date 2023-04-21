#include <iostream>
using namespace std;

int main(){
    int n, m;
    int position[2];
    cin >> n >> m;

    int matriz[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
            if(matriz[i][j] == 0){
                position[0] = i;
                position[1] = j;
            }

        }
    }
    cout << position[0]<< ' ' << position[1];
}
