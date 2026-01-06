#include <bits/stdc++.h>

using namespace std;
string array_to_string(char a[], int n ){
    string s;
     for (int i = 0;i < n;i++){
        s.push_back(a[i]);
     }
     return s;
}
 int main (){
    int n; cin >> n;
    char arr[10001];
    for (int i = 0;i < n;i++){
        cin >> arr[i];
    }
    cout << array_to_string(arr,n) << endl;
    return 0;
 }