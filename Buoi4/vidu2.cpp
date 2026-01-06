#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    int n; cin >> n;
    for (int i = 0;i < n;i++){
        string x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (auto x : v){
        cout << x << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<string>());
    for (string x : v){
        cout << x << " ";
    }
    return 0;
}