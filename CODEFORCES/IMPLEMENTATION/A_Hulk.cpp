//A. Hulk
// https://codeforces.com/contest/705/problem/A
#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
typedef long long ll;
void Solve(){
    ll n,i,m,p,q,cont = 0;
    cin>>n;
    string s = "I hate ",s1="I love ",s2 = "that ",s3 = "it ";
    for( i =0; i < n-1; i ++){
        if(i & 1) cout<<s1<<s2;
        else cout<<s<<s2;
    }
    if(i&1 ) cout<<s1<<s3;
    else cout<<s<<s3;
}
int main() {
    Solve();
    return 0;
}
