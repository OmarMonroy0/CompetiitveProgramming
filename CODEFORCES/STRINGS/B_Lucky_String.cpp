//B. Lucky String
// https://codeforces.com/contest/110/problem/B

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
auto solve () -> void  {
    int n;
    cin >> n;
    vector<char> v(n,'a');
    for (int i = 1; i < n; i += 4) v [i] = 'b';
    for (int i = 2; i < n; i += 4) v[i] = 'c';
    for (int i = 3; i < n; i += 4) v[i] = 'd';
    for(auto x: v)cout << x;
}
auto main () -> int{
    solve ();
    return 0;    
}
