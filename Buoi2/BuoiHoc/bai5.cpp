#include <iostream>
#include <algorithm>
#include <set>
#include <map>
 using namespace std;
  int main(){
    map<string,int> mp;
    string s;
    while(getline(cin,s)){
        mp[s]++;
    }
 for (auto it : mp){
    cout << it.first <<" "<< it.second<<endl;
 }
    return 0;
  }