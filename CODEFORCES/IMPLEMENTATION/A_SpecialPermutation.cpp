//A.Special Permutation
//Codeforces Round #686 (Div.3)
//https://codeforces.com/contest/1454/problem/A

#include<iostream>
#define FOR(i,n) for(int i = 2; i <= (int)n;  i++)
using namespace std;
int main (){
    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
        FOR(i,n) cout<<i<<" ";
        cout<<"1\n";
    }
    return 0;
}
