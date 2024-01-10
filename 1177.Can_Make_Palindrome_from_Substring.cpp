//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int pre[N][26];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int t = 1; 
  //cin >> t;
  while(t--) {
    string s; cin >> s;
    s = '#' + s;
    //cout << s << endl;
    for(int i = 1; i <= s.size(); i++) {
      for(int j = 0; j < 26; j++) {
        if((s[i] - 'a' == j)) {
          pre[i][j] = pre[i - 1][j] + 1;
        }
        else {
          pre[i][j] = pre[i - 1][j];
        }
      }
    }
    // for(int i = 0; i < 26; i++) {
    //   cout << pre[6][i] << endl;
    // }
    int q; cin >> q;
    while(q--) {
      int l, r, k; cin >> l >> r >> k;
      l++; r++; // for 1 index;
      int cnt = 0;
      for(int i = 0; i < 26; i++) {
        int occ = pre[r][i] - pre[l - 1][i];
        //cout << occ << endl;
        if(occ % 2) cnt++;
      }
      //cout << cnt << "\n";
      if(cnt - 1 > 2 * k) cout << "NO\n";
      else cout << "YES\n";
    }
  }
  return 0;
}