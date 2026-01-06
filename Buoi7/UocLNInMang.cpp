#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll uocLN(ll n){
	ll ans = 1;
	for (ll i = 1;i * i <= n;i++){
		if (n % i == 0){
			ll other = n / i;
			if (other != n){
				ans = max(ans,other);
			}
		}
	} 
	return ans;
} 
vector<ll> uocMang(vector<ll> arr){
	vector<ll> tmp;
	tmp.reserve(arr.size());
	for (int i = 0;i < arr.size();i++){
		tmp.push_back(uocLN(arr[i]));
	}
    return tmp;
}
 int main(){
 	int n; 
 	cin >> n;
 	vector<ll> v;
 	for (int i = 0;i < n;i++){
 		int x; cin >> x;
 		v.push_back(x);
	}
	vector<ll> result = uocMang(v);
	for (ll x : result){
		cout << x << " ";
	}
	return 0;
}

