//Solução do 'Expressões completinhas', pode ser adaptado pro original 'Balanced Brackets'

#include <bits/stdc++.h>
#include <stack>

using namespace std;

bool igual(char abre, char fecha){
    if (abre == '[') return fecha == ']';
    if (abre == '{') return fecha == '}';
    if (abre == '(') return fecha == ')';
    return false;
   }

int main(){
   int n; cin >> n;
   string s; cin >> s;

   stack<char> st;

   

   for(char c : s){
        if(c == '[' || c == '(' || c == '{'){
            st.push(c);
        }
        else {
            if(st.empty() || !igual(st.top(), c)){
                cout << "DEU RUIM" << endl;
                return 0;
            }
            else {
                st.pop();
            }
        }
   }
   if(st.empty()){
    cout << "COMPLETINHA" << endl;
   }
   else {
    cout << "DEU RUIM" << endl;
   }

}
