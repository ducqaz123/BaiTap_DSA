#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int inSo(int n){
	if (n == 0) return 0;
	else {
		int value = inSo(n - 1);
		cout << value;
	}
	return n;
}
 int main(){
 	inSo(9);
	return 0;
}

