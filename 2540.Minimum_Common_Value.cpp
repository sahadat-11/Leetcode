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
  int i = 0, j = 0, ans = -1;
  while(i < n and j < m) {
    if(a[i] == b[j]) {
      ans = a[i];
      break;
    }
    else if(a[i] > b[j]) {
      j++;
    }
    else {
      i++;
    }
  }
  cout << ans << "\n";
  return 0;
}
// O(min(n, m)); (two pointer)


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
  int ans = -1;
  for(int i = 0; i < n; i++) {
    if(binary_search(b, b + m, a[i])) {
      ans = a[i]; break;
    }
  }
  cout << ans << "\n";
  return 0;
}
// O(n log(n)); (binary search)
//https://www.geeksforgeeks.org/binary-search-functions-in-c-stl-binary_search-lower_bound-and-upper_bound/


class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int,bool>mp1;
        for(auto it : nums1)
        {
            mp1[it]=true;
        }
        for(auto it : nums2)
        {
            if(mp1[it]==true)
            {
                return it;
            }
        }
        return -1;
     }
};


