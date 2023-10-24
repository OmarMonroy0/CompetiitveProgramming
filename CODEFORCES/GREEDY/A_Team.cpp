//A. Team 
// https://codeforces.com/contest/231/problem/A

#include<iostream>
using namespace std;
 
int main (){
	int t, n,m,x,cont = 0;
	cin>>t;
	while(t--){
		cin>>n>>m>>x;
		if(n + m + x >= 2) cont++;
	}
	cout<< cont;
	
	return 0;
}
