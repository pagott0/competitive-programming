#include <bits/stdc++.h>
using namespace std;



int main() {
    int n, k;
    cin >> n >> k;
    int blocos = (n-1) / 4;
    int resto = (n-1) % 4;
    int resposta = 0;
    if (k == 1){
        resposta = 1;
    }
    else if (k == 2){
        resposta = blocos;
        if(resto >= 1){
            resposta++;
        }

    }
    else if(k == 4){
        resposta = blocos;
        if(resto >= 2){
            resposta++;
        }

    }
    else if (k == 8){
        resposta = blocos;
        if(resto >= 3){
            resposta++;
        }

    }
    else if(k == 6){
        resposta = blocos;

    }
    else {
        resposta = 0;
    }
    
    cout << resposta << endl;


}
