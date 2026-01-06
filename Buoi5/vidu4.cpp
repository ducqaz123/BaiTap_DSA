#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0;i < n;i++) cin >> a[i];
    sort(a, a + n);
    long long ans = 0;
    for (int i = 0;i < n;i++){
        int *p1 = lower_bound(a + i + 1, a + n, a[i] + k);
        int *p2 = upper_bound(a + i + 1, a + n, a[i] + k);
        ans += p2 - p1;
    }
    cout << ans << endl;
    return 0; 
}
