//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   
   string a, b; cin >> a >> b;
   sort(a.begin(), a.end());
   sort(b.begin(), b.end());
   bool flag = true;
   for(int i = 0; i < a.size(); i++) {
      if(a[i] != b[i]) flag = false;
   }
   if(flag) {
      cout << "YES\n";
   }
   else {
      cout << "NO\n";
   }
   return 0;
}

