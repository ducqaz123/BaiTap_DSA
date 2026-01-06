#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;
 vector<char> convert_number(long long n){
    vector<char> v;
     for (int i = 0;i < 64;i++){
        v.push_back('0');
     }
     int index = 63;
     while(n){
        v[index] = (n % 2) + '0';
        n /= 2;
        index--;
     }
     return v;
 }
  int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<char> bin = convert_number(n);
        for (char x : bin){
            cout << x;
        }
        cout << endl;
    }   
     return 0;
  }