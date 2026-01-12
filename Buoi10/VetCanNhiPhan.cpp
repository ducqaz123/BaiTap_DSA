#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[1000], final = 0;
void khoitao(){
	for (int i = 1;i <= n;i++){
		a[i] = 0;
	}
} 

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if (i == 0){
		final = 1;
	} else {
		a[i] = 1;
	}
}
 int main(){
 	cin >> n;
 	khoitao();
	while(final == 0){
		for (int i = 1;i <= n;i++) cout << a[i];
		cout << endl;
		sinh();
	}
	return 0;
}

