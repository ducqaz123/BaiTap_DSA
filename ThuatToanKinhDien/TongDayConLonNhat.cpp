#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n; cin>> n;
 	int a[n];
 	for (int i = 0;i < n;i++) cin >> a[i];
 	int res = -1e9, sum = 0;
 	for (int i = 0;i < n;i++){
 		sum += a[i];
 		res = max(res, sum);
 		if (sum < 0) sum = 0;
	 }
	 cout << sum << endl;
	return 0;
}

