//B. Present From Lena
//Codeforces Beta Round #89 (Div.2)
//https://codeforces.com/contest/118/problem/B

#include<iostream>
using namespace std;
 
int main(){
    int n,m,l,i,j,a,b;
    cin>>n;
    for(i = 0; i<= n; i++){
        for(j = i*2; j<n*2; j++) cout<<" ";
        for(j = 0; j < i; j++)
            cout<<j<<" ";
        for(; j> 0; j--)
            cout<<j<<" ";
            cout<<j;
        cout<<"\n";
    }
    for(i = 0; i <n; i ++){
        for(j = 0; j < (i+1)*2; j++) cout<<" ";
        for(j = 0; j < n-i-1; j ++) cout<<j<< " ";
        for(; j > 0; j--) cout<<j<<" ";
        cout<<j;
        cout<<"\n";
    }
    
    return 0;
}
