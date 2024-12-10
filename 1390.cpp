//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
int spf[N], divs[N];
bitset<N>f;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }

   for(int i = 1; i < N; i++) {
     for(int j = i; j < N; j += i) {
       divs[j] += i;
     }
   }
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   int sum = 0;
   for(int i = 0; i < n; i++) {
    int x = a[i];
    bool flag = false;
    for(int j = 1; j * j <= x; j++) {
        if(x % j == 0) {
          if(!f[j]) {
            if(j * j * j == a[i]) {
                sum += divs[x];
                flag = true;
            }
          }
          if(x / j != j) {
            if(!f[x / j]) {
                if(x / j * x / j * x / j == a[i] and !flag) {
                    sum += divs[x];
                    flag = true;
                }
                if(!f[j] and j * (x / j) == x and !flag) {
                    sum += divs[x];
                }
            }
          }
        }
    }
   }
   cout << sum << "\n";
  return 0;
}