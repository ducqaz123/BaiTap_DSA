#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


 int main(){
 	int n; cin >> n;
 	int a[100][100];
 	for (int i = 0;i < n;i++){
 		for(int j = 0;j < n;j++){
 			a[i][j] = 0;
		 }
	 }
	int c = (n / 2) + 1, d = n / 2;
	for (int i = 1;i <= n * n;i++){
		if ((i > 1) && (i - 1) % n == 0){
			c++; d++;
		}
		if (c >= n) c = c - n;
		if (d < 0) d = d + n;
		a[d][c] = i;
		c++, d--;
	} 
	 
	for (int i = 0;i < n;i++){
 		for(int j = 0;j < n;j++){
 			cout << a[i][j] << " ";
		 }
		 cout << endl;
	 }
	return 0;
}

