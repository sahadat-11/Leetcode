//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int fre[N];
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k; cin >> n >> k; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    ll cur_sum = 0, distinct = 0, max_sum = 0;
    for(int i = 0; i < k; i++) {
      cur_sum += a[i];
      if(fre[a[i]] == 0) {
        distinct++;
      }
      fre[a[i]]++;
    }
    if(distinct == k) {
      max_sum = max(max_sum, cur_sum);
    }
    for(int i = k; i < n; i++) {
      cur_sum += a[i] - a[i - k];
      if(fre[a[i - k]] == 1) distinct--;//Remove first element of previous window, If there was only one occurrence, then reduce distinct count.
      fre[a[i - k]]--;//reduce count of the removed element
      // Add new element of current window
      // If this element appears first time,
      // increment distinct element count
      if(fre[a[i]] == 0) {
        distinct++;
      }
      fre[a[i]]++;
      if(distinct == k) {
        max_sum = max(max_sum, cur_sum);
      }
    }
    cout << max_sum << "\n";
   return 0;
}


