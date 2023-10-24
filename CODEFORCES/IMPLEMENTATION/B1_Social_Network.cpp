//B1. Social Network (easy version)
// https://codeforces.com/contest/1234/problem/B1

#include<iostream>
#include<vector>
#include<algorithm>
using  namespace std;
typedef long long ll;
typedef vector<ll> vll;
void solve(){
	ll n,m,i,j,x,y,sum = 0,s = 0;
	std::cin>>n>>m;
	//Input>>n>>m;
	vll vec(m,0);
	vll :: iterator it;
	//Input>>vec[0];
	std::cin>>vec[0];
	for(i = 1,y = 1; i < m && y < n; y++){
		//Input>>x;
		std::cin>>x;
		it = find(vec.begin(),vec.end(),x);
		if(it == vec.end()){
			vec[i++] = x;
		}
	}
	i = y;
	for(; i < n; i ++){
		//Input>>x;
		std::cin>>x;
		it = find(vec.begin(),vec.end(),x);
		if( it == vec.end()){
			for(j =0; j < m -1; j++)
				vec[j] = vec[j+1];
			vec[m-1] = x;
		}
	}
	for(i =0 ; i < m; i ++)
		if(vec[i] != 0)
			s++;
	//Output<<s<<endl;
	std::cout<<s<<endl;
	for(i = m-1; i >= 0; i --)
		if(vec[i] != 0)
			//Output<<vec[i]<<" ";
			std::cout<<vec[i]<<" ";
}
int main (){ //fast;
		solve();
	return 0;
}
