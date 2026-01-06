#include <bits/stdc++.h>
using namespace std;
int D[1000001];
int F[1000001];
int n,q;
bool cmp (int a, int b){
    return a > b;
}
int main(){
    cin >> n >> q;
    int a[n+5];
    for (int i = 1;i <= n;i++){
        cin >> a[i];
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        D[l] += 1;
        D[r+1] -= 1;
    }
    for (int i = 1;i <=n;i++){
        if (i == 1) F[1] = D[1];
        F[i] = F[i-1] + D[i];
    }
    sort(a+1,a+n+1,cmp);
    sort(F+1,F+n+1,cmp);
    long long tong = 0;
    for (int i = 1;i <= n; i++){
        tong += (long long)F[i] * a[i];
    }
    cout << tong << endl;
    return 0;
 }