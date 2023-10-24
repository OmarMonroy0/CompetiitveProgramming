//B. Ternary String
//Educational Codeforces Round 87 (Rated for Div.2)
// https://codeforces.com/contest/1354/problem/B

#include <bits/stdc++.h>
#define FOR0(i,n) for(int i = 0; i < (int)n; i ++)
#define FOR1(i,n) for(int i = 1; i < (int)n; i++)
#define endl "\n"
#define _io  ios_base::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
typedef unsigned long long ll;
int solve(){
    ll n = 0, i = 0, j =  0, cont = 0,t = 0,miN = 0,maX = 0;
    cin>>t;
    while(t--){
        fflush(stdin);
        string  s; cin>>s;
        fflush(stdin);
        miN = INT_MAX;
        maX  = 0;
        ll  n = s.length();
        vector<ll> vec(n),nums(4);
        nums[0] = INT_MAX;
        FOR0(i,n){
            vec[i] = (int)s[i] - '0';
            nums[s[i]-'0'] = i+1;
            if(nums[1] >= 1 && nums[2] >= 1 && nums[3] >= 1){
                maX = max(nums[1],nums[2]);
                maX = max(maX,nums[3]);
                miN = min(nums[1],nums[2]);
                miN = min(nums[3],miN);
                nums[0] = min(maX+1-miN, nums[0]);
            }
        }
        cout<<(nums[0] != INT_MAX ? nums[0] : 0)<<endl;
    }
    
}
 
int main() { _io;
    solve();
    return 0;
}
