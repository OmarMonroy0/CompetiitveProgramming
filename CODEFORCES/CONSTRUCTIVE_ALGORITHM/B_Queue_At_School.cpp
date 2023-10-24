//B. Queue At Scool
// https://codeforces.com/contest/266/problem/B

#include<iostream>
#include<vector>
using namespace std;
 
int main ()
{
	unsigned long long int letter,times,i,j;
	vector<char>letters;
	char c,aux;
	
	cin>>letter>>times;
	for(i = 0; i < letter; i++)
	{
		cin>>c;
		letters.push_back(c);	
	}
	for(i = 0; i < times; i ++)
	{
		for(j = 0; j < letter -1; j ++)
		{
			if(letters[j] == 'B' && letters[j +1] == 'G')
			{
				aux = letters[j];
				letters[j] = letters[j+1];
				letters[j+1] = aux;
				j++;
			}
		}
	}
	for(i = 0; i < letter; i ++)
		cout<<letters[i];
	
	return 0; 
}
