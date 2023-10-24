//B.  Far Relative's Problem 
// https://codeforces.com/contest/629/problem/B

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define endl '\n'
#define fi first
#define se second
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define PB(x,l,k) x.push_back({l,k});
using namespace std;
typedef pair <int, int > P;
auto solve () ->  int{
	int n,i,k,x,y,l,j;
	char c;
	vector<int > v(368,0), male(368,0),fem(368,0);
	cin >> n;
	for (int i = 0; i < n; i ++){
		cin >> c >> x >> y;
		if ( c == 'M'){  male[x] ++; male[y+1] --;	}
		else{fem[x] ++; fem[y+1]--;}
 
	}
	for(int i =1; i <= 367; i ++){
		male[i] = male[i] + male[i-1];
		fem[i] = fem[i] + fem[i-1];
	}
	x = 1e5;
	y = -1e5;
	for (int i = 1; i < 367; i ++){
		x  = min(male[i],fem[i]);
		y = max(y,x);
	}
	return y *2;
	
}	
auto main () -> int{
	cout << solve () ;
	return 0;
}
 
