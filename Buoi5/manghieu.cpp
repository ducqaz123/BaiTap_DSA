#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[1000005];
    int D[1000005];
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    for (int i = 0;i < n;i++){
        if(i == 0) D[0] = a[0];
        D[i] = a[i] - a[i-1];
    }
    for (int x : D){
        cout << x << " ";
    }
    return 0;
}