//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; int m; cin >> s >> m;
   int n = s.size();
   string ans;
   int rem = 0;
   for(int i = 0; i < n; i++) {
     rem = (rem * 10 + (s[i] - '0')) % m;
     //cout << rem << endl;
     if(rem == 0) ans.push_back('1');
     else ans.push_back('0');
   }
   cout << ans << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}