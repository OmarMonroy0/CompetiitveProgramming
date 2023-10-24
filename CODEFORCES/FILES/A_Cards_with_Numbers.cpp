// A. Cards with Numbers
// https://codeforces.com/contest/254/problem/A

#include<iostream>
#include<vector>
#include <algorithm>
#include <unordered_map>
#include <fstream>
#include<bits/stdc++.h>
#define endl '\n'
#define fi first
#define se second
#define PB(x) push_back(x)
#define POP(x) x.pop_back()
using namespace std;
typedef long long ll;
auto solve () -> void{
	ll n,i,j,k;
	cin >> n;
	unordered_map<int,vector<int>> ump;
	vector <int> v(n*2+1,0);
	for (int i = 1; i <= n*2; i++)
		cin >> v[i];
	for (int i = 1; i<= n*2; i ++)
		ump[v[i]].PB(i);
	for (auto it = ump.begin(); it != ump.end(); it ++){
		if (it->se.size() % 2 != 0){
			cout << -1 << endl;
			return ;
		}
	}
	for (auto it = ump.begin(); it != ump.end(); it ++){
		for (int i = 1; i < it->se.size(); i += 2){
			cout << it->se[i-1] << " " << it->se[i] << endl;
		}
	}
}
int main (){
	freopen ("input.txt","r",stdin);
	freopen ("output.txt","w",stdout);
	solve ();
	fclose(stdin);
	fclose(stdout);
	return 0;
}
