//https://codeforces.com/contest/43/problem/B
// B. Letter
// Codeforces Beta Round #42 (Div.2)
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define FOR(i,n) for(int i = 0; i <(int)n; i ++)
using namespace std;
int main (){
    string s,t;
    vector<int> v;
    int i,j,k,tam1,tam2,cont = 0;
    getline(cin,s);
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    while(s[0] == ' ')
        s.erase(s.begin());
    while(t[0] == ' ')
        t.erase(t.begin());
    tam1 = s.length();
    tam2 = t.length();
    v.resize(tam1);
    FOR(i,tam2){
        FOR(j,tam1){
            if(t[i] == s[j] && v[j] == 0){
                cont++;
                v[j] = 1;
                break;
            }
        }
    }
    if(cont == tam2)
        cout<<"YES";
    else 
        cout<<"NO";
    return 0;
}
