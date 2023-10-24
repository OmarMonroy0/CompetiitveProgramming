// A. Hexadecimal's Theorem 
// https://codeforces.com/contest/199/problem/A 


#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
typedef long long int ll;
 
ll Fibo(vector<ll> &l,ll k)
{
    long long int i,aux;
    l.push_back(0);
    l.push_back(1);
    l.push_back(1);
    for(i = 3; l[i-1] <= k; i ++)
        l.push_back(l[i-1]+l[i-2]);
    l.pop_back();
    i--;
    return i;
}
ll encontrado(vector<ll> m,ll target,ll r)
{
    int l = 0,half;
    while(r >= l)
    {
        half = l + (r-l)/2;
        if(m[half] > target )
            r = half -1;
        else if(m[half] < target)
            l = half + 1;
        else if(m[half] == target)
            return half;
    }
    
}
 
 
int main ()
{
    ll n,a,b,c,d,e,f,i,j,k;
    vector<ll> fi;
    cin>>n;
    
    if(n == 0 )
    {
        cout<<"0 0 0";
        return 0;
    }
    else if (n == 1)
    {
        cout<<"1 0 0";
        return 0;
        
    }
    else if( n == 2)
    {
        cout<<"1 1 0";
        return 0;
    }
    
    d = Fibo(fi,n);
    
    if(n == 3)
    {
        cout<<"1 1 1";
        return 0;
    }
    
    else
    {
        c = encontrado(fi,n,d);
        if(fi[c-4] + fi[c-3]+fi[c-1] == n)
            cout<<fi[c-4]<<" "<<fi[c-3]<<" "<<fi[c-1];
    
        else
            cout<<"I'm too stupid to solve this problem";
    }
    return 0;
}
