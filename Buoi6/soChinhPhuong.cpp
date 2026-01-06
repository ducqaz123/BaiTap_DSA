#include <bits/stdc++.h>
using namespace std;
 int main (){
    int n; cin >> n;
    long long res = n;
    for (int i = 2;i <= sqrt(n);i++){
        if (n % i == 0){
            int mu = 0;
            while(n % i == 0){
                mu++;
                n /= i;
            }
            if (mu % 2 != 0)
            res *= i;
        }
    }
    if (n > 1) res *= n;
    cout << res << endl;
    return 0;
 }