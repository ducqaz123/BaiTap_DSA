#include <bits/stdc++.h>
using namespace std;
 int main(){
    vector<string> v;
    string s;
    getline(cin,s);
    for (int i = 0;i < s.size();i++){
        s[i] = tolower(s[i]);
    }
    stringstream ss (s);
    string token;
    string res = " ";
    while(ss >> token){
        token[0] = toupper(token[0]);
        v.push_back(token);
    }
    for (auto x : v){
        cout << x << " ";
    }

    return 0;
 }