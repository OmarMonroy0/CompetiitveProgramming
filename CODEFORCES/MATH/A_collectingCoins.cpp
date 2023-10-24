// A. collecting Coins
//Codeforces Round #615 (Div.13)
//https://codeforces.com/contest/1294/problem/A

#include<iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main (){
    ll A,B,C,P,missing,result,i,maxn,t;
    cin>>t;
    while(t--){
        cin>>A>>B>>C>>P;
        maxn = max(A,B);
        maxn = max(C,maxn);
        missing = (maxn -A) + (maxn -B ) + (maxn - C);
        P -= missing;
        if(P < 0 || P % 3 != 0)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    
    return 0;
}
