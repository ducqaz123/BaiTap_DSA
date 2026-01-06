#include <bits/stdc++.h>
using namespace std;
long long F[1000005];
int mod = 1000000007;
int main (){
    F[1] = 1;
    F[2] = 1;
    for (int i = 3;i <= 1000000;i++){
        F[i] = 2* F[i-1] + 3 * F[i - 2];
        F[i] %= mod;
    }
    int n; cin >> n;
    cout << F[n] << endl;
    return 0;
}