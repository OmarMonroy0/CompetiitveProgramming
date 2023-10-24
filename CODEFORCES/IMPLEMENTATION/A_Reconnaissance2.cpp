//A. Reconaissance 2
// https://codeforces.com/contest/34/problem/A

#include<iostream>
#include<stdlib.h>
#include<vector>
#include<string>
 
using namespace std; 
int main ()
{
	int restaMenor=1010,menor1=1010,i,j,n,m,k,number;
	std::vector<int> soldiers;
	typedef pair <int,int > Par;
	Par element;
	std::cin>>n;
	soldiers.resize(n+1);
 
	for(i = 1; i <= n;  i++)
	{
		std::cin>>m;
		soldiers[i] = m;
	}
 
	for(i = 1; i < n; i ++)
	{
		number = soldiers[i] - soldiers[i+1];
		if(number < 0)
			number *= (-1);
		if(number < restaMenor)
		{
			restaMenor = number;
			element.first = i;
			element.second = i +1;
		}
	}
	number = soldiers[1] - soldiers[n];
	if(number < 0)
		number *= (-1);
	
	if(number < restaMenor)
	{
		element.first = 1;
		element.second = n;
	}
	std::cout<<element.first<<" "<<element.second;
	
	return 0;
}
