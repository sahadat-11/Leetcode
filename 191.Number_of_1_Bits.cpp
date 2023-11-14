//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   for(int i = 0; i < 32; i++) {
      int mask = (1 << i);
      if(mask & n) cnt++;
   }
   cout << cnt << "\n";
   return 0;
}
// left shift


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int cnt = 0;
   while(n) {
      if(n & 1) cnt++;
      n >>= 1;
   }
   cout << cnt << "\n";
   return 0;
}
// right shift
//https://prnt.sc/oFzKjPE-inPZ


