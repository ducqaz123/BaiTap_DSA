#include <bits/stdc++.h>
using namespace std;
int mod = 1000000007;
 int main(){
    int t;
     cin >> t;
     long long soUoc = 1;
     for (int i = 1;i <= t;i++){
        int p, e;
        cin >> p >> e; 
        soUoc *= (e + 1) % mod;
        soUoc %= mod;
     }
    cout << soUoc << endl;
    return 0;
 }