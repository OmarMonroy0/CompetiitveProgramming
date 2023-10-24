// A. Candies and Two Sisters 
// https://codeforces.com/contest/1335/problem/A

#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
 
ll solve(){
   ll i,j,k,x,y,n,m;
   cin>>n;
   if(n <= 2) return 0;
   m = n / 2;
   if(!(n & 1)) m--;
   return m;
}
 
int main (){
    ll t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}
