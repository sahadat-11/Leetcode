// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n; cin >> n; int a[n];
//   for(int i = 0; i < n; i++) cin >> a[i];
//   int ans = -1;
//   for(int i = 1; i < n - 1; i++) {
//     if(a[i] > a[i - 1] and a[i] > a[i + 1]) ans = i;
//   }
//   cout << ans << "\n";
//   return 0;
// }
// O(n)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int binarysearch(int a[], int n) {
  if(n == 1) return 0;// if only one element;
  if(a[0] > a[1]) return 0; // 5 4 3 2 1
  if(a[n - 1] > a[n - 2]) return (n - 1);// 1 2 3 4 5;
  int l = 1, r = n - 2;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(a[mid] > a[mid - 1] and a[mid] > a[mid + 1]) return mid;
    else if(a[mid] > a[mid - 1]) l = mid + 1;
    else r = mid - 1; // a[mid] < a[mid - 1]
  }
  return -1;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int ans = binarysearch(a, n);
  cout << ans << "\n";
  return 0;
}

//https://takeuforward.org/data-structure/peak-element-in-array/
//https://prnt.sc/Gw2j-a-cb5q9