#include <bits/stdc++.h>

using namespace std;


int main(){
    vector<int> andares;
    int n, h;
    int totalsum = 0;
    cin >> n >> h;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        andares.push_back(temp);
    }
    for(int i = 0; i < andares.size() - 1; i++){
        totalsum += abs(andares[i + 1] - andares[i]);
    }
    cout << totalsum*4 << endl;

}
