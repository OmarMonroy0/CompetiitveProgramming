// A.Nearly Lucky Number
// https://codeforces.com/contest/110/problem/A

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
 
 
using namespace std;
 
int main ()
{
    unsigned long tam,i,cont =0;
	string s;
	cin>>s;
	tam = s.length();
	
	for(i = 0; i < tam; i ++)
	    if(s[i] == '7' || s[i] == '4')
            cont++;
    if(cont == 4 || cont == 7)
	    cout<<"YES";
    else 
        cout<<"NO";    
	return 0; 
}
