#include <bits/stdc++.h>
using namespace std;

bool F(int a[], int n, int t, long long time){
	long long ans = 0;
	for (int i = 0;i < n;i++){
		ans += time / a[i];
	}
	return ans >= t;
} 
 int main(){
 	int n,t; 
	cin >> n >> t;
 	int a[n];
 	int minVal = INT_MAX;
 	for (int i = 0;i < n;i++){
 		cin >> a[i];
 		minVal = min(minVal,a[i]);
	 } 
	long long left = 0, right = (long long)t * minVal;
	long long ans = -1;
    while(left <= right){
    	long long mid = (left + right) / 2;
    	if(F(a,n,t,mid)){
    		ans = mid;
    		right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
 	cout << ans << endl;
	return 0;
}

