//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string s;
   while(n) {
      s += ((n % 2) + '0');
      n >>= 1;
   }
   reverse(s.begin(), s.end());
   cout << s << endl;
   return 0;
}

//binary to decimal

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   string s;
   while(n) {
      s += ((n % 2) + '0');
      n >>= 1;
   }
   reverse(s.begin(), s.end());
   //cout << s << endl;
   int onecnt = count(s.begin(), s.end(), '1');
   //cout << onecnt << endl;
   int ans, last = INT_MAX;// handle the first one
   if(onecnt <= 1) ans = 0;
   else {
      for(int i = 0; i < s.size(); i++) {
         if(s[i] == '1') {
            ans = max(ans, i - last);
            last = i;
         }
      }
   }
   cout << ans << "\n";
   return 0;
}

// (log(n) + log(n))

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   int ans = 0, last = -1;// handle the first one
   for(int i = 0; i < 32; i++) {
      int mask = (1 << i);
      if(mask & n) {
         if(last == -1) last = i;
         ans = max(ans, i - last);
         last = i;
      }
   }
   cout << ans << "\n";
   return 0;
}

// (log(n))


