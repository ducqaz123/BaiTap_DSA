#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp (int a, int b){
	return a > b;
}
 int main(){
 	int n; cin >> n;
 	int a[n];
 	for (int i = 0;i < n;i++){
 		cin >> a[i];
	 }
	 sort(a, a+n, cmp);
	 int docung = a[0];
	 int cnt = 1;
	 for (int i = 1;i < n;i++){
	 	if (docung > 0){
	 		cnt++;
	 		docung = min(docung - 1, a[i]);
		 } else {
		 	break;
		 }
	 }
	 cout << cnt << endl;
	return 0;
}

