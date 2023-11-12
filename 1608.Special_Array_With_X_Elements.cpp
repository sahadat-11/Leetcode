// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// const int N = 1005;
// int n, a[N];
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> n;
//   for(int i = 0; i < n; i++) cin >> a[i];
//   sort(a, a + n);
//   int l = 0, r = 1007, ans = -1;
//   while(l <= r) {
//     int mid = l + (r - l) / 2;
//     int cnt = 0;
//     for(int i = 0; i < n; i++) {
//       if(a[i] >= mid) cnt++;
//     }
//     if(cnt == mid) ans = mid;
//     if(cnt > mid) l = mid + 1;
//     else r = mid - 1;
//   }
//   cout << ans << "\n";
//   return 0;
// }
// // (n logn)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1005;
int n, a[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int l = 0, r = 1007, ans = -1;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    int lb = lower_bound(a, a + n, mid) - a;
    int cnt = n - lb;
    if(cnt == mid) ans = mid;
    if(cnt > mid) l = mid + 1;
    else r = mid - 1;
  }
  cout << ans << "\n";
  return 0;


}
// (2 * logn)
