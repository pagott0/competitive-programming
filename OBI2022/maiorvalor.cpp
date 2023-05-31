#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int somadorDigitos(int x){
    int soma = 0;
    while(x > 0){
        soma += (x % 10);     //123 % 10 = 3, soma ele na soma total
        x /= 10;   //divide x por 10 para diminuir uma casa decimal, por ex: 123 / 10 = 12 (int), o 3 foi pego no 123 % 10 acima
    }
    x = soma;
    return soma;

}



int main () {
   int n, m, s;
   cin >> n >> m >> s;
    int resposta = -1; //começa em -1 pq é o retorno que temos que dar caso não tenha resposta

   for(int i = m; i >= n; i--){
    if(somadorDigitos(i) == s){
        resposta = i;
        break;
    }

   }
   cout << resposta << endl;
}
    
