#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    long long pre[n];
    for (int i = 0;i < n;i++){
        if (i == 0) pre[0] = a[0];
        else 
        pre[i] = pre[i - 1] + a[i];
    }
    for (int x : pre){
        cout << x << " ";
    }
    return 0;
}
