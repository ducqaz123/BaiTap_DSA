#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
    int n; cin >> n;
    int cnt[10] = {0};
    for (int i = 0;i < n;i++){
    	int x; cin >> x;
    	if (x == 0) cnt[0]++;
    	while (x != 0){
    		cnt[x % 10] = 1;
    		x /= 10;
		}
	}
	for (int i = 0;i < 10;i++){
		if (cnt[i] != 0){
			cout << i << " ";
		}
	}
	return 0;
}

