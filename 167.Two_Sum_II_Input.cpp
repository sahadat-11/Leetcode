//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int target; cin >> target;
  int i = 1, j = n;
  while(i <= j) {
    int sum = a[i] + a[j];
    if(sum > target) {
      j--;
    }
    else if(sum < target) i++;
    else {
      cout << i << " " << j << endl;
      return 0;
    }
  }
  return 0;
}
// two poiter (N)

