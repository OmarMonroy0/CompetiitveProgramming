//A. Countdown
// https://codeforces.com/contest/1573/problem/A

#include<bits/stdc++.h>
using namespace std;
 
int solve() {
      int n,l,cont = 0;
      string s;
       cin >> n;
       cin >> s;
        l = s.length()-1;
        cont += (s[l]-'0');
        for (int i = l - 1; i >= 0;i--){
            if(s[i] != '0')
                cont += ( s[i] -'0')+1;
        }
        return cont;
}
int main (){
    int t;
   cin >> t;
    while (t--)
          cout << solve () << endl;
 return 0;
}
