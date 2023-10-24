//B. Increase and Decrease
// https://codeforces.com/contest/246/problem/B

#include<iostream>
#define endl '\n'
using namespace std;
auto solve () -> int{
	int n,sum = 0,m;
	cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> m;
		sum += m;
	}
	if ( sum % n == 0) return n;
	return n -1 ;
}
int main (){
	cout << solve () << endl;	
	return 0;
}
