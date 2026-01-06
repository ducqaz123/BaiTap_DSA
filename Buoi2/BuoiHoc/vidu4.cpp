#include <bits/stdc++.h>
using namespace std;
 int main(){
    map<int,int> mp;
    int n; cin >> n;
    for (int i = 0;i < n;i++){
        int x; cin >> x;
        mp[x]++;
    }
  for (auto x : mp){
    if (x.second % 2 == 0){
        cout << x.first << " " << x.second << endl;
    }
  }
  cout << endl;

  for (auto it = mp.rbegin(); it != mp.rend();it++){
    if ((*it).second % 2 == 0){
        cout << (*it).first << " "<< (*it).second << endl;
    }
  }
    return 0;
 }