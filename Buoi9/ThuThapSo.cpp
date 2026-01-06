#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int pos[1000005];
 int main(){
 	int n; cin >> n;
 	for (int i = 1;i <=n;i++){
 		int x; cin >> x;
 		pos[x] = i;
	 }
	 int ans = 1;
	 for (int i = 2;i <= n;i++){
	 	if (pos[i] < pos[i-1]){
	 		++ans;
		 }
	 }
	 cout << ans << endl;
	return 0;
}

