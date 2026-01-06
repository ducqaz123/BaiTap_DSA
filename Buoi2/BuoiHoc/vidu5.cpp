#include <bits/stdc++.h>
using namespace std;
 int main(){
    map<string,string> mp;
    int n; cin >> n;
    cin.ignore();
    for (int i = 0;i < n;i++){
        pair<string,string> p;
        getline(cin,p.first);
        getline(cin,p.second);
        mp.insert(p);
    }
    int q; cin >> q;
    cin.ignore();
    while(q--){
        string ma; cin >> ma;
        auto res = mp.find(ma);
        if (res != mp.end()){
            cout << mp[ma] << endl;
        } else {
            cout << "NOT FOUND" << endl;
        }
    }
    return 0;
 }