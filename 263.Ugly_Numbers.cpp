//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n;
   if(n <= 0) return false;
    for(long long i = 2; i * i <= n; i++) {
      if(n % i == 0) {
         while(n % i == 0) {
            prime_fact.push_back(i);
            n /= i;
         }
      }
   }
   if(n >= 1) prime_fact.push_back(n);
    for(auto u : prime_fact) {
        if(u >= 7) return false;
    }
   return 0;
}

// (sqrt(n))


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool ugly(ll n) {
   if(n <= 0) return false;
   if(n == 1) return true;
   while(n % 2 == 0) {
      n /= 2;
   }
   while(n % 3 == 0) {
      n /= 3;
   }
   while(n % 5 == 0) {
      n /= 5;
   }
   if(n > 1) return false;
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   ll n; cin >> n;
   if(ugly(n)) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
//log(n)

