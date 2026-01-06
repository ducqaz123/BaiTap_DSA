#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
long long pre[1005][1005];
int n,m;
 int main(){ 
    cin >> n >> m;
    for (int i = 1;i <= n;i++){
        for(int j = 1; j <= m;j++){
            cin >> a[i][j];
        }
    }
    for (int i = 1;i <= n;i++){
        for (int j = 1;j <= m;j++){
            pre[i][j] = pre[i-1][j] + pre[i][j-1] - pre[i-1][j-1] + a[i][j];
        }
    }
    int q; cin >> q;
    while(q--){
        int h1,h2,c1,c2;
        cin >> h1 >> h2 >> c1 >> c2;
        cout << pre[h2][c2] - pre[h1-1][c2] - pre[h2][c1-1] + pre[h1-1][c1-1];
    }
    return 0;
 }