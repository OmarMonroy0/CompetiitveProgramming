//A. Lights Out
// https://codeforces.com/contest/275/problem/A

#include <iostream>
#include<iostream>
#include<vector>
#include<stdlib.h>
 
using namespace std;
typedef pair<int,int> Par;
bool validate(int x, int y)
{
	if( x < 0 || x >= 3 || y < 0 || y >= 3)
		return false;
	return true;
}
 
int main ()
{
	vector<Par> coor = {{0,1},{0,-1},{1,0},{-1,0}};
	unsigned long long int i,j,tam,n,k,x,y;
	vector<vector<int>> ligths = {{1,1,1},{1,1,1},{1,1,1}};
	
	tam = coor.size();
	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j ++)
		{
			cin>>n;
			if(n % 2 != 0)
			{
			    ligths[i][j] = !ligths[i][j];
				for(k = 0; k < tam; k ++)
				{
					x = coor[k].first;
					y = coor[k].second;
					if(validate(i+x,j+y))
					    ligths[i+x][j+y] = !ligths[i+x][j+y];
					    
				}
				
			}
		}
	}
	
	for(i = 0; i < 3; i ++)
	{
	    for(j = 0; j < 3; j++)
	        cout<<ligths[i][j];
	       cout<<endl;
	}
	
	
 
	return 0; 
}
