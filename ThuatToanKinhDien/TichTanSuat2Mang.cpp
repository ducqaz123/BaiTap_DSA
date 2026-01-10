#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n,m; cin >> n >> m;
 	int a[n], b[m];
	for(int i = 0;i < n;i++) cin >> a[i]; 
	for(int j = 0;j < m;j++) cin >> b[j];
	int i = 0,j = 0;
	ll res = 0;
	while(i < n && j < m){
		if (a[i] == b [j]){
			int x = a[i];
			int dem1 = 0;
			int dem2 = 0;
			while(i < n && a[i] == x){
				dem1++;
				i++;
			}
			while(j < m && b[j] == x){
				dem2++;
				j++;
			}
			res += (ll)dem1 * dem2;
		} else if (a[i] < b[j]) {
			i++;
		} else j++;
	}
	cout << res << endl;
	return 0;
}

