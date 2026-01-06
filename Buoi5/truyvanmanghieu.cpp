#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, q; cin >> n >> q;
    int a[1000005];
    int D[1000005];
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    for (int i = 0;i < n;i++){
        if(i == 0) D[0] = a[0];
        D[i] = a[i] - a[i-1];
    }
    while(q--){
        int l, r, k;
        cin >> l >> r >> k;
        D[l] += k;
        D[r + 1] -= k;
    }
    long long F[n + 5];
    for (int i = 0;i < n;i++){
        if (i == 0) F[0] = D[0];
        else 
        F[i] = F[i-1] + D[i];
    }
    for (int x : F){
        cout << x << " ";
    }
    return 0;
}