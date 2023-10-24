//A. Water Melon
//https://codeforces.com/contest/4/problem/A

#include <iostream>
#include <stdlib.h>
 
using namespace std;
 
int main ()
{
	int i,n,m,j;
	cin>>n;
	
	for(i = 1; i < n; i ++)
	{
		for(j =1; j < n; j++)
		{
			if( i + j == n && i %2 == 0 && j %2 == 0)
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}
