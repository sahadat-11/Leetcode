//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int pos = 0, neg = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] < 0) neg++;
    else if(a[i] > 0) pos++;
  }
  cout << max(neg, pos);
  return 0;
}

// //In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int l = 0, r = n - 1, neg = 0;
  bool haspsos = false, hasneg = false;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(a[mid] < 0) {
      neg = mid;// store in neg
      l = mid + 1;
      hasneg = true;
    }
    else r = mid - 1;
  }
  if(hasneg) neg++; // for 0 indexing
  l = 0, r = n - 1;
  int pos = 0;
  while(l <= r) {
    int mid = l + (r - l) / 2;
    if(a[mid] > 0) {
      pos = mid;// store in pos
      r = mid - 1;
      haspsos = true;
    }
    else l = mid + 1;
  }
  if(haspsos) pos = n - pos;
  cout << pos << " " << neg << endl;
  return 0;
}

// (2 * log(n)) (binary search)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int firstpos = lower_bound(a, a + n, 1) - a;
  int firstzero = lower_bound(a, a + n, 0) - a;
  int zero = firstpos - firstzero;
  int pos = n - firstpos;
  int neg = firstpos - zero;
  //cout << pos << " " << neg << endl;
  cout << max(pos, neg);
  return 0;
}
// O(log n)
