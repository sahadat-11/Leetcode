//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string pattern, s; cin >> pattern;
   cin.ignore();
   getline(cin, s);
   //cout << pattern << s << endl;
   vector<string> v;
   string x;
   stringstream str(s);
   while(str >> x) {
      v.push_back(x);
   }
   //for(auto u : v) cout << u << " ";
   map<char, string> mp;
   map<string, int> mp2;
   bool flag = true;
   for(int i = 0; i < pattern.size(); i++) {
      if(mp.find(pattern[i]) != mp.end()) {
         if(mp[pattern[i]] != v[i]) flag = false;
      }
      else {
         if(mp2.find(v[i]) != mp2.end()) flag = false;
      }
      mp[pattern[i]] = v[i];
      mp2[v[i]]++;
   }
   if(v.size() != pattern.size()) cout << "NO\n";
   else if(flag) {
      cout << "YES\n";
   }
   else {
      cout << "NO\n";
   }
   return 0;
}

