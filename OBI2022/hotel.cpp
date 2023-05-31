#include <iostream>
#include <bits/stdc++.h>

using namespace std;



int main () {
   int d, a, n;
   cin >> d >> a >> n;
   if(n > 15) {
    cout << (31 - n + 1) * (d + 14 * a);
   }
   else { 
        cout << (31 - n + 1) * (d + ((n - 1) * a));
   }
}
    
