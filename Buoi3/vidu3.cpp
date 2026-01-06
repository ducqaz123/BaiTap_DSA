#include <bits/stdc++.h>
using namespace std;
int main(){
    string n,m;
    cin >> n >> m;
    if (n.length() > m.length()){
        cout << "28 tech" << endl;
    } else if (n.size() < m.size()){
        cout << "29 tech" << endl;
    } else {
        if (n > m) cout << "28 tech" << endl;
        else if (n < m) cout << "29 tech" << endl;
        else cout << "30 tech" << endl;
    }
    return 0;
}