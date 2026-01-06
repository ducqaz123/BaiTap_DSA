#include <bits/stdc++.h>
using namespace std;
bool F(int a[],int n, int L, int H){
	long long ans = 0;
	for (int i = 0;i < n;i++){
		if (a[i] > H){
			ans += a[i] - H;
		}
	}
	return ans >= L;
}
int main(){
	int n, L;
	cin >> n >> L;
	int a[n];
	int maxVal = INT_MAX;
	for (int i = 0;i < n;i++){
		cin >> a[i];
		maxVal = max(maxVal,a[i]);
	}
	long long ans = 0;
	int left = 0, right = maxVal;
	while(left <= right){
		int mid = (left + right) / 2;
		if (F(a,n,L,mid)){
			ans = mid;
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	cout << ans << endl;
	return 0;
}

