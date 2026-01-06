#include <iostream>
#include <map>
using namespace std;
int main() {
    int n; cin >> n;
    int a[100] = {0};
    for (int i = 0;i < n;i++){
        int x; cin >> x;
        if (x > 0){
            a[x] = 1;
        }
    }
    for (int i = 1;i < 100;i++){
        if (a[i] == 0){
            cout << i << endl;
            break;
        }
    }
    // map<int, bool> mark;
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     if (x > 0) {
    //         mark[x] = true; 
    //     }
    // }
    // int res = 1;
    // while(true){
    //     if (!mark[res]) {
    //         cout << res << endl;
    //         break;
    //     }
    //     res++;
    // }
    return 0;
}