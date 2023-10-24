//A. System of Equations
// https://codeforces.com/contest/214/problem/A

#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    long long int m,n,a,b,c,r,d,cont=0,i,j;
    cin>>n>>m;
    for(i = 0; i <= m; i++)
    {
        for(j = 0; j<=n; j++)
            if((i*i + j) == n && (j*j + i) == m)
                cont++;
    }
    cout<<cont;
    
    return 0;
}
