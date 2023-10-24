//B. Missing Bigram
// https://codeforces.com/contest/1618/problem/B

#include <bits/stdc++.h>
#define endl '\n'
#define fast std::ios_base::sync_with_stdio(false); cin.tie (0); cout.tie (0);
using namespace std;
typedef long long ll;
int const num = 7;
void  solve (){
	int i, j , n, k , l , m, cont = 0;
	string s = "", t = "", t1 = "";
	cin >> n;
	for ( i = 0; i < n-2; i ++){
		cin >> s;
		t+= s;
	}
	t1 += t[0];
	for (int i = 1, j = i +1; j < t.length(); j += 2, i+=2){
		if ( t[i] == t [j]){
			t1 += t[i];
			continue ;
		}
	
		string aux = "";
		aux += t[i];
		aux += t[j];
		t1 += aux;
		cont ++;
	
	}	
	t1 += t[t.length()-1];
	if ( cont == 0){
		t1 += t[t.length()-1];
		cout << t1 << endl;
	}
	else 
		cout << t1 << endl;
}
int main (){ fast;
	int t;
	cin >> t;
	while ( t --)
		solve ();	
	return 0;
}
