//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9 + 7;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   int ab = count(s.begin(), s.end(), 'A');
   int late = 0, cnt = 0;
   for(int i = 0; i < s.size(); i++) {
      if(s[i] == 'L') {
         cnt++;
         late = max(late, cnt);
      }
      else {
         cnt = 0;
      }
   }
   //cout << ab << " " << late << endl;
   if(ab < 2 and late < 3 ) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}




