//A. A Variety Of Operations
// https://codeforces.com/contest/1556/problem/A

#include<iostream>
#define endl "\n"
using namespace std;
long long solve(){
    long long l,m,i,j;
    cin>>l>>m;
    if((l % 2 == 0 && m % 2 == 0 ) || (l % 2 == 1 && m%2 == 1)){
        if(l == 0 && m == 0) return 0;
        if(l == m) return 1;
        return 2;
    }
    return -1;
}
int main (){
    long long k;
    cin>>k;
    while(k--)
        cout<<solve()<<endl;
    return 0;
}
