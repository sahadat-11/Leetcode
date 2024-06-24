//The problem is to count all the possible paths from top left
//to bottom right of anMxN matrix with the constraints
///that from each cell you can either move to right or down.

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
int fact[N], invf[N];

int binexp(int a, int b) {
	int ans = 1 % mod; a %= mod; if (a < 0) a += mod;
	while(b) {
		if(b & 1) {
			ans = (ans * 1ll * a) % mod;
		}
		a = (a * 1ll * a) % mod;
		b >>= 1;
	}
	return ans;
}

int nCr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[r] % mod * invf[n - r] % mod;
}

int nPr(int n, int r) {
  if (n < r or n < 0) return 0;
  return 1ll * fact[n] * invf[n - r] % mod;
}

void precal() {
  fact[0] = 1;
  for(int i = 1; i < N; i++) {
    fact[i] = (fact[i - 1] * 1ll * i) % mod;
  }
  invf[N - 1] = binexp(fact[N - 1], mod - 2);
  for (int i = N - 2; i >= 0; i--) {
    invf[i] = 1ll * invf[i + 1] * (i + 1) % mod;
  }
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  precal();
  int n, m; cin >> n >> m;
  int ans = ((fact[n + m - 2] * invf[n - 1]) % mod * invf[m - 1]) % mod;
  cout << ans << "\n";
  return 0;
}