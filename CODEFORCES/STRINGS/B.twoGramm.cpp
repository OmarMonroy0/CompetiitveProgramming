//https://codeforces.com/contest/977/problem/B
#include<iostream>
#include<map>
#include<string>
#define FOR(i,n) for(int i = 0; i < (int)n; i ++)
using namespace std;
int main(){
    map<string,int> m;
    map<string,int>::iterator it;
    string s,t="",u;
    int a,maxn = -100;
    char ch;
    cin>>a;
    FOR(i,a){
        cin>>ch;
        s.push_back(ch);
    }
    FOR(i,a){
        t = t +  s[i] +s[i+1];
        if(t.length() && t[1] >= 'A' && t[1]<= 'Z')
            m[t] ++;
        t = "";
    }
    for(it = m.begin(); it != m.end(); it++){
        if(it->second > maxn){
            maxn = it->second;
            u = it->first;
        }
        
    }
    cout<<u;
    return 0;
}
