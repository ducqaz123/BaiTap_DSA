#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k,a[1000], final = 0;
void ktao(){
	for(int i = 1;i <= n;i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if (i == 0){
		final = 1;
	} else {
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i],a[j]);
		reverse(a+i+1,a+n+1);
	}
}
 int main(){
 	cin >> n;
 	for (int i = 1;i <= n;i++){
 		cin >> a[i];
	 }
	int i = n - 1;
	while (i >= 1 && a[i] > a[i+1]){
		i--;
	}
	if (i == 0){
		for (int i = 1;i <= n;i++) cout << i << " ";
	} else {
		int j = n;
		while(a[i] > a[j]) j--;
		swap(a[j],a[i]);
		reverse(a+i+1,a+n+1);
		for (int i = 1;i <= n;i++){
			cout << a[i] << " ";
		}
	}
	return 0;
}

