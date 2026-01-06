#include <bits/stdc++.h>
using namespace std;

int cnt[1000005];
int mod = 1000000007;

void phanTich (int n){
    for (int i = 2;i <= sqrt(n);i++){
        while(n % i == 0){
            cnt[i]++;
            n /= i;
        }
    }
    if (n > 1) cnt[n]++;
}
int main(){
    int n; cin >> n;
    for (int i = 0;i < n;i++){
        int x; cin >> x;
        phanTich(x);
    }
    long long res = 1;
    for (int i = 0;i <= 1000000;i++){
        res *= (cnt[i] + 1) % mod;
        res %= mod;
    }
    cout << res << endl;
    return 0;
}