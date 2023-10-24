//A. Insomnia Cure
// https://codeforces.com/contest/148/problem/A

#include <iostream>
#include<vector>
#include<bitset>
 
using namespace std;
const unsigned long long int large = 100001;
 
int main()
{
    int k,l,m,n,d,i,number,y;
    bitset<large> dragons;
    
    cin>>k>>l>>m>>n>>d;
    dragons.reset();
    for(i = 1; i <= d; i ++)
    {    
        if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
            dragons[i] = 1;       
    }
   
    y = 0;
    for( i = 1; i <= d; i ++)
        if(dragons[i] == 1)
            y++;
    cout<<y;
    
    return 0;
}
