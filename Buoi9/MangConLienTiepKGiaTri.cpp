#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n,k; cin >> n >> k;
 	int a[n];
 	for (int i = 0;i < n;i++) cin >> a[i];
 	map<int,int> mp;
 	int left = 0, right;
 	ll ans = 0;
 	for (right = 0;right < n;right++){
 		mp[a[right]]++;
 		while(mp.size() > k){
 			mp[a[left]]--;
 			if(mp[a[left]] == 0) mp.erase(a[left]);
 			++left;
		 }
		 ans += right - left + 1;
	 }
	 cout << ans << endl;
	return 0;
}

