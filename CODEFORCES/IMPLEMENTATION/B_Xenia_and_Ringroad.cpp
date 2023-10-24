//B. Xenia and Ringroad
// https://codeforces.com/contest/339/problem/B 
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
    long long int m,n,i,j,k,l,tam,cont,x,y,z,w;
    vector<long long int> a;
    
    cin>>n>>m;
    
    for(i = 0; i < m; i++)
    {
            cin>>k;
            a.push_back(k);
    }
    cont = a[0]-1;
    cout<<endl;
    for(i = 1; i < m;i++)
    {
        if(a[i] < a[i-1])
            cont += (n-a[i-1]+a[i]);
        else if(a[i] > a[i-1])
            cont += (a[i]-a[i-1]);
    }
    cout<<cont;
    return 0;
}
