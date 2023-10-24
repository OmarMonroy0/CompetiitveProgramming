//B. Choosing Laptop
// https://codeforces.com/contest/106/problem/B

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef struct laptop{
	int speed;
	int ram;
	int dd;
	int cost;
}laptop;
auto solve () -> int{
	int n,i,j,k,l,m,x,y;
	cin >> n;
	vector<laptop> v(n+1),aux(n+1);
	for(i = 1; i <= n; i ++){
		laptop p;
		cin >> p.speed >> p.ram >> p.dd >> p.cost;
		v[i] = p;
	}
	for (int i = 1; i <= n; i ++){
		laptop p = v[i];
		bool b = true;
		for (int j = 1; j <= n; j++){
			if ( i == j) continue;
			if (v[i].speed  < v[j].speed && v[i].ram < v[j].ram && v[i].dd < v[j].dd){
				b = false;
				p.speed = p.ram = p.dd = p.cost  = -1000;
				break;
			}				
		}
		aux[i] = p;
	
	}
	x = 1e6;
	y = 0;
	for (i = 1; i <= n; i ++){
		if ( aux[i].cost != -1000 && aux[i].cost < x){
			x = aux[i].cost;
			y = i;	
		} 
	}	
	return y;
}
 
auto main () -> int {
	cout << solve ();
	return 0;
}
