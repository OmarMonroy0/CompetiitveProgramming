//C. Registration system
// Codeforces Beta Round #4 (Div.2 Only)
// https://codeforces.com/contest/4/problem/C

#include <iostream>
#include<set>
#include<vector>
#include<string>
#include<map>
using namespace std;
 
int main() {
	long long int n,m,a,b,i,j;
	string s,t;
	map<string,int> ma;
	cin>>n;
	while(n--){
	    cin>>s;
	    if(ma[s]==0)
	        cout<<"OK\n";
	    else 
	        cout<<s<<ma[s]<<"\n";
	   ma[s]++;
	}
	
	return 0;
}
