#include <bits/stdc++.h>
 using namespace std;
  int main(){
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int x : a){
       if (mp[x] != 0){
        cout << x << " "<< mp[x]<< endl;
        mp[x] = 0;
       }
    }
    return 0;
  }