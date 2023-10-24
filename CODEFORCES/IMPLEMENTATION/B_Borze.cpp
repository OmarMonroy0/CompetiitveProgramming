//B. Borze 
// https://codeforces.com/contest/32/problem/B

#include<iostream>
#include<vector>
using namespace std;
 
int main ()
{
	unsigned long long int letter,times,i,j;
	vector<char>letters;
	char c,aux;
	
	while((c = getchar()) != '\n')
		letters.push_back(c);
	times = letters.size();
	for(i = 0; i < times; i++)
	{
		if(letters[i] == '.' )
			cout<<"0";	
		else if(letters[i] == '-')
		{
			if(letters[++i] == '.')
				cout<<"1";
			else if(letters[i] == '-' )
				cout<<"2"; 
		}
	}	
 
	return 0; 
}
