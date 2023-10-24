// A.Magic Numbers 
// https://codeforces.com/contest/320/problem/A 

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
 
int main ()
{
	std::string s;
	int i,j,n,m,cont4=0,tam =0;
	std::cin>>s;
	tam = s.length();
	if(s[0] == '4')
	{
		std::cout<<"NO";
		return 0;
	}
	for(i = 0; i <  tam; i++)
	{
		if(s[i] != '1' && s[i] != '4')
		{
			std::cout<<"NO";
			return 0;
		}
		if(s[i] == '1')
			cont4 = 0;
		else 
			cont4++;
 
		if(cont4 > 2)
		{
			std::cout<<"NO";
			return 0;
		}
		
	}
	std::cout<<"YES";
	
	return 0;
}
