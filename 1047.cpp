//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   //cout << s << endl;
   int n = s.size();
   stack<char> st;
   for(int i = 0; i < n; i++) {
     if(!st.empty() and s[i] == st.top()) {
     	st.pop();
     }
     else st.push(s[i]);
   }
   string ans;
   while(!st.empty()) {
   	//cout << st.top();
   	ans.push_back(st.top());
   	st.pop();
   }
   reverse(ans.begin(), ans.end());
   if(ans.size() == 0) ans = "Empty String";
   cout << ans << "\n";
   return 0;
}