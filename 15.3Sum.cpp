//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n ; i++) cin >> a[i];
  sort(a, a + n);
  vector<vector<int>> v;
  set<vector<int>> st;
  for(int i = 0; i < n - 2; i++) {
     int l = i + 1, r = n - 1;
     while(l < r) {
       int sum = a[i] + a[l] + a[r];
       if(sum > 0) r--;
       else if(sum < 0) l++;
       else {
         st.insert({a[i], a[l], a[r]});
         l++; r--;
       }
     }
  }
  for(auto it : st) {
     v.push_back(it);
  }
  for(int i = 0; i < v.size(); i++) {
     for(int j = 0; j < v[i].size(); j++) {
       cout << v[i][j] << " ";
     }
     cout << endl;
  }
  return 0;
}
// if the solution set must not contain duplicate triplets.

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n ; i++) cin >> a[i];
  sort(a, a + n);
  vector<vector<int>> v
  for(int i = 0; i < n - 2; i++) {
     int l = i + 1, r = n - 1;
     while(l < r) {
       int sum = a[i] + a[l] + a[r];
       if(sum > 0) r--;
       else if(sum < 0) l++;
       else {
         v.push_back({a[i], a[l], a[r]});
         l++; r--;
       }
     }
  }
  for(int i = 0; i < v.size(); i++) {
     for(int j = 0; j < v[i].size(); j++) {
       cout << v[i][j] << " ";
     }
     cout << endl;
  }
  return 0;
}
// the solution set can contain duplicate triplets.