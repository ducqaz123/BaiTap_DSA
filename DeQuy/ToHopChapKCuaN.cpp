#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gt(int n){
	ll res = 1;
	for (int i = 1;i <= n;i++){
		res *= i;
	}
	return res;
}
ll tohop(int n, int k){
	ll ngt = gt(n);
	ll kgt = gt(k);
	ll nkgt = gt(n - k);
	return ngt/(kgt * nkgt);
}

ll tohop2 (int n, int k){
	int res = 1;
	k = min(k, n - k);
	for (int i = 1;i <= k;i++){
		res *= n - i + 1;
		res /= i;
	}
	return res;
}

ll tohop3(int n, int k){
	ll c[n + 1][n + 1];
	for (int i = 0;i <= n;i++){
		for (int j = 0;j <= i;j++){
			if(j == 0 || i == j) c[i][j] = 1;
			else c[i][j] = c[i-1][j] + c[i-1][j-1];
		}
	}
	return c[n][k];
}
 int main(){
 	cout << tohop(10,2) << endl;
 	cout << tohop2(10,2) << endl;
 	cout << tohop3(10,2) << endl;
	return 0;
}

