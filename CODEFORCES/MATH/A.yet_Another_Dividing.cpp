// A.Yet Another Dividing in to Teams
//https://codeforces.com/contest/1249/problem/A
// Codeforces Round #595 (Div.3)
#include<iostream>
#include<vector>
#include<algorithm>
#define FOR(i,n) for(int i = 0; i < n; i++)
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,m,l,a,b;
    vector<int> v;
    cin>>t;
    while(t--){
        cin>>n;
        FOR(i,n){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int cont = 0;
        int tam = v.size();
        vector<int> mark ={0};
        mark.resize(tam);
        FOR(i,tam){
            if(mark[i] == 0){
                mark[i] = 1;
                l = v[i];
                FOR(j,tam-1){
                    if(mark[j+1] == 0){
                    if(l+1 != v[j+1]){mark[j+1] = 1; l = v[j+1];}}
                }
                cont++;
            }
        }
        if(cont == 0)
            cont++;
        cout<<cont<<"\n";
        v.clear();
    }
    return 0;
}
