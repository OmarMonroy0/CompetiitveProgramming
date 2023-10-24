//A. Buggy Sorting
// https://codeforces.com/contest/246/problem/A

#include <iostream>
using namespace std;
 
void solve (){
      int n;
      cin >> n;
      if ( n <= 2)
             cout  << -1;
       else {
               for ( int i  = n; i > 0; i--)
                   cout << i << " ";
       }
}
int main () {
           solve();
            return 0;
}
