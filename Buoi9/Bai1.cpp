#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n, s;
	cin >> n >> s;
	pair<int,int> a[n];
	for (int i = 0;i < n;i++){
		cin >> a[i].first >> a[i].second;
	} 
	sort(a,a+n);
	for (auto it : a){
		if (it.first >= s){
			cout << "NO" << endl;
			return 0;
		} else {
			s += it.second;
		}
	}
	cout << "YES" << endl;
	return 0;
}

