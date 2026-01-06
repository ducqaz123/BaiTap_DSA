#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int a,b,n; cin >> a >> b >> n;
 	ll left = 0, right = 1ll * n * max(a,b);
 	ll ans = -1;
 	while (left <= right){
 		ll mid = (left + right)/2;
 		ll x = mid / a, y = mid / b;
 		if (x >=(double)n / y){
 			ans = mid;
 			right = mid - 1;
		 } else {
		 	left = mid + 1;
		 }
	 }
	 cout << ans << endl;
	return 0;
}

