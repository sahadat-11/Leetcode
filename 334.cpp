//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  vector<int> pre(n + 2, mod), suf(n + 2, 0);
  for(int i = 1; i <= n; i++) {
    pre[i] = min(pre[i - 1], a[i]);
  }
  for(int i = n; i >= 1; i--) {
    suf[i] = max(suf[i + 1], a[i]);
  }
  int cnt = 0;
  for(int i = 2; i < n; i++) {
    int x = pre[i - 1], y = suf[i + 1];
    if(x < a[i] and y > a[i]) cnt++;
  }
  if(cnt >= 1) {
    cout << "YES\n";
  }
  else {
    cout << "\n";
  }
  return 0;
}