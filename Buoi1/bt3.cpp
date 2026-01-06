#include <iostream>
#include <vector>
#include <algorithm>
 using namespace std;
  vector<char> nhap(){
    vector<char> v;
    char c;
     while(cin >> c){
        v.push_back(c);
     }
     return v;
  }
  vector<char> thaydoi(vector<char> v){
    for (char &c : v){
        if (isupper(c)){
            c = tolower(c);
        } else if (islower(c)){
            c = toupper(c);
        }
    }
    return v;
  }
  void in(vector<char> v){
    for (char c : v){
        cout << c << " ";
    }
  }
  int main(){
        vector<char> v = nhap();

        vector<char> res = thaydoi(v);
         in(res);
        
     return 0;
  }