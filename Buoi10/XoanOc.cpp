#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n; cin >> n;
 	int a[100][100];
 	for (int i = 0;i < n;i++){
 		for (int j = 0;j < n;j++){
 			a[i][j] = 0;
		 }
	 }
	int dx[4] = {0, 1, 0, -1};
    int dy[4] = {1, 0, -1, 0};
	 int h = n / 2, c = n / 2;
	 int step = 1, val = 1; 
	 a[h][c] = val++;
	 while(val <= n * n){
	 	for (int dir = 0; dir < 4;dir++){
	 		for (int k = 0;k < step;k++){
	 			h += dx[dir];
	 			c += dy[dir];
	 		  if (h >= 0 && h < n && c >= 0 && c < n){
	 		  	a[h][c] = val++;
			   }
			 }
			 if (dir % 2 == 1) step++;
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

