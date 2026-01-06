#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(pair<int,int> a, pair<int, int> b){
	if (a.second != b.second)
	 return a.second > b.second;
	return a.first < b.first;
}
bool cmp2(pair<int,int> a, pair<int, int> b){
	return a.second > b.second;
}
 int main(){
 	int n; cin >> n;
 	int a[n];
 	map<int,int> mp;
 	for (int i = 0;i < n;i++){
 		cin >> a[i];
 		mp[a[i]]++;
	 }
	 vector<pair<int,int>> v;
	 for (auto it : mp){
	 	v.push_back(it);
	 }
	 sort(v.begin(), v.end(), cmp);
	 for (auto it : v){
	 	for (int i = 0; i < it.second;i++){
	 		cout << it.first << " ";
		 }
	 }
	 cout << endl;
	vector<pair<int,int>> v1;
	for (int x : a){
		if (mp[x] != 0){
			v1.push_back({x,mp[x]});
			mp[x] = 0;
		}
	}
	stable_sort(v1.begin(), v1.end(), cmp2);
	for (auto it : v1){
		for (int i = 0;i < it.second; i++){
			cout << it.first << " ";
		}
	}
	cout << endl;
	return 0;
}

