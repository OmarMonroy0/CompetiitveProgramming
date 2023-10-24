//https://codeforces.com/contest/381/problem/B
//B. Sereja  and Stairs
//Codeforces Round #223 (Div.3)
#include<iostream>
#include<vector>
#include<algorithm>
#define FOR(i,n) for(int i = 0; i < (int)n;i++)
#define FORN(i,n) for(int i = (int)n; i >= 0; i --)
using namespace std;
const long long int maxn = 5001;
int  main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<long int> v(maxn),v1(maxn),aux,aux1;
    long long int i,j,k,l,m,n,x,y,mayor=-1;
    cin>>n;
    FOR(i,n){
        cin>>x;
        if(v[x] == 0){ v[x] = 1; aux.push_back(x);}
        else if(v1[x] == 0){ v1[x] = 1; aux1.push_back(x);}
        if(x > mayor)
            mayor = x;
    }
    sort(aux.begin(),aux.end());
    sort(aux1.begin(),aux1.end());
    int tam = aux.size(),tam1 = aux1.size();
    if(tam > 0){
        if(aux[tam-1] == mayor) aux.pop_back();
    }
    if(tam1> 0){
        if(aux1[tam1-1] == mayor)     aux1.pop_back();
    }
    tam = aux.size();
    tam1 = aux1.size();
    cout<<tam1+tam+1<<"\n";
    FOR(i,tam)
        cout<<aux[i]<<" ";
    cout<<mayor<<" ";
    FORN(i,tam1-1)
        cout<<aux1[i]<<" ";
}
