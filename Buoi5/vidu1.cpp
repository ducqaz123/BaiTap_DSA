#include <bits/stdc++.h>
using namespace std;
 int main(){
     int n, x;
     int a[n];
     cin >> n >> x;
     for (int i = 0;i < n;i++){
      cin >> a[i];
     }
     int *p1 = lower_bound(a, a + n, x);
     if ( p1 != a + n){
         cout << p1 - a << endl;
     } else {
      cout << -1 << endl;
     } 
     int *p2 = upper_bound(a, a + n, x);
      if (p2 != a + n){
         cout << p2 - a << endl;
      } else {
         cout << -1 << endl;
      } 
      if (*p1 == x){
         cout << p1 - a<< endl;
      } else {
         cout << -1 << endl;
      }
      --p2;
      if (*p2 == x){
         cout << p2 - a << endl;
      } else {
          cout << -1 << endl;
      }
      cout << p2 - p1 + 1 << endl;
    return 0;
 }