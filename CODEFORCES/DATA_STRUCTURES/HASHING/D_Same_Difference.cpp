//D. Same Difference 
//https://codeforces.com/contest/1520/problem/D

#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
int64_t solve(){
    unordered_map<int64_t,int64_t> m;
    int64_t n,i,j,k,x,y,cont = 0;
    string s,t;
    cin>>n;
    vector<int> v(n+1,0);
    for(i = 1; i <= n; i ++)
        cin>>v[i];
    m[v[1]-1] ++;
    for(i = 2; i <= n; i ++){
        if(m.find(v[i]-i) != m.end()){
            cont += m[v[i]-i];
            m[v[i]-i] ++;
            
        }
        else{
            m[v[i]-i] ++;
        }
    }
    return cont;
}
 
int main (){ fast;
    int l;
    cin>>l;
    while(l--)
        cout<<solve()<<endl;
    return 0;
}
