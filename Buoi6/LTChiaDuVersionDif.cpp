#include <bits/stdc++.h>
using namespace std;
int mod = 1000000007;
long long binpow(long long a, long long b){
    if (b == 0)
    return 1;
    long long X = binpow(a, b /2);
    if (b % 2 == 0)
      return (X % mod) * (X % mod) % mod;
    return ((X % mod) * (X % mod) % mod * (a % mod)) % mod;
}
 int main(){
    int a , b;
    cin >> a >> b;
    cout << binpow(a,b) << endl;
    return 0;
 }