#include <bits/stdc++.h>
using namespace std;
 int main(){
    int n, m, k;
    cin >> n >> m >> k;
    int mod = pow(10,k);
    long long ans = 1;
    for (int i = 1;i <= m;i++){
        ans *= n % mod;
        ans %= mod;
    }
    cout << ans << endl;
    return 0;
 }
