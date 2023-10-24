//B1. Wonderful Coloring - 1
//https://codeforces.com/contest/1551/problem/B1

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);
#define FOR(i,n) for(unsigned long long i = 0; i < (unsigned long long)n; i ++)
#define endl "\n"
#define endls "\n\n\n"
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<ull> vecu;
 
void solve(){
    ull n,m,a,b,c,k=0,i,j;
    string s,t="",u;
    char arr[27] = {0};
    cin>>s;
    sort(s.begin(),s.end());
    m = s.length();
    FOR(i,m){
        if(arr[(int)s[i] - 97] < 2){
            t += s[i];
            arr[(int)s[i] - 97] ++;
        }
    }
    m = t.length();
    cout<<m/2<<endl;
}
 
int main() { fast;
    ull t,n;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
