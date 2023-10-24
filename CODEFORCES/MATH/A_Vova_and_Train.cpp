// A. Vova and Train
// https://codeforces.com/contest/1066/problem/A

#include<iostream>
#define endl '\n'
#include<vector>
typedef long long ll;
 
int solve(){
	ll a,b,c,d,i,j,x,y,cont = 0;
	std::cin>>a>>b>>c>>d;
	return (a/b - d/b + (c-1)/b);	
}
int main (){
	ll n;
	std::cin>>n;
	while(n--){
		std::cout<<solve()<<endl;
	}
	return 0;
}
