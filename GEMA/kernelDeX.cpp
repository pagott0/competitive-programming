#include <iostream>

using namespace std;

int solve(int x, int n, int v[]){
    int l = 0;
    int r = n - 1;
    
    //retorna o indice do primeiro cara >= x
    while (l < r ) {
        int meio = (l + r) / 2;
        if(v[meio] >= x) {
            r = meio;
        }
        else {
            l = meio + 1;
        }
    }
    return l;

}


int main()
{
    int n, m, x; cin >> n >> m;
    int v[n];
    for(int i =0; i < n; i++){
        cin >> v[i];
    }
    for(int i =0; i < m; i++){
        int x;
        cin >> x;
        int id = solve(x, n, v);
        // v[id] >= x
        int id2 = id - 1; //ultimo cara menor do que x
        if(id2 >=0 && abs(v[id] - x) >= abs(v[id2] - x)){
            cout << v[id2] << '\n';
        }
        else {
            cout << v[id] << '\n';
        }
        
    }
}
