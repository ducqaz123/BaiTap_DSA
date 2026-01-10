#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n,m; cin >> n >> m;
 	int a[n], b[m];
	for(int i = 0;i < n;i++) cin >> a[i]; 
	for(int j = 0;j < m;j++) cin >> b[j];
	int i = 0,j = 0;
	while(i < n && j < m){
		if (a[i] < b[j]){
			i++;
		} else if (a[i] >= b[j]) {
			cout << i << " ";
			j++;
		}
	}
	while(j < m){
		cout << n << " ";
		j++;
	}
	while(i < n){
		cout << m << " ";
		i++;
	}
	return 0;
}

