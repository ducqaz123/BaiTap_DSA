#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n; cin >> n;
	 int a[n];
	 for (int i = 0;i < n;i++){
	 	cin >> a[i];
	 } 
	map<int,int> mp;
	int left = 0, right;
	int ans = 1;
    for(right = 0;right < n;right++){
    	mp[a[right]]++;
    	while(mp[a[right]] > 1){
    		mp[a[left]]--;
    		++left;
		}
		ans = max(ans,right-left + 1);
	}
	cout << ans << endl;
	return 0;
}

