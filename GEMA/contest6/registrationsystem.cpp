#include <bits/stdc++.h>
using namespace std;

map <string, int> names;




int main () {
    int n;
    string uname, newname;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> uname;
        if(names.count(uname) == 0) {
            names.insert({uname, 1});
            cout << "OK" << endl;
        }
        else {
            cout << uname + to_string(names[uname]) << endl;
            names[uname]++;
        }

    }
}
