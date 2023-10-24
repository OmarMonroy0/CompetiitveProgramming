//A. Balanced Substring
//  https://codeforces.com/contest/1569/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
typedef long long ll;
P solve(){
    ll m,i,j,k,l,a = 0,b = 0;
    string s,t,u;
    cin>>m;
    cin>>s;
    P p = {-1,-1};
    m = s.length();
    for(i = 0; i < m; i ++){
        if(s[i] == 'a'){
             a++;
             j = i; //ai
        }
        else{
            b++;
            k = i;//bi
        }
        if(a > 0 &&  b >0){
            ll MAX = max(j,k);
            ll MIN = min(j,k);
            p = {MIN+1,MAX+1};
            return p;
        }        
    }
    return p;
}
 
 
int main() {
    ll t;
    cin>>t;
    P p;
    while(t--){
        p = solve();
        cout<<p.first<<" "<<p.second<<endl;
    }
	return 0;
}
