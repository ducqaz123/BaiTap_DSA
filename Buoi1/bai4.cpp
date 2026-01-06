#include <iostream>
#include <set>
 using namespace std;
  int main(){
    int n; cin >> n;
     set<int> se;
      for (int i = 0;i < n;i++){
        int x;  cin >> x;
        se.insert(x);
      }
    int q; cin >> q;
    while(q--){
        int x;
        cin >> x;
        if (se.count(x) != 0){
            cout <<"YES"<<endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
  } 