#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(int a[], int n, int k, double len){
	int ans = 0;
	for (int i = 0;i < n;i++){
		ans += (int)(a[i]/len);
	}
	return ans >= k;
}
 int main(){
 	int n,k; cin >> n >> k;
 	int a[n];
 	for (int i = 0;i < n;i++) cin >> a[i];
 	double left = 0, right = 1e9;
 	double res = 0;
 	for (int i = 1;i <= 80;i++){
 		double mid = (left + right)/ 2;
 		if (check(a,n,k,mid)){
 			res = mid;
 			left = mid;
		 } else {
		 	right = mid;
		 }
	 }
	 cout << fixed << setprecision(6) << res << endl;
	return 0;
}

