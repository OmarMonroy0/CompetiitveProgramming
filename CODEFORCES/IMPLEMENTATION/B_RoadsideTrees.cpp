//B. Roadside Trees (Simpled Edition)
// https://codeforces.com/contest/265/problem/B
//Codeforces Round #162 (Div.2)

#include<iostream>
#include<vector>
#define FOR(i,n) for(int i = 0; i < (int)n; i ++)
#define FOR1(i,n) for(int i = 1; i < (int)n; i ++)
using namespace std;
void solve(){
    int n,m,i,j,cont = 0;
    cin>>n;
    vector<int> l;
    FOR(i,n){
        cin>>m;
        l.push_back(m);
    }
    cont += l[0];
    FOR1(i,n){
        int aux = l[i] - l[i-1];
        if(aux  < 0 ) aux *= (-1);
        cont += aux;
    }
    cont += (n*2-1);
    cout<<cont;
}
int  main (){
    solve();
    return 0;
}
