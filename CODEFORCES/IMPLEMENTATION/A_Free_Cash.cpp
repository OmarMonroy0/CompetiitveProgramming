//A. Free Cash
// https://codeforces.com/contest/237/problem/A

#include <iostream>
#include <vector>
#include <map>
#include <stdlib.h>
 
using namespace std;
typedef pair<int,int> Par;
int main() {
    int n,t,a,b,c,mayor = -10,i;
    map<Par,int>horas;
    Par aux;
    cin>>n;
    for(i = 0; i < n; i ++)
    {
        cin>>a>>b;
        aux.first = a;
        aux.second = b;
        horas[aux] ++;
    }
    for(auto &&[llave,valor]:horas)
        if(valor >  mayor)
            mayor = valor;
    cout<<mayor;
 
	return 0;
}
