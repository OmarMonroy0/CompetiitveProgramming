//https://codeforces.com/contest/1213/problem/B
//B. Bad Prices
//Codeforces Round #582 (Div.3)

#include<iostream>
#include<stack>
using namespace std;
typedef long long int ll;
int main (){
    ll a,b,c,t,m,n,top,aux,cont = 0,i;
    stack<ll> pila;
    cin>>t;
    while(t--){
        cin>>n;
        cont = 0;
        for(i = 0; i < n; i ++){
            cin>>a;
            pila.push(a);
        }
        a = pila.top();
        pila.pop();
        while(!pila.empty()){
          top = pila.top();
          if(a < top) cont++;
          else a = top;
          pila.pop();
        }
        cout<<cont<<"\n";
    }
    return 0;
}
