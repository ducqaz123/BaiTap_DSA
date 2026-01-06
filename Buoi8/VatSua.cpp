#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

 int main(){
 	int n; cin >> n;
	int a[n];
	for (int i = 0;i < n;i++) cin >> a[i];
	ll ans = 0;
	sort(a,a+n,greater<int>());
	for (int i = 0;i < n;i++){
		if (i < a[i]){
			ans += a[i] - i;
		}
	} 
	cout << ans << endl;
	return 0;
}

