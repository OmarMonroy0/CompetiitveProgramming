// A. Diverse Team 
// https://codeforces.com/contest/988/problem/A

// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include<unordered_map>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
void solve(){
    int n,m,x,y,z,i;
    cin>>n>>m;
    unordered_map<int,int> ma;
    unordered_map<int,int> ::iterator it;
    vector<int> v(n);
    for(int i = 0; i < n; i ++){
        cin>>v[i];
        ma[v[i]] = i+1;
    }
    if(ma.size() < m){
        cout<<"NO"<<endl;
        return ;
    } 
    cout<<"YES"<<endl;
    for(it = ma.begin(),i = 0;i < m; it++,i++)
        cout<<it->second<<" ";
    cout<<endl;
    return ;
}
 
int main() {
    solve();
    return 0;
}
