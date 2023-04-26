#include <iostream>
using namespace std;
 
 
int main () {
    int n, m; cin >> n >> m;
    long long int v[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> v[i][j];
        }
    }
 
    for(int j = 0; j < m; j++){
        bool cond1, cond2, cond3;
        cond1 = cond2 = cond3 = true;
 
        for(int i = 1; i < n; i++){
            if(v[i][j] > v[i-1][j] && cond1 == true){
                cond1 = true;
            }
            else {
                cond1 = false;
            }
            if(v[i][j] < v[i-1][j] && cond2 == true){
                cond2 = true;
            }
            else {
                cond2 = false;
            }
            if(v[i][j] == v[i-1][j] && cond3 == true){
                cond3 = true;
            }
            else {
                cond3 = false;
            }
            
        }
        
        if(cond1 || cond2 || cond3 == true){
            cout << "S" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }
 
}
