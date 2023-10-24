//A. Playing with Dice
// https://codeforces.com/contest/378/problem/A

#include<bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second
using namespace std;
void solve(){
	int n,m,i,j,k,l;
	int cont1 = 0, cont2 = 0, cont3 = 0;
	cin>>n>>m;
	
	for(i = 1; i <= 6; i++){
		j = abs(i-n);
		k = abs(i-m);
		if(j == k) cont2++;	
		else if(j > k) cont3++;
		else cont1++;
	}
	cout<<cont1<<" " <<cont2<<" "<<cont3;
}
 
int main (){
	solve();
	return 0; 
}
