//B. Drinks
//https://codeforces.com/contest/200/problem/B

#include <iostream>
#include<vector>
#include<string>
 
using namespace std;
 
int main()
{
    int cases,l,m,i,x,y; 
    double op,suma = 0,aux;
    cin>>cases;
    
    for(i = 0; i < cases; i ++)
    {
        cin>>aux;
        op = float( aux / 100);
        suma += op;
       
    }
    suma /= cases;
    
    suma *= 100;
    printf("%.12f",suma);
    return 0;
}
