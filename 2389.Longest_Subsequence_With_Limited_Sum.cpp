//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n], b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(a, a + n);
  int pre[n] = {0};
  pre[0] = a[0];
  for(int i = 1; i < n; i++) {
     pre[i] = pre[i - 1] + a[i];
  }
  for(int i = 0; i < m; i++) {
    int ub = upper_bound(pre, pre + n, b[i]) - pre;
    cout << ub << "\n";
  }
  return 0;
}

