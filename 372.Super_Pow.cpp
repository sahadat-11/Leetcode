//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1337;
int binexp(int a, int b) {
	a %= mod;
	int ans = 1;
	while(b) {
		if(b & 1) { // if b in odd
			ans = (ans * 1ll * a) % mod; // type cast for integer overflow
		}
		a = (a * 1ll * a) % mod;
		b >>= 1; // if b in odd(if 0th bit is set)
	}
	return ans;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, n; cin >> a >> n; int b[n];
  for(int i = 0; i < n; i++) {
     cin >> b[i];
  }
  ll bmod = 0;
  for(int i = 0; i < n; i++) {
  	bmod = (10 * 1ll * bmod + b[i]) % mod;
  }
  cout << binexp(a, bmod);
  return 0;
}