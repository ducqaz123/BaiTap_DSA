#include <bits/stdc++.h>
using namespace std;
int main(){
     int n, x;
     int a[n];
     cin >> n >> x;
     for (int i = 0;i < n;i++){
        cin >> a[i];
     }
    int *p = upper_bound(a, a + n, x);
    if (p == a){
        cout << "NOT FOUND" << endl;
    } else {
        --p;
        cout << *p << endl;  
    }
    return 0;
}
