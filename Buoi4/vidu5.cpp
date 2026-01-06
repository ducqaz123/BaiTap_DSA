#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n >> m;
    int a[n], b[m];
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    for (int i = 0;i < m;i++){
        cin >> b[i];
    } 
    sort(b, b+m);
    for (int x : a){
        int *pos = upper_bound(b,b+m,x);
        int index = pos - b;
        cout << m - index << ' ';
    }

    return 0;
}