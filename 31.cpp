//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
bool check(vector<int> a, vector<int> b, int n) {
	for(int i = 0; i < n; i++) {
	  if(a[i] != b[i]) return false;
	}
	return true;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  vector<int> ans(n);
  int cnt = 0;
  do {
    for(int i = 0; i < n; i++) {
      ans[i] = a[i];
    }
    if(cnt == 1) break;
    cnt++;
  } while(next_permutation(a.begin(), a.end()));
  // for(int i = 0; i < n; i++) {
  //  cout << ans[i] << " "; 
  // }
  if(check(b, ans, n)) {
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
     cout << a[i] << " "; 
    }
  }
  else {
  	for(int i = 0; i < n; i++) {
  	 cout << ans[i] << " "; 
  	}
  }
  return 0;
}
