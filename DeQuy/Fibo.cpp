#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool checkFibo (ll n){
	if (n == 0 || n == 1) return true;
	ll fn2 = 0, fn1 = 1;
	for (int i = 2;i <= 92;i++){
		ll fn = fn1 + fn2;
		if (fn == n) return true;
		fn2 = fn1;
		fn1 = fn;
	}
	return false;
}

bool checkFibo2(ll n){
	int fibo[100];
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2;i <= 92;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for (int i = 0;i <= 92;i++){
		if (fibo[i] == n)
		 return true;
	}
	return false;
}

void inFibo(ll n){
	ll fibo[100];
	fibo[0] = 0; fibo[1] = 1;
	for (int i = 2;i <= 92;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for (int i = 0;i < n;i++){
		cout << fibo[i] << " ";
	}
	cout << endl;
}
 int main(){
 	cout << checkFibo(14) << endl;
 	cout << checkFibo(13) << endl;
 	inFibo(93);
	return 0;
}

