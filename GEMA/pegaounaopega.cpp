#include <bits/stdc++.h>
using namespace std;
 
int n, x;
int a[22];
 
 
int solvePG(int i, int cur_sum){
    if( i == n) {
        if(cur_sum == x) return 1;
        return 0;
    }
 
    int ans = 0;
    // pega
    ans += solvePG(i+1, cur_sum + a[i]);
 
    // nao pega
    ans += solvePG(i+1, cur_sum);
 
    return ans;
}
 
 
int main () {
    cin >> n >> x;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
 
    cout << solvePG(0, 0);
}
