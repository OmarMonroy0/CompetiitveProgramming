// A. Jzzhu and Children
// https://codeforces.com/contest/450/problem/A

#include <iostream>
#include <stdlib.h>
#include <queue>
typedef std::pair<int,int> Par;
 
int main() { 
    
	unsigned long long int i,j,n,c,aux,it,aux1;
    std::queue<Par> cola;
    Par element;
    std::cin>>n>>c;
    
    for(i = 1; i <= n;i ++)
    {
        std::cin>>aux;
        element.first = i;
        element.second = aux;
        cola.push(element);
    }
    while(cola.size() > 1)
    {
        Par frente = cola.front();
        i = frente.first;
        aux = frente.second;
        
        if(aux > c)
        {
            aux -= c;
            frente.first = i;
            frente.second = aux;
            cola.push(frente);
        }
        cola.pop();
    }
    
    Par Last = cola.front();
    aux = Last.first;
    std::cout <<aux;
    return 0;
}
