// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int n; cin >> n;
//    vector<int> v(n);
//    ll sum = 0;
//    for(int i = 0; i < n; i++) cin >> v[i];
//    for(int i = 0; i < n; i++) {
//       for(int j = i; j < n; j++) {
//          int mn = INT_MAX;
//          for(int k = i; k <= j; k++) {
//             mn = min(mn, v[k]);
//          }
//          sum += mn;
//       }
//    }
//    cout << sum << "\n";
//    return 0;
// }
// // (n ^ 3)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v(n);
   ll sum = 0;
   for(int i = 0; i < n; i++) cin >> v[i];
   for(int i = 0; i < n; i++) {
      int mn = INT_MAX;
      for(int j = i; j < n; j++) {
            mn = min(mn, v[j]);
            sum += mn;
      }
   }
   cout << sum << "\n";
   return 0;
}
// (n ^ 2)