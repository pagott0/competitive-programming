#include <iostream>
#include <vector>
#include <algorithm>  
#include <map>
using namespace std;


int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }
   map<int, int> mp;
   bool conditionSatisfied = false;
    for(int i = 0; i < n; i++) {
      mp[a[i]]++;
      if(mp[0] >= 3 && mp[1] >= 1 && mp[2] >= 2 && mp[3] >= 1 && mp[5] >= 1) {
        cout << i + 1 << endl;
        conditionSatisfied = true;
        break;
      }
    }
    if(!conditionSatisfied) {
      cout << 0 << endl;
    }
    
  }
}

