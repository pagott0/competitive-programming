#include <bits/stdc++.h>

using namespace std;


int main(){
    map<string, int> votos; //mapa de key: dia e value: qntd de votos
    set<string> votantes;
    int maior = 0;
    string diamaior;

    int n; cin >> n;
    for(int i = 0; i < n; i++){
        string pessoa, dia;
        cin >> pessoa >> dia;
        if(votantes.count(pessoa) == 0){
            votos[dia]++;
            votantes.insert(pessoa);
        }
        
    }
    for(auto s : votos){
        if(s.second > maior){
            diamaior = s.first;
        }
        else {
            diamaior = "empate";
        }
    }
    cout << diamaior << endl;
    /*    if(votos["quarta"] > votos["sexta"]){
            cout << "quarta" << '\n';
        }
        else if(votos["quarta"] < votos["sexta"]){
            cout << "sexta" << '\n';
        }
        else {
            cout << "empate" << '\n';
        }*/
}