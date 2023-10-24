//A. Twins
// https://codeforces.com/contest/160/problem/A

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#define endl '\n'
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
using namespace std;
 
auto solve () -> int{
	int i,j,n,m;
	float sum = 0.0f,h,g,x,y;
	cin >> n;
	vector<int> v(n,0);
	for (int i  = 0; i <n; i++){
		cin >> v[i];
		sum += v[i];
	}
	x = (float)sum/2.0;
	sum = 0;
	sort(all(v), [] (int x, int y){ return x > y;});
	for(int i = 0; v.size(); i ++){
		sum += v[i];
		if (sum > x)
			return i +1;
	}
	return i;
}
 
auto main () -> int{
	cout << solve();
	return 0;
}
