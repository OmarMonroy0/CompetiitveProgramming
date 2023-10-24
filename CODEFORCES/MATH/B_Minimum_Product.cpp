// B. Minimun Product
// https://codeforces.com/contest/1409/problem/B

#include <iostream>
#include <stdlib.h>
 
using namespace std;
typedef unsigned long long int ll;
 
 
void aFirst(ll *a,ll *b,ll x,ll y,ll n,ll da,ll db)
{
    while(*a > x &&  n > 0)
    {
        if(n <= da)
        {
            *a-=n;
            n = 0;
        }
        else
        {
            *a -= da;
            n -= da;
        }
    }
    while(*b >y &&  n > 0)
    {
        if(n <= db)
        {
            *b-=n;
            n = 0;
        }
        else
        {
            *b -= db;
            n -= db;
        }
    }
}
 
void bFirst(ll *a,ll *b,ll x,ll y,ll n,ll da,ll db)
{
     while(*b >y &&  n > 0)
    {
        if(n <= db)
        {
            *b-=n;
            n = 0;
        }
        else
        {
            *b -= db;
            n -= db;
        }
    }
    while(*a > x &&  n > 0)
    {
        if(n <= da)
        {
            *a-=n;
            n = 0;
        }
        else
        {
            *a -= da;
            n -= da;
        }
    }
}
 
 
int main() {
    ll t,i,aux,a,b,x,y,n,mayor,difa,difb,comp1,comp,ac,bc,l,k;
    cin>>t;
    
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        l = a;
        k = b;
        difa = a -x;
        difb = b -y;
        aFirst(&a,&b,x,y,n,difa,difb);
        ac= a;
        bc = b;
        a = l;
        b = k;
        bFirst(&a,&b,x,y,n,difa,difb);
        
        if((ac * bc) <= (a*b))
            std::cout << ac*bc <<"\n";
        else
            std::cout << a*b <<"\n";
        
        
    }
    
	return 0;
}
