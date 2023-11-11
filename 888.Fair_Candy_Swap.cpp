// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n, m; cin >> n >> m; int a[n], b[m];
//   for(int i = 0; i < n; i++) cin >> a[i];
//   for(int i = 0; i < m; i++) cin >> b[i];
//   int sum1 = 0, sum2 = 0;
//   for(int i = 0; i < n; i++) sum1 += a[i];
//   for(int i = 0; i < m; i++) sum2 += b[i];
  
//   // sum1 - x + y = sum2 + x - y
//   // y = x + (sum2-sum1)/2
//   int z = (sum2 - sum1) / 2;
//   map<int, int> mp;
//   for(int i = 0; i < m; i++) {
//     mp[b[i]]++;
//   }
//   for(int i = 0; i < n; i++) {
//     int x = a[i];
//     int y = x + z;
//     if(mp.find(y) != mp.end()) {
//       cout << x << " " << y << endl;
//       return 0;
//     }
//   }
//   return 0;
// }


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
  sort(b, b + m);
  int sum1 = 0, sum2 = 0;
  for(int i = 0; i < n; i++) sum1 += a[i];
  for(int i = 0; i < m; i++) sum2 += b[i];
  
  // sum1 - x + y = sum2 + x - y
  // y = x + (sum2-sum1)/2
  int z = (sum2 - sum1) / 2;
  vector<int> v;
  for(int i = 0; i < n; i++) {
    int x = a[i];
    int l = 0, r = m - 1;
    while(l <= r) {
      int mid = l + (r - l) / 2;
      int y = z + b[mid];
      if(x == y) {
        v.push_back(x);
        v.push_back(b[mid]);
        for(auto u : v) cout << u << endl;
        return 0;
      }
      else if(x < y) {
        r = mid - 1;
      }
      else {
        l = mid + 1;
      }
    }
  }
  return 0;
}

