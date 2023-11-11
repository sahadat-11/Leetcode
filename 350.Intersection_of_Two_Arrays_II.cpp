//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n], b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  sort(a, a + n);
  sort(b, b + m);
  int i = 0, j = 0;
  vector<int> v;
  while(i < n and j < m) {
    if(a[i] == b[j]) {
        v.push_back(a[i]);
        i++; j++;
    }
    else if(a[i] > b[j]) {
      j++;
    }
    else {
      i++;
    }
  }
  for(auto u : v) cout << u << endl;
  return 0;
}

// two pointer(O(n))

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n], b[m];
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < m; i++) cin >> b[i];
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
  }
  vector<int> v;
  for(int i = 0; i < m; i++) {
    if(mp[b[i]] > 0) {
      v.push_back(b[i]);
      mp[b[i]]--;
    }
  }
  for(auto u : v) cout << u << endl;
  return 0;
}
// hasing(n log(n))
