//B. Taxi
// https://codeforces.com/contest/158/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main()
{
    int i,n,s,left = 4,suma =0,taxis=0,f1=0,f2=0,f3=0,f4=0;
    vector <int>tax;
    cin>>n;
    
    for(i = 0; i < n; i ++)
    {
        cin>>s;
        if(s== 1)
            f1++;
        else if(s== 2)
            f2 ++;
        else if(s == 3)
            f3++;
        else
            f4++;
    }
    taxis += f4;
    //cout<<taxis<<"   ";
    while(f1 > 0 && f3 > 0)
    {
        f1--;
        f3--;
        taxis ++;    
    }
    taxis += f3;
    //cout<<taxis<<"   ";
    
    while(f1 > 1 && f2 > 0)
    {
        f1--;
        f1--;
        f2--;
        taxis ++;
    }
    
    while(f2 > 1 )
    {
        f2 --;
        f2--;
        taxis ++;
    }
    
    while(f1 > 3)
    {
        f1 -= 4;
        taxis++;
    }
    
    //hasta aqui tenemos todos los enteros 
    f2 = f2 + f1;
    if(f2 > 0)
    {
        f2 /= 4;
        f2 ++;
        taxis +=f2;
    }
    cout<<taxis;
    
    return 0;
}
