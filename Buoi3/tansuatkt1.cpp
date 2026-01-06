// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     string s;
//     getline(cin,s);
//     int cnt[256] = {0};
//     for (char x : s){
//         cnt[x]++;
//     }
//     for (int i = 0;i < 256;i++){
//         if (cnt[i] != 0){
//             cout << (char)i << " " << cnt[i] << endl;
//         }
//     }
//     return 0;
    
// }
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    getline(cin,s);
    int cnt[256] = {0};
    for (char x : s){
        cnt[x]++;
    }
    for (int i = 0;i < s.length();i++){
        if (cnt[s[i]] != 0){
            cout << s[i] << " " << cnt[s[i]] << endl;
            cnt[s[i]] = 0;
        }
    }
    return 0;
    
}