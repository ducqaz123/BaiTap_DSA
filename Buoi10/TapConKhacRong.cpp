#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[50], ok = 1;
void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		i--;
	}
	if (i == 0) ok = 0;
	else {
		a[i] = 1;
	}
}
 int main(){
 	cin >> n;
 	a[n] = 1;
 	vector<vector<int>> v;
 	while(ok){
 		vector<int> tmp;
 		for (int i = 1;i <= n;i++){
 			if (a[i] == 1){
 				tmp.push_back(i);
			 }
		 }
		 v.push_back(tmp);
 		sinh();
	 }
	 sort(v.begin(), v.end());
	 for (auto it : v){
	 	for (int i = 0;i < it.size();i++){
	 		cout << it[i] << " ";
		 }
		 cout << endl;
	 }
	return 0;
}

