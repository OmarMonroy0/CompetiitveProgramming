//A. k-string
//Codeforces Round #135 (Div.2)
//https://codeforces.com/contest/219/problem/A

#include<iostream>
#include<vector>
#include<map>
#include<string>
#define FOR(i,n) for(int i = 0; i < (int)n; i++)
using namespace std;
int main (){
    ios_base::sync_with_stdio(false);
    int l,m,n,o;
    vector<char>aux;
    string s, d,e;
    map<char,int> ma;
    map<char,int>:: iterator it;
    cin>>n;
    cin>>s;
    int tam = s.length();
    if(tam % n != 0){ cout<<"-1"; return 0;}
    FOR(i,tam)
        ma[s[i]]++;
    for(it = ma.begin(); it != ma.end(); it++){
        if((it->second % n) != 0 ){ cout<<"-1"; return 0;}
        FOR(j,(it->second)/n)
            aux.push_back(it->first);
    }
    tam = aux.size();
    FOR(i,n)
        FOR(i,tam)
            cout<<aux[i];
    return 0;
}
