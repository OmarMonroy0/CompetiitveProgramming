//A. Repeating Cipher 
// https://codeforces.com/contest/1095/problem/A

#include<iostream>
#include <climits>
#include <vector>
using namespace std;
const int a = INT_MAX;
vector<int> v = {1,3,6,10,15,21,28,36,45,55,66};
void solve(){
    int n,m,j,k;
    string s,t="";
    cin>>n;
    cin>>s;
    int t1 = v.size();
    for(int i = 0; v[i] <= n;i++){
        t += s[v[i]-1];
    }
    cout<<t;
}
 
int main (){
    solve();
    return 0;
}
