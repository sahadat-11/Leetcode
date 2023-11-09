//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e4 + 7;
int n, m, k, a[N];
bool isvalid(int x) {
   int adjacent = 0, bouquets = 0;
   for(int i = 0; i < n; i++) {
     if(a[i] <= x) {
       adjacent++;
       if(adjacent == k) {
         bouquets++;
         adjacent = 0;
       }
     }
     else {
       adjacent = 0;
     }
   }
   return bouquets >= m;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m >> k;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans;
  if(m * k > n) {
    ans = -1;
  }
  else {
     int l = 1, r = 1e9;
     while(l <= r) {
       int mid = l + (r - l) / 2;
       if(isvalid(mid)) {
          ans = mid;
          r = mid - 1;
       }
       else l = mid + 1;
    }
    cout << ans << "\n";
  }
  
  return 0;
}
//https://takeuforward.org/arrays/minimum-days-to-make-m-bouquets/
