//A. Polycarp and Sums of Subsequences
// https://codeforces.com/contest/1618/problem/A

#include <bits/stdc++.h>
#define endl '\n'
#define fast std::ios_base::sync_with_stdio(false); cin.tie (0); cout.tie (0);
using namespace std;
typedef long long ll;
int const num = 7;
void  solve (){
	int i, j , k , l , m;
	vector < ll > vec (num-2, 0), result (2,0);
	cin >> result [0] >> result [1];
	k  = result [0] + result [1];
	for ( i = 0; i  < num- 2; i ++)
		cin >> vec [i];
	for ( i = 0; i < num - 2; i ++){
		if ( vec[i] != k ){
			result.push_back (vec[i]);
			break;
		}
	}
	if (vec[0] == vec [1])
		result[2] = vec[0];
	for (int  i : result )
		cout << i << " ";
	cout << endl;
}
 
int main (){ fast;
	int t;
	cin >> t;
	while ( t --)
		solve ();	
	return 0;
}
