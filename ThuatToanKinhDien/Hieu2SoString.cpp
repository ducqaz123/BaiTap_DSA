#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string daoNguoc(string s){
	string tmp;
	for (int i = s.length() - 1;i >= 0;i--){
	 tmp += s[i];
	}
	return tmp;
}

string hieu(string a, string b){
	a = daoNguoc(a), b = daoNguoc(b);
	int da = a.length(), db = b.length();
	string c = string(da+1,'0');
	for (int i = db;i <= da;i++){
		b += '0';
	}
	int t, muon = 0;
	for (int i = 0;i <= da;i++){
		t = a[i] - b[i] - muon;
		if (t < 0){
			t += 10;
			muon = 1;
		} else {
			muon = 0;
		}
		c[i] += t;
	int k = c.length() -1;
	while(c[k] == '0') k--;
	if (k == -1) c = "0";
	 else 
	    c.erase(k+1);
	}
	c = daoNguoc(c);
	return c;
}
 int main(){
 	string a,b;
 	cin >> a >> b;
 	if (a.length() > b.length() || a.length() == b.length() && a > b){
 		cout << hieu(a,b) << endl;
	 } else {
	 	cout << hieu(b,a) << endl;
	 }
	return 0;
}

