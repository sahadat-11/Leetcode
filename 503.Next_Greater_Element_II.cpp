// if not circular
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int ans[n];
   stack<int> st;
   for(int i = 0; i < n; i++) {
      while(!st.empty() and a[i] > a[st.top()]) {
         ans[st.top()] = i;
         st.pop();
      }
      st.push(i);
   }
   while(!st.empty()) {
      ans[st.top()] = -1;
      st.pop();
   }
   for(int i = 0; i < n; i++) {
      cout << a[i] << " >= ";
      if(ans[i] == -1) cout << -1 << "\n";
      else cout << a[ans[i]] << "\n";
   }
   return 0; 
}


// if not circular
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   vector<int>ans(n, -1);
   stack<int> st;
   for(int i = 0; i < n; i++) {
      while(!st.empty() and a[i] > a[st.top()]) {
         ans[st.top()] = a[i];
         st.pop();
      }
      st.push(i); // present value index push
   }
   for(int i = 0; i < n; i++) {
      cout << a[i] << " >= " << ans[i] << "\n"; 
   }
   return 0; 
}

// if circular
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   vector<int>ans(n, -1);
   stack<int> st;
   for(int i = 0; i < 2*n; i++) {
      while(!st.empty() and a[i % n] > a[st.top() % n]) {
         ans[st.top() % n] = a[i % n];
         st.pop();
      }
      st.push(i % n); // present value index push
   }
   for(int i = 0; i < n; i++) {
      cout << a[i] << " >= " << ans[i] << "\n"; 
   }
   return 0; 
}
// https://prnt.sc/1kWFm765FjIr