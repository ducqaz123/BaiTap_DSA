#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


 int main(){
 	int n; 
 	cout << "Nhap n = "; 
 	cin >> n;
 	int a[n][n];
 	for (int i = 0;i < n;i++){
 		for (int j = 0;j < n;j++){
 			a[i][j] = 0;
		 }
	 } 
 	int i = 0;
 	int j = n / 2;
 	for (int number = 1;number <= n*n;number++){
 		a[i][j] = number;
 		int ni = (i-1+n) % n;
 		int nj = (j+1)%n;
 		if (a[ni][nj] != 0){
 			i = (i+1)%n;
		 } else {
		 	i = ni;
		 	j = nj;
		 }
	 }
	 for (int i = 0;i < n;i++){
	 	for (int j = 0;j < n;j++){
	 		cout << a[i][j] << " ";
		 }
		 cout << endl;
	 }
	return 0;
}

