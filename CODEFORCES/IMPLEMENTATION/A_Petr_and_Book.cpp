//A. Petr  and Book
// https://codeforces.com/contest/139/problem/A

#include <iostream>
#include <stdlib.h>
#include <vector>
#define TAM 8
 
int main() { 
    
	  unsigned long long int i,j,n,c = 0,aux,it,aux1;
    std::vector<int> days (8);
    
    std::cin>>n;
    
    for(i = 1; i <= 7; i ++)
    {
        std::cin>>aux;
        days[i] = aux;
    }
    while( c < n)
    {
        for(i = 1; i <= 7; i ++)
        {
                c += days[i];
                if(c >= n)
                    break;
        }
    
    }
    std::cout<<i;
    return 0;
}
