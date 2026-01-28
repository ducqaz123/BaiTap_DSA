#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, a[50], ok = 1, cnt = 1;
void sinh(){
	int i = cnt;
	int sum = 0;
	while(i >= 1 && a[i] == 1){
		i--;
		sum++;
	}
	if (i == 0) ok = 0;
	else {
		a[i]--;
		sum++;
		int x = a[i];
		while (sum >= x){
			i++;
			a[i] = x;
			sum -= x;
		}
		if (sum > 0){
			i++;
			a[i] = sum;
		}
		cnt = i;
	}
}
 int main(){
	cin >> n;
	a[1] = n;
	vector<vector<int>> v;
	while(ok){
	vector<int> tmp(a+1,a+cnt+1);
	v.push_back(tmp);
	sinh();
 }
 	cout << v.size() << endl;
 	for(auto it : v){
 		for (int i = 0;i < it.size();i++){
 			cout << it[i];
 			if (i < it.size()-1) cout << "+";
		 }
		 cout << endl;
	 }
	return 0;
}
 
