#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n; cin >> n;
 	pair<int,int> a[n];
 	for (int i = 0;i < n;i++){
 		cin >> a[i].first >> a[i].second;
	 }
	 sort(a, a+n);
	ll ans = a[0].first + a[0].second;
	for (int i = 1;i < n;i++){
		ans = max(ans, a[i].first + 0ll);
		ans += a[i].second;
	}
	cout << ans << endl;
	return 0;
}

