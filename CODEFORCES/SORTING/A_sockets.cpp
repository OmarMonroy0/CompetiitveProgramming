//https://codeforces.com/contest/257/problem/A
//A. Socket
//Codeforces Round #159 (Div.2)

#include<bits/stdc++.h>
using namespace std;
 
int main (){
    int n,m,k,i,j,l,p,cont=0; //n supply line filter , m devices, k sockets
    cin>>n>>m>>k;
    vector<int> v(n);
    for(i=0; i <n; i ++)
        cin>>v[i];
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    while(k > 0){
        if(m <= k){cout<<cont; return 0;}
        if(v[0] >= m){
            cont++;
            cout<<cont; return 0;
        }
        if(v.size() > 0 && k > 1){
            m -= v[0];
            v.erase(v.begin());
            cont++;
        }
        else if(v.size() > 0 && k == 1){
            m-=v[0];
            cont++;
            for(i = 1; i < v.size();  i++){
                if(m <= 0) break;
                m-= v[i] -1;
                cont ++;
            }
        }
        else if( v.size() == 0){
            cout<<-1; return 0;
        }
        k--;
    }
    if(m > 0)cout<<-1;
    else cout<<cont;
 
    return 0;
}
