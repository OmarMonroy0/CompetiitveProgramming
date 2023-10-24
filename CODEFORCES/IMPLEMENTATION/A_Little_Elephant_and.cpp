//A. Little Elephant and Rodzil
// https://codeforces.com/contest/205/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
#include<stdlib.h>
 
typedef unsigned long long int large;
typedef std::pair<int,int> Par;
int main ()
{
	large n,k,i,j,m;
	std::vector<Par> cities;
	Par aux,aux1;
 
	std::cin>>n;
	for(i=1; i <= n; i ++)
	{
		std::cin>>m;
		aux.first = m;
		aux.second = i;
		cities.push_back(aux);
	}
	std::sort(cities.begin(),cities.end());
	int tam = cities.size();
	if(tam >= 2)
	{
		if(cities[0].first == cities[1].first)
		{
			std::cout<<"Still Rozdil";
			return 0; 
		}
	}
	std::cout<<cities[0].second;
 
	return 0;
}
