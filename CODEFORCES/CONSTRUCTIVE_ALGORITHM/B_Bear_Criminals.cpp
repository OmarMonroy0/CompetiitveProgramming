// B. Bear and Finding Criminals
// https://codeforces.com/contest/680/problem/B

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int solve(){
	int n,m,i, j ,  k , l,cont = 0;
	cin>>n>>m;
	vector<int> v(n,0);
	for(int &u : v) cin>>u;
	m--;
	for(i = m -1 , j = m +1; i >= 0 && j < n; i--,j++){
		if(v[i] == 1 && v[j] == 1){
			v[i] = 0;
			v[j] = 0;
			cont+=2;	
			
		}
		
	}
	if( i >= 0){
		while(i>= 0){
			if(v[i] == 1)
				cont++;
			i--;
		} 
	}
	else if( j < n){
		while(j < n){
			if(v[j] == 1)
				cont++;
			j++;
		}
	}
	if(v[m] == 1) cont++;
	return cont;
}
int main (){
	cout<<solve();
	return 0;
}
