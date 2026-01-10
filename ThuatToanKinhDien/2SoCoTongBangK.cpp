#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n,k; cin >> n >> k;
 	int a[n];
	for(int i = 0;i < n;i++) cin >> a[i]; 
	ll res = 0;
	int l = 0, r = n -1;
	while(l < r){
		res = a[l] + a[r];
		if (res == k){
			cout << l << " "<< r << endl;
			return 0;
		} else if (res < k) l++;
		else r--;
	}
	cout << "IMPOSSIBLE" << endl;
	return 0;
}

