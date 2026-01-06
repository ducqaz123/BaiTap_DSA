#include <bits/stdc++.h>
#include <iostream>
#include <set>
 using namespace std;
  int main(){
   multiset<int> se;
   int n; cin >> n;
   for (int i = 0;i < n;i++){
    int x; cin >> x;
    se.insert(x);
   }
    int q; cin >> q;
    while(q--){
        int tt, x; cin >> tt >> x;
        if (tt == 1){
            se.insert(x);
        } else if (tt == 2){
            multiset<int>::iterator it = se.find(x);
            if (it != se.end()){
                se.erase(x);
            }
        } else if (tt == 3){
            if (se.count(x) == 0){
                 cout << "NO" << endl;
            } else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
  }