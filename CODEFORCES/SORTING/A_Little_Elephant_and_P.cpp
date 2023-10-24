// A. Little Elephant and Problem 
// https://codeforces.com/contest/220/problem/A

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
typedef long long int ll;
typedef pair<int,int> Par;
 
int main()
{
    ll n,m,a,b,i,j,k,cont= 0,po,pc;
    vector <ll> numb,copie;
    vector<Par>coor(2);
    Par aux;
    
    cin>>n;
    for(i = 0; i < n; i ++)
    {
        cin>>a;
        numb.push_back(a);
        copie.push_back(a);
    }   
    sort(copie.begin(),copie.end());
    
    for(i = 0; i < n; i ++)
    {
        if(numb[i] != copie[i])
        {
            cont ++;
            if(cont > 2)
            {
                cout<<"NO";
                return 0;
            }
            coor.push_back({numb[i],copie[i]});
        }
    }
    if(cont == 0)
        cout<<"YES";
    else
    {
        Par aux1,aux2;
        int f1,f2,s1,s2;
        aux1 = coor[0];
        aux2 = coor[1];
        f1 = aux1.first;
        s1 = aux1.second;
        f2 = aux2.first;
        s2 = aux2.second;
        if(cont == 2)
        {
            if(f1 == s2 && s1 == f2)
                cout<<"YES";
        }
        else
            cout<<"NO";
    }
    return 0;
}
