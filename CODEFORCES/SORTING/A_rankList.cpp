//A. Rank List
//Codeforces Round #113 (Div.2)
//https://codeforces.com/contest/166/problem/A

#include<bits/stdc++.h>
#define FOR(i,n) for(int i = 0; i < (int)n; i ++)
using namespace std;
typedef pair<int,int> Even;
vector<Even> v;
vector<int> v1;
int main (){
    int l,m,n,k,i,j,a,b,c;
    cin>>n>>m;
    v.resize(n);
    v1.resize(n);
    for(i=0;i<n; i ++){ cin>>v[i].first; cin>>v[i].second;}
    int tam = v.size();
    FOR(i,tam){
        FOR(j,tam-1){
            Even aux;
            if(v[j].first < v[j+1].first ){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
            if(v[j].first == v[j+1].first){
                if(v[j].second > v[j+1].second ){
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux;
                }
            }
        }
    }
    int cont=1;
    for(i=0,a=0;i<tam-1;i++){
        if(v[i].first == v[i+1].first && v[i].second == v[i+1].second){
            cont++;
            continue;
        }    
        for(j = a; j <= i; j++)
            v1[j] = cont;
        a = i+1;
        cont = 1;
    }
    for(j = a; j < tam; j ++)
        v1[j] = cont;
    
    //for(auto p: v1) cout<<p<<"\n";
    cout<<v1[m-1]++;
    return 0;
}
