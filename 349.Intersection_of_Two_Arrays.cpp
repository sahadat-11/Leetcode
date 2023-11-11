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
  int i = 0, j = 0;
  set<int> st;
  while(i < n and j < m) {
    if(a[i] == b[j]) {
      st.insert(a[i]);
      i++;
    }
    else if(a[i] > b[j]) {
      j++;
    }
    else {
      i++;
    }
  }
  for(auto u : st) cout << u << "\n";
  return 0;
}

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
  map<int, int> mp1, mp2;
  for(int i = 0; i < n; i++) {
    mp1[a[i]]++;
  }
  vector<int> v;
  for(int i = 0; i < m; i++) {
    if(mp1[b[i]] and !mp2[b[i]]) {
      v.push_back(b[i]);
      mp2[b[i]]++;
    }
  }
  for(auto u : v) cout << u << endl;
  return 0;
}
// hasing(n log(n))


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
  sort(b, b + n);
  int i = 0, j = 0, last = -1;
  vector<int> v;
  while(i < n and j < m) {
    if(a[i] == b[j]) {
      if(last != a[i]) {
        v.push_back(a[i]);
        last = a[i];
      }
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