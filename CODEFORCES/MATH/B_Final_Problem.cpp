//B. Final Problem 
// https://codeforces.com/gym/102191/problem/B

#include <bits/stdc++.h>
#define T 10
using namespace std;
int main (){
    int i,n,a,menor = 11, menor2=11;cin>>n;
    for(i =0; i < n; i++){
        cin>>a;
        if(a < menor) menor = a;
    }
    for(i =0; i < T; i++){
        cin>>a;
        if(a < menor2) menor2 = a;
    }
    if(menor >= menor2) cout<<10;
    else cout<<menor;
    return 0;
}
