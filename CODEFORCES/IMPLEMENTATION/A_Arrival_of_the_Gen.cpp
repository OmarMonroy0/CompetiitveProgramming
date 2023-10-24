//A. Arrival of the General 
// https://codeforces.com/contest/144/problem/A

#include <iostream>
#include <vector>
 
int main() {
    
	unsigned long long int PosMayor,PosMenor,n,menor  = 102,mayor = 0,aux,i,j;
	std::vector<unsigned long long int> a;
	
    std::cin>>n;
    a.resize(n+1);
    
    for(i = 1; i <= n; i ++)
    {
        std::cin>>aux;
        a[i] = aux;
        if(aux <= menor)
        {
            menor = aux;
            PosMenor = i;
        }
        if(aux > mayor )
        {
            mayor = aux;
            PosMayor = i;
        }
    }
	
	int tam,mayorP,menorP,resultado,cont=0;
    tam = a.size();
    
    menor = n - PosMenor;
    mayor = PosMayor -1;
    
    if(PosMayor >  PosMenor)
        mayor--;
 
    if( PosMayor == PosMenor)
        mayor = 0;
         
    std::cout<<menor+mayor;
    return 0;
}
