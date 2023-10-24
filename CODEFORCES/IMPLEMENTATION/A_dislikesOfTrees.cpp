// A. Dislike of Threes
// https://codeforces.com/contest/1560/problem/A

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
 
int solve(int k){
    int ll,i,j,cont = 0,x,y,n,m;
    for(i = 1; i <= k;i++){
        if(i % 3 == 0 ||  i % 10 == 3) k++;
    }
    return k;
}
 
int main() {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<solve(n)<<"\n";
    }
    return 0;
}
