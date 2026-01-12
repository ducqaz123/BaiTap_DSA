#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k , a[1000], final = 0;
void khoitao(){
	for (int i = 1;i <= k;i++){
		a[i] = i;  // 1, 2, 3, 4...
	}
} 

void sinh(){
	int i = k; //1 2 3, 3 4 5 
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if (i == 0){
		final = 1;
	} else {
		a[i]++;
		for (int j = i+1;j <= k;j++){
			a[j] = a[j-1] + 1;
		}
	}
}
 int main(){
 	int b[1005];
 	cin >> n >> k;
 	for (int i = 1;i <= k;i++) cin >> b[i];
 	khoitao();
    int i = k;
    int c = 0, d = 0;
	while(final == 0){
		++c;
		bool check = true;
		for (int j = 1;j <= k;j++){
			if (a[j] != b[j]){
				check = false;
			}
		}
		if (check == true){
			d = c;
		}
		sinh();
	}
	cout << c << " " << d << endl;
	cout << c - d + 1 << endl;
	return 0;
}

