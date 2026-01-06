#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0;i < n;i++){
        cin >> arr[i];
    } 
    sort(arr, arr + n);
    for (char x : arr){
        cout << x << " ";
    }
     cout << endl;
     sort(arr, arr + n, greater<char>());
     for (char x : arr){
        cout << x << " ";
     }
    return 0;
}