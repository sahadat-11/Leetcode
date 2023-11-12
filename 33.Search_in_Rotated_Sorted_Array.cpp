//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int target; cin >> target;
  int l = 0, r = n - 1, ans = -1;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(a[mid] == target) ans = mid;
        if(a[l] <= a[mid]) {
          if(a[l] <= target and a[mid] >= target) r = mid - 1;
          else l = mid + 1;
      }
    else {
        if(a[mid] <= target and a[r] >= target) l = mid + 1;
        else r = mid - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}


