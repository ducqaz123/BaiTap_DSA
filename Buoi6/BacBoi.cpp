#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long p){
    long long ans = 0;
    for (int i = p;i <= n;i += p){
        int j = i;
        while(j % p == 0){
            ans++;
            j /= p;
        }
    }
    return ans;
}
int main(){
    int n, p;
    cin >> n >> p;
    cout << solve(n,p) << endl;
    return 0;
}