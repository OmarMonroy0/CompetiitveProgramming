// https://codeforces.com/contest/58/problem/A
// A. char Room
// Codeforces Beta Round  #54 (Div. 2)

#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;
 
int main (){
    string s,t;
    int tam,a,b,c;
    cin>>s;
    tam = s.length();
    t = "hello";
     a = 0;
    for(int i = 0; i < tam; i ++){
        if(s[i] == t[a])
            a++;
    }
    if(a == 5)cout<<"YES";
    else cout<<"NO";
    return 0;
}
