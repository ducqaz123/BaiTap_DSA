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

string tong(string a, string b){
	a = daoNguoc(a), b = daoNguoc(b);
	int da = a.length(), db = b.length();
	string c = string(da+1,'0');
	a = a + '0';
	for (int i = db;i <= da;i++){
		b += '0';
	}
	int t, nho = 0;
	for (int i = 0;i <= da;i++){
		t = a[i] - '0' + b[i] - '0' + nho;
		nho = t/10;
		t = t % 10;
		c[i] = c[i] + t;
	}
	if (c[c.length()-1] == '0') c.erase(c.length() - 1);
	c = daoNguoc(c);
	return c;
}
 int main(){
 	string a,b;
 	cin >> a >> b;
 	if (a.length() > b.length() || a.length() == b.length() && a > b){
 		cout << tong(a,b) << endl;
	 } else {
	 	cout << tong(b,a) << endl;
	 }
	return 0;
}

