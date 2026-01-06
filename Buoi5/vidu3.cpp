#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0;i < n;i++) cin >> a[i];
    for (int j = 0;j < m;j++) cin >> b[j];
    sort(b, b + m);
    for (int x : a){
        int *p = lower_bound(b, b+ m ,x);
        int index = p - b;
        // --index;
        cout << index;
    }
    return 0; 
}

