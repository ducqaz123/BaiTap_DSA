#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;
  void nhap(vector<vector<int>> &v, int n, int m){
        for (int i = 0;i < n;i++){
            vector<int> row;
            for (int j = 0;j < m;j++){
                int x; cin >> x;
                row.push_back(x);
            }
            v.push_back(row);
        }
  }
  void xuat(vector<vector<int>> &v, int n, int m){
        for (vector<int> row : v){
            for (int x : row){
                cout << x << " ";
            }
            cout << endl;
        }
}
 void lat(vector<vector<int>> &v, int n, int m){
    for (int i = 0;i < n;i++){
        reverse(v[i].begin(), v[i].end());
    }
 }
  int main(){
        int n,m;
         cin >> n >> m;
         vector<vector<int>> v;
         nhap(v,n,m);
         lat(v,n,m);
         xuat(v,n,m);
     return 0;
  }