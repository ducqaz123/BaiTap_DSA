#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int n, int x, int y, ll time){
	time -= min(x,y);
	return time/x + time/y >= n - 1;
}
 int main(){
 	int n, x, y;
 	cin >> n >> x >> y;
 	ll left = 0, right = 1ll * n * min(x,y);
 	ll ans = -1;
 	while(left <= right){
 		ll mid = (left + right)/2;
 		if (check(n,x,y,mid)){
 			ans = mid;
 			right = mid - 1;
		 } else {
		 	left = mid + 1;
		 }
	 }
	 cout << ans << endl;
	return 0;
}

