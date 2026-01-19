#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 int main(){
 	int n; cin >> n;
 	int a[n+5]; 
 	for (int i = 1;i <= n;i++) a[i] = i;
 	int b[n];
 	for (int i = 1;i <= n;i++) cin >> b[i];
 	int id = 0;
 	do{
 		id++;
 		bool check = false;
 		for (int i = 1;i <= n;i++){
 			if(a[i] == b[i])
 			check = true;
 			break;
		 }
		if (check){
		 cout << id << endl;
		 return 0;	
		} 
	 }while(next_permutation(a+1,a+n+1));
	return 0;
}

