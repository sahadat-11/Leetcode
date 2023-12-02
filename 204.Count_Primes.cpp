//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e7 + 8;
bitset<N>f; // initially false;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
   }

   vector<int> primes;
   for(int i = 2; i <= N; i++) {
      if(!f[i]) primes.push_back(i);
   }

   int n; cin >> n;
   int cnt = 0;
   for(auto p : primes) {
      if(p >= n) break;
      cnt++;
   }
   cout << cnt << "\n";
   return 0;
}

class Solution {
public:
    int countPrimes(int n) {
         int count= 0;
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=0;
        for(int i =2;i<n;i++)
        {
            if(prime[i])
            {
                count++;
                for(int j = 2*i;j<n;j=j+i)
                {
                    prime[j]=false;
                }
            }
        }
        return count;

    }
};