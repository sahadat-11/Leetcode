//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; char c[n];
  for(int i = 0; i < n; i++) cin >> c[i];
  char target; cin >> target;
  int x = upper_bound(c, c + n, target) - c;
  if(x == letters.size()) cout << letters[0];
  else cout << letters[x];
  return 0;
}

