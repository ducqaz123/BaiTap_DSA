#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, k, s, cnt = 0;

void Try(vector<int> &v, int pos, int tong){
	if (v.size() == k){
		if (tong == s){
			cnt++;
		}
		return;
	} else {
		for (int i = pos; i <= n;i++){
			v.push_back(i);
			Try(v,pos+1,tong + i);
			v.pop_back();	
		}
	}
}
 int main(){
 	cin >> n >> k >> s;
 	vector<int> v;
 	Try(v,1,0);
 	cout << cnt << endl;
	return 0;
}

