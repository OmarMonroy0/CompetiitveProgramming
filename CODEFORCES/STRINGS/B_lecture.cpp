//B. Lecture
//Codeforces Round #284 (Div.2)
//https://codeforces.com/contest/499/problem/B

#include<iostream>
#include<vector>
#include<string>
#define FOR(i,n) for(int i = 0; i < (int)n; i ++)
using namespace std;
typedef pair<string,string> P;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m;
    string s,t,u;
    vector<P> v;
    cin>>n>>m;
    FOR(i,m){
        cin>>s>>t;
        v.push_back({s,t});
    }
    FOR(i,n){
        cin>>u;
        FOR(j,m){
            if(u.compare(v[j].first) == 0 || u.compare(v[j].second) == 0){
                int tam1 = v[j].first.length(),tam2 = v[j].second.length();
                if(tam1 <= tam2)
                    cout<<v[j].first<<" ";
                else
                    cout<<v[j].second<<" ";
                break;
            }
        }
    }
    
    return 0;
}
