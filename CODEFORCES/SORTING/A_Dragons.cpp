// A. Dragons
// https://codeforces.com/contest/230/problem/A 

#include <iostream>
#include <vector>
#include <stdlib.h>
 
typedef std::pair <int,int> Par;
 
void acomoda(std::vector<Par> &m)
{
    Par aux;
    int i,j,k,l,f,s,tam;
    tam = m.size();
    for(i = 0;i < tam; i ++)
    {
        for(j = 0; j < tam-1; j ++)
        {
             l = m[j].first;
             f = m[j+1].first;
             if(l > f)
             {
                 aux = m[j];
                 m[j] = m[j+1];
                 m[j+1] = aux;
             }
        }
    }
    
}
 
int main ()
{
    std::vector<Par> dragons;
    int s,n,a,b,i,j,l,m,cont=0;
    Par aux;
    
    std::cin>>s>>n;
    dragons.resize(n);
    
    for(i = 0; i < n; i ++)
    {
        std::cin>>a>>b;
        dragons[i].first = a;
        dragons[i].second = b;
    }
    
 
    acomoda(dragons);
    
    
   for(i = 0; i< n;i ++)
   {
       l = dragons[i].first;
       if(s > l)
       {
           s += dragons[i].second;
           cont++;
           //std::cout << s <<" " <<cont<<" " <<l <<std::endl;
       }
       else
        break;
   }
   
    if(cont == n)
        std::cout<<"YES";
    else
        std::cout<<"NO";
    
    
    return 0;
}
