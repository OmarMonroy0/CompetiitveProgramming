// Codeforces Round #202 (Div. 2)
//A. Cinema Line
//https://codeforces.com/contest/349/problem/A
#include<iostream>
#define For(i,n) for(int i = 0 ; i < (int)n; i ++)
using namespace std;
typedef long long int ll;
int main (){
    ll n,m,o,p,c = 0, cl;
    cin>>n;
    ll d50 = 0,d25 = 0,d100 = 0;
    For(i,n){
        cin>>m;
        if(m == 25)
            d25++;
        else if(m == 50){
            d50++;
            d25--;
        }
        else if (m == 100){
            if(d50 > 0){
                d50--;
                d25--;}
            else{
                d25 -= 3;
            }
        }
        if(d25 < 0){ cout<<"NO"; return 0;}
            
    }
    cout<<"YES";
    return 0;
}
