// https://codeforces.com/contest/999/problem/A
// A.Mishka and Contest

#include<bits/stdc++.h>
#define endl '\n'
#include<vector>
#include<algorithm>
#include<deque>
typedef int ll;
 
int solve(){
	int a,b,c,d,n,i,j,x,y,cont = 0,r;
	std::cin>>n>>r;
	std::vector<ll> v(n,0);
	for(i = 0; i < n; i ++)
	    std::cin>>v[i];
	i = 0;
	j = n -1;
	while(i <= j){
	    if(v[i] <= r ) i++;
	    else if(v[j] <= r) j--;
	    else {
	        if(r < v[j] && r < v[i])
	        break;
	    }
	    cont++;
	}
	return cont++;
}
int main (){
	std::cout<<solve();
	return 0;
}
