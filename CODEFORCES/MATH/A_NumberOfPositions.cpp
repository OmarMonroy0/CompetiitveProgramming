//A. The number of positions
//Codeforces Beta Round #92 (Div.2 Only)
//https://codeforces.com/contest/124/problem/A

#include<iostream>
#include<vector>
using namespace std;
int main (){
    vector<int> v;
    int n,m,i,j,k,a,b,cont=0;
    cin>>n>>a>>b;
    v.resize(n+1);
    for(i = 0; i <= a; i ++)
        v[i] = -1;
    for(i = n; i >= n-b; i--){
        if(v[i] != -1)
            v[i] = 10;
    }
    for(auto y: v){
        if(y == 10)
            cont++;
    }
        
    cout<<cont;
    
    return 0;
}
