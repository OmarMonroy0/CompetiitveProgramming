//B. Sort the Array
// codeforces Round #258 (Div.2)
// https://codeforces.com/contest/451/problem/B
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define FOR(i,n) for(int i = 0; i < (int)n; i++)
using namespace std;
typedef long long int ll;
 
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,a,b,c,ox=0,oy=0;
    vector<ll> v;
    cin>>n;
    FOR(i,n){
        cin>>a;
        v.push_back(a);
    }
    vector<ll> sorted(v);
    sort(sorted.begin(),sorted.end());
    FOR(i,n-1){
        if(v[i] >= v[i+1]){
            ox = i;
            i++;
            while( i < n-1 && v[i] >= v[i+1]) i++;
            oy = i;
            break;
        }
    }
    reverse(v.begin()+ox,v.begin()+oy+1);
    FOR(i,n){
        if(v[i] != sorted[i]){cout<<"no"; return 0;}
    }
    cout<<"yes\n";
    cout<<ox+1<<" "<<oy+1;
    return 0;
}
