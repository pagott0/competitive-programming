#include <bits/stdc++.h>
using namespace std;
 
 
int solve (int n, int m) {
    if (n == 0) {
        return 1;
    }
    int ans = 0;
    for(int j = 1; j <= n; j++) {
        if( j % m == 0) {
            ans += solve(n - j, j);
        }
    }
    return ans;
 
}
 
 
 
int main () {
    int n;
    cin >> n;
    cout << solve(n, 1) << endl;
}
