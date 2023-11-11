//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  vector<int> v;
  for(int i = 1; i < a[0]; i++) v.push_back(i);
  for(int i = 1; i < n; i++) {
    for(int j = a[i - 1] + 1; j < a[i]; j++) v.push_back(j);
  }
  // for(auto u : v) {
  //   cout << u << "\n";
  // }
  cout << v[k - 1] << "\n";
  return 0;
}
// O(n * n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) {
    if(a[i] < k) k++;
    else break;
  }
  cout << k << endl;
  return 0;
}
// O(n);

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int l = 0, r = n - 1;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    int missing = a[mid] - (mid + 1);
    if(missing < k) l = mid + 1;
    else r = mid - 1;
  }
  cout << l + k << "\n";
  return 0;
}
// O(log(n));
//https://takeuforward.org/arrays/kth-missing-positive-number/
//https://prnt.sc/kkXH6PuMvvJ5
//https://prnt.sc/yckk74bMqLUI
//https://prnt.sc/_R2o0rX0gLvF
