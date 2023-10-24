//A. Equidistant Letters
// https://codeforces.com/contest/1626/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int main (){
      string s;
      int n;
       cin >> n;
       while (n--){
           cin >>s;
        sort (s.begin(),s.end());
        cout << s << endl;
        }
        return 0;
}
