//A. Football
// https://codeforces.com/contest/43/problem/A

#include <iostream>
#include<string>
#include<vector>
#include<map>
 
int main() {
    std::string s,reverse;
    int n,i,j,k,mayor = 0;
    std::map<std::string,int> chains;
    
    std::cin>>n;
    
    for(i = 0; i < n; i ++)
    {
        std::cin>>s;
        chains[s] ++;
    }
    
    for(auto &&[key,value] :chains)
    {
        if(value > mayor)
            mayor = value;
    }
    
    for(auto &&[key,value] :chains)
    {
        if(value == mayor)
        {
            std::cout <<key;
            break;
        }
    }
	return 0;
}
