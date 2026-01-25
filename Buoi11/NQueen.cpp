#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int x[100], cot[100], xuoi[100], nguoc[100], n, cnt = 0;
void Try(int i){
	for (int j = 1;j <= n;j++){
		if (cot[j] == 0 && xuoi[i-j+n] == 0 && nguoc[i+j-1] == 0){
			x[i] = j;
			cot[j] = 1;
			xuoi[i-j+n] = 1;
			nguoc[i+j-1] = 1;
			if (i == n){
				cnt++;
			} else 
			Try(i+1);
			cot[j] = 0;
			xuoi[i-j+n] = 0;
			nguoc[i+j-1] = 0;
		}
	}
}
 int main(){
 	cin >> n;
 	Try(1);
 	cout << cnt << endl;
	return 0;
}

