//A. The Wall
//Codeforces Round #198 (Div.2)
//https://codeforces.com/contest/340/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int  ll;
ll GCD( ll x, ll y ){
    if(y == 0) return x;
    return GCD(y,x%y);
}
ll LCD(ll x, ll y){
    return (x / GCD(x,y))*y;
}
int main (){
    unsigned long long x,y,a,b,i,r1,r2,result,m;
    cin>>x>>y>>a>>b;
    m = LCD(x,y);
    r1 = b / m;
    r2 = (a - 1)/m;
    cout<<r1-r2;
    return 0;
}
