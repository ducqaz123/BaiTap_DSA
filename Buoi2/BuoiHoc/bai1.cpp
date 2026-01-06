#include <iostream>
#include <algorithm>
#include <set>
 using namespace std;
  int main(){
    set<pair<int,int>> se;
    int n; cin >> n;
    for (int i = 0;i < n;i++){
      pair<int,int> p;
      cin >> p.first >> p.second;
      se.insert(p);
    }
    for (auto x : se){
      cout << x.first<<" "<<x.second << endl;
    }
    return 0;
  }