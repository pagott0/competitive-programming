//This file contains the fibonacci solution using DP, both in memoization and tabulation way, both have a complexity of O(N)
//Memoization method

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int MAXN = 100010;


int fibonacci(int n, int vetor[]){
        if (vetor[n] != -1){
            return vetor[n];
        }
        
        if(n == 0 || n == 1){
            return 1;
        }
        else {
            vetor[n] = fibonacci(n-1, vetor) + fibonacci(n-2, vetor);
            return fibonacci(n-1, vetor) + fibonacci(n-2, vetor);
        }
    }


int main()
{
    vector<int> dp(MAXN, -1);
    
    
   
    
    cout << fibonacci(5, dp.data()) << endl;
    
    
    
    
   return 0;
}


//Tabulation method



#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int MAXN = 100010;


int fibonacci(int n){
    int v[n];
    v[0] = 0;
    v[1] = v[2] = 1;
    
    for(int i = 3; i < n+1; i++){
        v[i] = v[i-1] + v[i-2];
    }
    return v[n];
    
    // 0 1 1 2 3 5 8 13
    
    
}


int main()
{

    cout << fibonacci(18) << endl;
    
   return 0;
}
