//A. Football
// https://codeforces.com/contest/96/problem/A
//Codeforces Beta Round  #77 (Div.2 Only)

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,t;
    int i,j,x,y,n,m,cont=0;
    cin>>s;
    n = s.length();
    if(n < 7)
        cout<<"NO";
    else{
        for(i = 0; i < n-1; i ++){
            if(s[i] == s[i+1])cont++;
            else cont = 0;
            if(cont == 6){ cout<<"YES"; return 0;}
        }
        cout<<"NO";
    }
    
    return 0;
}
