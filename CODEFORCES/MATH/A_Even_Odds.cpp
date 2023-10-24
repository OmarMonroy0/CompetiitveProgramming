//A. Even Odds
// https://codeforces.com/contest/318/problem/A

#include<iostream>
#include<vector>
 
int main ()
{
	unsigned long long int half,n,k;
	std::cin>>n>>k;
 
	if(n % 2 == 0)
	{
		half = n / 2;
		if(k <= half)
			std::cout<<k*2-1;
		else
			std::cout<<(k-half)*2;
 
	}
	else
	{
		half = n / 2;
		half++;
		if(k <= half)
			std::cout<<k*2-1;
		else
			std::cout<<(k-half)*2;
	}
	return 0;
}
