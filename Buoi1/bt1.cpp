#include <iostream>
#include <algorithm>
#include <vector>
    using namespace std;
    int timkiem(vector<pair<int, int>> v, int x){
        for (int i = 0;i < v.size();i++){
            if (v[i].first == x){
                return i;
            } 
        }
        return -1;
    }
     int main(){
        vector<pair<int, int>> v;
        int n; cin >> n;
        for (int i = 0;i < n;i++){
            int x; cin >> x;
            int vt = timkiem(v,x);
            if (vt == -1){
                v.push_back({x,1});
            } else {
                v[vt].second++;
            }
        }
        for (int i = 0;i < v.size();i++){
            cout << v[i].first << " "<< v[i].second << endl;
        }
        return 0;
     }