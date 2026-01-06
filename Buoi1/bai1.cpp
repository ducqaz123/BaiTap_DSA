#include <iostream>
#include <vector>
#include <cmath>
 using namespace std;
 bool snt (int n){
    if (n < 2) return false;
     for (int i = 2;i <= sqrt(n);i++){
        if (n % i == 0)
            return false;
     } 
     return true;
 }
 vector<int> prime_list(vector<int> v){
    vector <int> res;
     for (int i = 0;i < v.size();i++){
        if (snt(v[i])){
            res.push_back(v[i]);
        }
     }
     return res;
 }
 void nhap(vector<int> &v){
    int n; cin >> n;
    for (int i = 0;i < n;i++){
        int x; cin >> x;
        v.push_back(x);
    }
 }
 void in(vector<int> v){
    for (int x : v){
        cout << x << " ";
    }
 }
  int main(){
    vector<int> v;
    nhap(v);
    vector<int> res = prime_list(v);
    in(res); 
    return 0;
  }