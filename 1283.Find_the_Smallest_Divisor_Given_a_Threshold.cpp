//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int n, h, a[N];
bool isvalid(int x) {
   ll sum = 0;
   for(int i = 0; i < n; i++) {
     sum += ((a[i] + x - 1 ) / x);
   }
   //cout << x << " " << sum << endl;
   return sum <= h; 
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> h;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 1, r = 1e9, ans = 0;
  while(l <= r) {
     int mid = l + (r - l) / 2;
     if(isvalid(mid)) {
        ans = mid;
        r = mid - 1;
     }
     else l = mid + 1;
  }
  cout << ans << "\n";
  return 0;
}
//https://takeuforward.org/arrays/find-the-smallest-divisor-given-a-threshold/
