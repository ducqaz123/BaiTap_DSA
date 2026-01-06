#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;
  int main(){
       int n , q;
        cin >> n >> q;
        vector <vector<int>> v;
         for (int i = 0;i < n;i++){
            vector<int> row;
            int m; cin >> m;
            for (int j = 0;j < m;j++){
                int x; cin >> x;
                row.push_back(x);
            }
             v.push_back(row);
         }
        while(q--){
            int x, y; cin >> x >> y;
            cout << v[x-1][y-1] << endl;
        }
     return 0;
  }