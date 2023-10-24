//A. Word Capitalization
// https://codeforces.com/contest/281/problem/A

#include<iostream>
#include<vector>
#include<stdlib.h>
 
 
using namespace std;
 
int main ()
{
	char c;
	int lower=0,upper = 0,i = 0;
	vector<char> cad;
	while((c =getchar()) != '\n')
	{
		if(c>= 'a' && c<= 'z' && i == 0 )	
			c -=32;
		cad.push_back(c);
		i++;
	}	
	
	lower =  cad.size();
	
	for(i = 0; i < lower;i++ )
		cout<<cad[i];
	return 0; 
}
