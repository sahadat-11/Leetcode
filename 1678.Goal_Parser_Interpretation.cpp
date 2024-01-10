//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   string ans;
   for(int i = 0; i < s.size();) {
      if(s[i] == '(' and s[i + 1] == 'a') {
         ans.push_back('a');
         ans.push_back('l');
         i += 3;
      }
      if(s[i] == '(' and s[i + 1] == 'G') {
         ans.push_back('G');
         i += 2;
      }
      else if(s[i] == '(' and s[i + 1] == ')') {
         ans.push_back('o');
         i += 2;
      }
      else if(s[i] != ')') {
         ans.push_back(s[i]);
         i++;
      }
      else if(s[i] == ')'){
         i++;
      }
   }
   cout << ans << "\n";
   return 0;
}


