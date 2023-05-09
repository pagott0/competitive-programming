#include <bits/stdc++.h>

using namespace std;


int main(){
    int cont = 0;
    bool unico = true;
    string sequence;
    getline(cin, sequence);
    for(int i = 1; i < sequence.size() - 1; i++){
        if(sequence[i] != ',' && sequence[i] != ' '){
            for(int j = 1; j < i; j++){
            if(sequence[i] == sequence[j] && i != j){
                unico = false;
            }
            
        }
            if(unico == true){
                    cont++;
                }
            unico = true;

        }
        
    }
    cout << cont << endl;



}
