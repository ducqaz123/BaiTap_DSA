#include <bits/stdc++.h>
using namespace std;
 int main(){
    int a,b;
    cin >> a >> b;
    int mod = 100000007;
    long long tich = 1;
    for (int i = 1;i <= b;i++){
        tich *= a % mod;
        tich %= mod;
    }
    cout << tich << endl;
    return 0;
 }