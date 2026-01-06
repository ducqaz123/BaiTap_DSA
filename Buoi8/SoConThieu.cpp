#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int cnt[1000005];
 int main(){
 	int n; cin >> n;
 	int a[n];
 	int l = INT_MAX;
	int r = INT_MIN;
 	for (int i = 0;i < n;i++){
 		cin >> a[i];
 		cnt[a[i]]++;
 		l = min(l, a[i]);
 		r = max (r, a[i]);
	 } 
	int ans = 0;
 	for (int i = l;i <= r;i++){
 		if (cnt[i] == 0)
 		 ans++;
	 }
 	cout << ans << endl;
	return 0;
}

