//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int a, b, c; cin >> a >> b >> c;
   int cnt = 0;
   for(int i = 0; i < 32; i++)  {
   	 bool bit1 = a & (1 << i);
   	 bool bit2 = b & (1 << i);
   	 bool bit3 = c & (1 << i);
   	// cout << bit1 << " " << bit2 << " " << bit3 << "\n";
     if((bit2 | bit1) != bit3) {
     	if(bit3) {
     		cnt++;
     	}
     	else {
     		cnt += (bit1 + bit2);
     	}
     }
   }
   cout << cnt << "\n";
   return 0;
}
//https://prnt.sc/LM4FdlE2QmNp