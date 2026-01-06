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
        cout << it.first <<" "<<it.second << endl;
     }
     cout << endl;
    for (int x : a){
        if (mp[x] != 0){
            cout << x << " " << mp[x] << endl;
            mp[x] = 0;
        }
    }
    return 0;
  }