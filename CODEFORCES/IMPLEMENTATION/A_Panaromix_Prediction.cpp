//A. Panaromix's Prediction
//https://codeforces.com/contest/80/problem/A

#include<iostream>
#include<vector>
#include<bitset>
 
using namespace std;
 
int main ()
{
    int n,i,j,num1,num2;
    bitset<51> primos;
    primos.set();
    n = primos.size();
    
    primos[0] = primos[1] = 0;
    
    for(i = 2; i <= 50; i += 2)
        primos[i] = 0;
    
    for(i = 3; i <= 50; i += 2)
        for( j = i *i; j <= 50; j+=i)
            primos[j] = 0;
   cin>>num1>>num2;
    if(primos[num2] == 0)
    {
        printf("NO");
        return 0;
    }
    
    for(i = num1+1; i < num2; i ++)
    {
        if(primos[i] == 1)
        {
            printf("NO");
            return 0;
        }    
        
    }
    printf("YES");
    
	return 0; 
}
