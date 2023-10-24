//A. kefa and First Steps
// https://codeforces.com/contest/580/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int n,b,mayor, cantidad,i,j,contMayores = 0;
    vector<int>a,mayores;
    
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>b;
        a.push_back(b);
    }
     j= 0;
     int bandera = 0;
    for(i = 0; i < n; i ++)
    {
        bandera = 0;
        if(a[i] >= j)
            contMayores++;
    
        else
        {
            mayores.push_back(contMayores);
            contMayores = 1;
            bandera = 1;
        }
        j = a[i];
    }
    if(!bandera)
        mayores.push_back(contMayores);
    sort(mayores.begin(),mayores.end());
    int tam = mayores.size();
    cout<<mayores[tam-1];
    
    return 0;
}
