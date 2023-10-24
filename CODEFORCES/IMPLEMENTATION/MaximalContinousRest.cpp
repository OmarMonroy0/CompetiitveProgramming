/* https://codeforces.com/contest/1141/problem/B */
#include<iostream>
#include<vector>
#define FOR(i,n) for(int i = 0; i < (int)n-1; i++)
using namespace std;
typedef long long int ll;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b,c,d,m,n,cont=0,mx = -10;
    bool band = false;
    vector<ll> v;
    cin>>n;
    FOR(i,n+1){
        cin>>a;
        if(a == 1){
            cont ++;
            if(cont > mx)
                mx = cont;
        }
        else cont = 0;
        v.push_back(a);
    }
    if(v[0] == 1 && v[n-1] == 1)
    { 
        FOR(i,n+1){
            if(v[i] == 0)
                break;
            cont++;
        }
    }  
    if(cont > mx)
        mx = cont;
    
    cout<<mx;
    
}
