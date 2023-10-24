// A.  Casimir's  String Solitaire
// https://codeforces.com/contest/1579/problem/A

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define endl '\n'
#define all(x)  x.begin(),x.end();
#define For(i,n) for(int i = 0; i < (int)n; i ++)
#define fi first
#define se second
 
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<ll,ll> Pl;
typedef vector<ll> vll;
typedef string st; 
 
bool solve(){
    st s,s1;
    ll a = 0,b = 0, c= 0,i,j,n;
    cin>>s;
    n = s.length();
    For(i,n){
        if(s[i] == 'A') a++;
        else if(s[i] == 'B') b++;
        else if(s[i] == 'C') c++;
    }
    if(a + c == b)
        return true;
    return false;
}
int main(){ fast;
    ll t;
    cin>>t;
    while(t--){
        cout<< ((solve() == true) ? "YES" : "NO")<<endl;
    }
    return 0;
}
