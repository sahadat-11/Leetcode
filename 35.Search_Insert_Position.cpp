//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n, k; cin >> n >> k; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < k; i++) {
     int value; cin >> value;
     cout << lower_bound(a, a + n, value) - a  << "\n";
   }
   return 0;
}