//A. Dubstep
// https://codeforces.com/contest/208/problem/A

#include<iostream>
#include<vector>
#include <string>
 
using namespace std;
int main ()
{
    string a;
    vector<char> aux;
    int i,j,k,l,m,n;
    
    cin>>a;
    m  = a.length();
    int cont = 0;
    for(i = 0; i < m; i ++)
    {
        if( i + 1 < m && i + 2 < m)
        {
            if(a[i] == 'W' && a[i+1] =='U' && a[i+2] == 'B')
            {
                
                if(k = aux.size() > 0 && cont == 0 )
                    aux.push_back(' ');
                i +=2;
                cont++;
            }
        
            else
            {
                aux.push_back(a[i]);
                cont = 0;
            }
        }
        else
            break;
    }
    for(;i < m; i ++)
        aux.push_back(a[i]);
    for(auto h: aux)
        cout<<h;
    return 0;
}
