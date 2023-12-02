//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MX = 1e18;
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   vector<ll> ugly_nums;
   for(ll p2 = 1; p2 <= MX; p2 *= 2) { //2 er multiple
      for(ll p3 = 1; p2 * p3 <= MX; p3 *= 3) {//3 er multiple
         for(ll p5 = 1; p2 * p3 * p5 <= MX; p5 *= 5) {//5 er multiple
            ugly_nums.push_back(p2 * p3 * p5);
         }
      }
   }
   sort(ugly_nums.begin(), ugly_nums.end());
   //for(ll i = 0; i <= 20; i++) cout << ugly_nums[i] << " ";
   cout << "The 1500'th ugly number is " << ugly_nums[1500 - 1] << ".\n";
   return 0;
}