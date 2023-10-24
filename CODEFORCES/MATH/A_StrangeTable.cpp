//A. Strange Table
// https://codeforces.com/contest/1506/problem/A

#include <iostream>
using namespace std;
 
int main() {
    unsigned long long int t,m,n,x,a,b,c,cx,cy,cont;
	cin>>t;
	bool bandera;
	while(t--)
	{
	    cin>>n>>m>>x;
	    cont = 0;
	    bandera = false;
	    cx = ((x-1) / n) + 1;
	    cy = ((x-1) % n) +1;
	    c = cx;
	    cx = cy-1;
	    cy = c-1;
	    
	    b = cx*m + cy +1;
	    cout<<cx*m+cy+1<<"\n";
	}
 
	return 0;
}
