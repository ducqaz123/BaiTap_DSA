#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll giaithua = 1;
    ll mod = 1000000007;
    for (int i = 1;i <= n;i++){
        giaithua *= (i % mod);
        giaithua %= mod;
        cout << giaithua << endl;
    }
    return 0;
}