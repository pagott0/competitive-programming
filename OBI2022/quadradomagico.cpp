#include <iostream>
#include <bits/stdc++.h>

using namespace std;




int main () {
    int cubo[12][12];
    int linha = 0, coluna = 0;
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++){
        cin >> cubo[i][j];
        if(!cubo[i][j]){
            linha = i;
            coluna = j;
        }
    }
   }
   int soma = 0;
    for(int i = 0; i < n; i++){
        
        soma += cubo[!linha][i];
    }
    for(int i = 0; i < n; i++){
        soma -= cubo[linha][i];
    }

    cout << soma << "\n" << linha + 1 << "\n" << coluna + 1 << endl;

}
    
