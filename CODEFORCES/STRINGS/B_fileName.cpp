// Codeforces Round #481 (Div.3)
//B. File Name
// https://codeforces.com/contest/978/problem/B

#include<iostream>
#include<string>
#define FOR(i,n) for(int i = 0; i < (int)n; i++)
using namespace std;
int main (){
    int a,cont=0,r = 0;
    string s;
    cin>>a;
    cin>>s;
    FOR(i,a){
        if(s[i] == 'x') cont++;
        else  cont = 0;
        if(cont > 2)     r++;
    }
    cout<<r;
    return 0;
}
