// A. Black Square
// https://codeforces.com/contest/431/problem/A

#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
void solve (){
      int n,m,l,k=0;
      vector<int> v(5,0);
      string s;
      for(int i = 1; i <= 4;i++) 
             cin >> v[i];
       cin >> s;
     for (auto x : s )
          k += v[x-'0'];
     cout << k;
}
int main () {
           solve();
            return 0;
}
