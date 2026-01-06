#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    int pre[n];
    for (int i = 0;i < n;i++){
        if (i == 0) pre[0] = a[0];
        else 
        pre[i] = pre[i - 1] + a[i];
    }
    int q; cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        if (l == 0){
            cout << pre[r] << endl;
        }
        cout << pre[r] - pre[l-1] << endl;
    }
    return 0;
}
