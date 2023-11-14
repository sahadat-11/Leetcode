//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v;
   for(int i = 0; i <= n; i++) {
      int x = i;
      int cnt = 0;
      while(x) {
        if(x & 1) cnt++;
        x >>= 1;
      }
      v.push_back(cnt);
   }
   for(auto u : v) cout << u << "\n";
   return 0;
}
// right shift (n log(n))


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   vector<int> v;
   for(int i = 0; i <= n; i++) {
      int x = i, cnt = 0;
      for(int j = 0; j < 30; j++) {
          int mask = (1 << j);
          if(mask & x) cnt++;
      }
      v.push_back(cnt);
   }
   for(auto u : v) cout << u << "\n";
   return 0;
}
// left shift (n * 30);
//https://prnt.sc/oFzKjPE-inPZ
