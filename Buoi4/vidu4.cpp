#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> ii;
#define fi first
#define se second

bool cmp (ii x, ii y){
    int kc1 = x.fi * x.fi + x.se * x.se;
    int kc2 = y.fi * y.fi + y.se * y.se;
    if (kc1 != kc2){
        return kc1 < kc2;
    } else if (x.fi != y.fi){
        return x.fi < y.fi;
    } else {
        x.se < y.se;
    }
}
int main(){
    int n; cin >> n;
    ii a[n];
    for (int i = 0;i < n;i++){
        cin >> a[i].fi >> a[i].se;
    }
    sort(a,a+n,cmp);
    for (ii x : a){
        cout << x.fi <<" "<< x.se<< endl;
    }
    return 0;
}
