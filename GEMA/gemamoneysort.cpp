#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
    int n, maiordif;
    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v, v+n);



    maiordif = v[n-1] - v[0];
    cout << maiordif << "\n";

    


}