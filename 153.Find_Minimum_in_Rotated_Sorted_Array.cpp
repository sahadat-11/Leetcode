//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int rotation(int a[], int n) {
   int l = 0, r = n - 1;
   int ans = 0;
   while(l <= r) {
      int m = l + (r - l) / 2;
      if(a[m] > a[m - 1]) {
         ans = a[m];
         l = m + 1;
      }
      else r = m - 1;
   }
   return ans;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int mx = rotation(a, n);
   cout << mx << endl;
   return 0;
}