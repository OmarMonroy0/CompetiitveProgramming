//A. Translation
// https://codeforces.com/contest/41/problem/A

#include <iostream>
#include <string>
#include <vector>
 
 
int main() {
    std::string s,reverse;
    int i,j,k,l,tam1,tam2;
    
    std::cin>>s>>reverse;
    tam1 = s.length();
    tam2 = reverse.length();
    if(tam1 != tam2)
    {
        std::cout<<"NO";
        
    }
    else
    {
        for(i = 0,j = tam1-1; i < tam1; i ++,j--)
        {
            if(s[i] !=reverse[j])
            {
                std::cout<<"NO";
                return 0;
            }
        }
        std::cout<<"YES";
    }
	return 0;
}
