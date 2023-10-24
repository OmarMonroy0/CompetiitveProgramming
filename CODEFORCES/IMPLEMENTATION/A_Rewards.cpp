//A. Rewards
// https://codeforces.com/contest/448/problem/A

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
 
int solve(){
	int a1,a2,a3,b1,b2,b3,n,m,cont = 0, sum = 0;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	sum = a1 + a2 + a3; //cups
	cont = b1 + b2 + b3;//medals
	a1 = sum / 5;
	if( a1 * 5 != sum ) a1++;
	a2 = cont /10;
	if( a2 * 10 != cont) a2++;
	return ( (a1 + a2 <= n) ? 1:0);;
}

int main (){
	cout<<(solve() == 1 ? "YES" : "NO");
	return 0;
}
