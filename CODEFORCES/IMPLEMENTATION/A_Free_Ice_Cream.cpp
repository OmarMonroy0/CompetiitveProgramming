//A. Free Ice Cream
// https://codeforces.com/contest/686/problem/A

#include <iostream>
#include <stdlib.h>
#include <queue>
 
using namespace std;
 
int main() {
	long long int n,x,a,b,e,f,suma,pkids=0,d;
	cin>>n>>x;
	char l;
	suma = x;
	while(n--)
	{
	   cin>>l;
	   cin>>d;
	    
	   if(l== '+')
	        suma += d;
	   else if(l == '-'){
	       if(suma >= d)
	        suma -= d;
	       else
	            pkids++;
	   }
	}
	cout<<suma<<" "<<pkids;
	return 0;
}
