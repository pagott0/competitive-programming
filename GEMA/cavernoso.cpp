#include <iostream>
using namespace std;


int main () {
    int n; cin >> n;
    int freq[1005] = {0};
    int maiorValor = 0;
    string wall_painting [n];

    for(int i = 0;i < n ; i++){
        cin >> wall_painting[i];
        freq[wall_painting[i].size()]++; 
    }

    for(int i = 0;i < 1005 ; i++){
        if(freq[i] > freq[maiorValor]){
            maiorValor = i;
        }
    }
    
    cout << maiorValor << endl;
   
}
