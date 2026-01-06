#include <iostream>
#include <algorithm>
#include <set>
#include <map>
 using namespace std;
  int main(){
    map<int,int> mp;
    int n; cin >> n;
    int a[n];
     for (int i = 0;i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
     }
     for (auto it : mp){
        if (it.second % 2 == 0){
            cout << it.first <<" "<<it.second << endl;
        }
     }
     cout << endl;
     for (auto it = mp.rbegin(); it != mp.rend();it++){
        if (it->second % 2 == 0){
            cout << it->first << " "<<it->second << endl;
        }
     }
    return 0;
  }