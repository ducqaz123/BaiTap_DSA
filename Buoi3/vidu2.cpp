#include <bits/stdc++.h>
using namespace std;
 int main (){
    string s;
    getline(cin,s);
    int tong = 0;
    for (char x : s){
        if (isdigit(x))
        tong += x - '0';
    }
    cout << tong << endl;
    return 0;
 }