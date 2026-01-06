#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
 using namespace std;
  int main(){
    multiset <int> se;
    int n; cin >> n;
    for (int i = 0;i < n;i++){
        int x; cin >> x;
        se.insert(x);
    }
 int q; cin >> q;
  while(q--){
    int tt, value; cin >> tt >> value;
    if (tt == 1){
        se.insert(value);
    } else if (tt == 2){
        multiset<int>::iterator it = se.find(value);
        if (it != se.end()){
         se.erase(it);
        }
    } else if (tt == 3){
        if (se.count(value) != 0){
            cout <<"YES"<<endl;
        } else {
            cout <<"NO"<<endl;
        }
    }
  }
    return 0;
  }