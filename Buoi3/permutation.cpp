#include <bits/stdc++.h>
using namespace std;
int main(){
   string s1,s2;
   cin >> s1 >> s2;
   map<char, int> mp1, mp2;
   if (s1.size() != s2.size()){
    cout << "29 tech "<< endl;
    return 0;
   }
   for (char x : s1){
      mp1[x]++;
   }
   for (char c : s2){
      mp2[c]++;
   }
   if(mp1 == mp2){
    cout << "28tech" << endl;
   } else {
    cout << "29tech" << endl;
   }
    return 0;
}
