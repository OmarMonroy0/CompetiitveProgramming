//B1 Books Exchange (easy version)
//Codeforces Round #595 (Div.3)
// https://codeforces.com/contest/1249/problem/B1

#include<iostream>
#include<vector>
#define FOR(i,n) for(int i = 1; i <= (int)n;i++)
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,m,c,d,e,j;
    cin>>t;
    while(t--){
        vector<int> v;
        cin>>n;
        v.resize(n+1);
        FOR(i,n){
            cin>>c;
            v[i] = c;
        }
        FOR(i,n){
            int cont=0;
            d = i;
            do{
                d = v[d];
                cont++;
            }while(d != i);
            cout<<cont<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
