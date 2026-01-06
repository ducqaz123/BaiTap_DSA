#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 int main(){
 	int n, x;
 	cin >> n >> x;
 	int a[n];
 	for (int i = 0;i < n;i++) cin >> a[i];
 	sort(a,a+n);
 	int l = 0;
 	int r = n - 1;
 	int dem = 0;
 	while(l >= r){
 		if (a[l] + a[r] <= x){
 			++dem;
 			++l; --r;
		 } else {
		 	++dem; --r;
		 }
	 }
	 cout << dem << endl;
	return 0;
}

