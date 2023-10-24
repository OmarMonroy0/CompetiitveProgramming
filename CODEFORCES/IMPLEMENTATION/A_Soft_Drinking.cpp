//A. Soft Drinking
// https://codeforces.com/contest/151/problem/A

#include <iostream>
#include <vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    
    unsigned long long int n,k,l,c,d,p,nl,np,i,menor,auux;
    int aux1,aux2,aux3,aux4;  
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	auux = (k * l ) / nl;
	aux1 = c * d;
	aux2 = p / np;
	
	auux /= n;
	aux1 /= n;
	aux2 /= n;
	
	menor = auux;
	
	if(aux1 < menor)
	    menor = aux1;
	 if(aux2  < menor)
	    menor = aux2;
	 std::cout<<menor;  
	 
	return 0;
}
