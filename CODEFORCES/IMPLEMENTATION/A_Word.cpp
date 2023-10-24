//A. Word
// https://codeforces.com/contest/59/problem/A

#include<iostream>
#include<vector>
#include<stdlib.h>
 
 
using namespace std;
 
void upperCase(vector<char> &cad1,int size)
{
    int i;
	for(i = 0; i <size; i++)
		if(cad1[i] >= 'a' && cad1[i] <= 'z')
			cad1[i] -= 32;
	
}
void lowerCase(vector<char> &cad1,int size)
{
    int i;
	for(i = 0; i < size; i++)
		if(cad1[i] >= 'A' && cad1[i] <= 'Z')
			cad1[i] += 32;
	
}
int main ()
{
	char c;
	int lower=0,upper = 0,i = 0,tam;
	vector<char> cad;
	while((c =getchar()) != '\n')
	{
		if(c>= 'a' && c<= 'z' )	
			lower++;
		else if(c >= 'A' && c <= 'Z' )	
			upper++;
		cad.push_back(c);
		
	}
	tam = cad.size();
	
	if(lower >= upper )
		lowerCase(cad,tam);
	else
		upperCase(cad,tam);
		
	lower = cad.size();//Estoy reutilizando lower
    
    for(i = 0; i < lower; i ++)
        cout<<cad[i];
 
	return 0; 
}
