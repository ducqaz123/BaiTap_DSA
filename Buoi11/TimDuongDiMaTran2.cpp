#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n;
int a[100][100];

void nhap(){
	cin >> n;
	for (int i = 1;i <= n;i++){
		for (int j = 1;j <= n;j++){
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j, string s){
	if (i == n && j == n){
		cout << s << endl;
	}
	a[i][j] = 0;
	if (i + 1 <= n && a[i+1][j] == 1){
		s += "D";
		Try(i+1,j,s);
		s.pop_back();
	}
	if (j - 1 >= 1 && a[i][j-1] == 1){
		s += "L";
		Try(i,j-1,s);
		s.pop_back();
	}
	if (j + 1 <= n && a[i][j+1] == 1){
		s += "R";
		Try(i,j+1,s);
		s.pop_back();
	}
	if (i - 1 >= 1 && a[i-1][j] == 1){
		s += "U";
		Try(i-1,j,s);
		s.pop_back();
	}
	a[i][j] = 1;
}
 int main(){
 	nhap();
 	Try(1,1,"");
	return 0;
}

