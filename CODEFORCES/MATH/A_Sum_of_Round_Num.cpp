//A. Sum of Round Numbers
// https://codeforces.com/contest/1352/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
void solve(int k,int p){
    if(k <= 0) return ;
    if((k % 10 )> 0)
        cout<<(k % 10)*pow(10,p)<<" ";
    solve(k/10,p+1);
}
 
int main (){
    int t,n,cont = 0,m;
    cin>>t;
    while(t--){
        cont = 0;
        cin>>n;
        m = n;
        while(n > 0){
            if(n % 10 != 0) cont++;
            n/= 10;
        }
        cout<<cont<<endl;
        solve(m,0);
        cout<<endl;
    }
    return 0;
}
