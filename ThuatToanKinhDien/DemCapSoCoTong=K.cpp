#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n,k; cin >> n >> k;
 	int a[n];
	for(int i = 0;i < n;i++) cin >> a[i]; 
	ll res = 0;
	ll cnt = 0;
	int l = 0, r = n -1;
	while(l < r){
		res = a[l] + a[r];
		if (res == k){
			int x1 = a[l], x2 = a[r], d1 = 0, d2 = 0;
			while(a[l] == x1){
				d1++; l++;
			}
			while(a[r] == x2){
				d2++; r--;
			}
			if (x1 == x2) cnt += (ll)d1*(d1-1)/2;
			else cnt += (ll)d1 * d2;
		} else if (res < k) l++;
		else r--;
	}
	cout << cnt << endl;
	return 0;
}

