//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int n, day, a[N];
bool isvalid(int x) {
   int cnt = 1;// at first day;
   ll sum = 0;
   for(int i = 0; i < n; i++) {
     sum += a[i];
     if(a[i] > x) return false;// value is > mid;
     if(sum > x) {
       cnt++;
       sum = a[i];
     }
   }
   return cnt <= day; 
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> day;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = 1e9, ans = 0;
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

//You use conveyor belts to ship packages from one port to another.
//https://takeuforward.org/arrays/capacity-to-ship-packages-within-d-days/