#include <bits/stdc++.h>
using namespace std;
int demsole(int n){
    int cnt = 0;
    while(n != 0){
        int tmp = n % 10;
        if (tmp % 2 != 0){
            cnt++;
        }
        n /= 10;
    }
    return cnt;
}
bool cmp (int x, int y){
    if (demsole(x) != demsole(y)){
        return demsole(x) > demsole(y);
    } else {
        return x < y;
    }
}
int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    sort(a,a+n,cmp);
    for (int x : a){
        cout << x << " ";
    }
    return 0;
}