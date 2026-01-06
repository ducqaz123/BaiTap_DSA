#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, k;
	cin >> n >> k;
	int a[n];
	for (int i = 0;i < n;i++) cin >> a[i];
	sort(a, a+n);
	long long ans = 0;
	ll value = 0;
	for (int i = 0;i < n;i++){
		auto it1 = lower_bound(a + i + 1,a + n,k - a[i]);
		--it1;
		int pos = it1 - a;
		ans += pos - i;
	}
	cout << ans << endl;
	return 0;
}

