#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, a[1000], final = 0;
void khoitao(){
	for(int i = 1;i <= n;i++) a[i] = 0;
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
 	int b[1000];
 	for (int i = 1;i <= n;i++) cin >> b[i];
 	khoitao();
 	ll ans = LLONG_MAX;
 	while(final == 0){
 		ll s1, s2 = 0;
 		for (int i = 1;i <= n;i++){
 			if (a[i] == 1) s1 += b[i];
 			else s2 += b[i];
		 }
		ans = min(ans, abs(s1-s2));
 		sinh();
	 }
	 cout << ans << endl;
	return 0;
}

