// B.Effective Approach
// https://codeforces.com/contest/227/problem/B

#include <iostream>
#include <vector>
#include <unordered_map>
int main ()
{
    long long int n,m,i,a,vasia = 0,petya = 0;
    std::unordered_map<long long int,long long int> ma;
    
    std::cin>>n;
    for(i = 0; i < n; i ++)
    {
        std::cin>>a;
        ma[a] = i;
        
    }
    std::cin>>m;
    for(i = 0; i < m; i ++)
    {
        std::cin>>a;
        
        vasia += ma[a];
        vasia ++;
        petya += n - ma[a];
        
    }
    std::cout<<vasia<<" "<<petya;
    return 0;
}
