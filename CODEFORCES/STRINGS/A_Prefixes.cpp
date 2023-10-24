// https://codeforces.com/contest/1216/problem/A
// A. Prefixes 

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n,i,j,cont = 0,cont1 = 0;
	string s= "",s1 = "",s2="";
	cin>>n;
	cin>>s;
	for(i = 0; i < s.length()-1;i+=2){
	    if(s[i] == s[i+1]){
	        if(s[i] == 'a') s[i+1] = 'b';
	        else if(s[i] == 'b') s[i+1] = 'a';
	        cont++;
	    }
	}
	cout<<cont<<endl;
	cout<<s;
	return 0;
}
