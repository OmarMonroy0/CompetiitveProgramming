//A. Supercentral Point
// https://codeforces.com/contest/165/problem/A 

#include <iostream>
#include <stdlib.h>
#include <vector>
 
typedef std::pair<int,int> Par;
 
int main ()
{
    int n,m,l,k,i,a,b,nr=0,nl=0,nu=0,nd=0,superPoint = 0;    
    Par coordenada,aux;
    std::vector<Par> vec,vecAux;
    std::cin>>n;
    
    for(i = 0; i < n;i ++)
    {
        std::cin>>a>>b;
        coordenada.first = a;
        coordenada.second = b;
        vec.push_back(coordenada);
    }   
    
    for(auto m: vec )
    {
        coordenada = m;
        nr = nl = nu = nd = 0;
        for(auto k: vec)
        {
            aux = k;
            if(coordenada.first == aux.first && k.second > m.second)
                nr++;
            else if(coordenada.first == aux.first && k.second < m.second)
                nl++;
            else if(coordenada.first  < aux.first && k.second == m.second)
                nu++;
            else if(coordenada.first > aux.first && k.second == m.second)
                nd ++;
        }
        if(nr > 0 && nl > 0 && nu > 0 && nd > 0)
            superPoint++;
    }
    
    std::cout<<superPoint;
 
    return 0;
}
