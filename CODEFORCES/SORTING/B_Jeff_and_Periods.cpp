//B. Jeff and Periods 
// https://codeforces.com/contest/352/problem/B

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<set>
#define endl '\n'
#define endls "\n\n\n"
#define fi first
#define se second
#define PB(x) push_back(x)
#define PB1(x,y) push_back({x,y})
using namespace std;
typedef long long ll;
const ll maxn  = 1e5;
typedef pair <ll, ll> P;
 
auto solve () -> void{
	int n, m,j,k,i,p,cont = 0;
	map <int, vector<int> > mp;
	cin >> n;
	vector <int> v(n,0);
	vector <P> vP;
	for ( i = 0; i < n; i ++)
		cin >> v[i];
	for (i = 0; i < n; i ++)
		mp[v[i]].PB(i+1);
 
	for (auto it  = mp.begin(); it != mp.end(); it++){
		if (it->se.size() == 1){
			vP.PB1(it->fi, 0);
			cont ++;
		}
		else{
			bool b = true;
			vector <int > v;
			for(i = 1; i < it->se.size(); i ++){  //1,3,5,7
				int aux,aux1;
				aux = it->se[i] - it->se[i-1];
				v.PB(aux);
			}
			for (i = 1; i < v.size(); i ++)
				if (v[i] != v[i-1])
					b = false;
			if (b){
				vP.PB1(it->fi,v[v.size()-1]);
				cont ++;	
			}
		}
	}
	cout << cont << endl;
	for (auto x : vP)
		cout << x.fi << " " << x.se << endl;
}
int main (){
	solve ();
	return 0;
}
