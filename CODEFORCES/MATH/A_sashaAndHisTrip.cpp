//A. Sasha and his trip
// https://codeforces.com/contest/1113/problem/A
// Codeforces Round #539 (Div.2)

#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,v,m;
    cin>>n>>v;
    if( v >= n-1){ cout<<n-1;return 0;}
    m = n - v;
    m = (m*(m+1))/2;
    cout<<m-1+v;
    return 0;
}
