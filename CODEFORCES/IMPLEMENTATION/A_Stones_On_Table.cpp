//A. Stones on the Table
//https://codeforces.com/contest/266/problem/A

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
using namespace std;
 
int main ()
{
  unsigned long tam,i,cont =0,n;
	string s;
	cin>>n;
	cin>>s;
	tam = s.length();
	
	for(i = 0; i < tam -1; i ++)
	 {
	     if(s[i] == s[i+1])
	        cont++;
	 }  
	cout <<cont;
	return 0; 
}
