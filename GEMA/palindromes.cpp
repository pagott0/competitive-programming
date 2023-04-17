#include <iostream>
using namespace std;


int main () {
    string s; cin >> s;
    bool ans = true;
    for(int i = 0, j = n-1; i < j; i++, j--){
        if(s[i] != s[j]){
            ans = false;
        }
        
    }
    cout << ans;
}
