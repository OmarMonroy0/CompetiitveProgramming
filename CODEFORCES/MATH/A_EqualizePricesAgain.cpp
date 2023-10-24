//A. Equalize Price Again
// https://codeforces.com/contest/1234/problem/A

#include<iostream>
#include<vector>
using  namespace std;
typedef long long ll;
int  solve(){
	ll n,m,i,j,x,y,sum = 0;
	std::cin>>n;
	for(i = 0; i < n; i ++){
		std::cin>>x;
		sum += x;
	}
	if(sum % n == 0) return sum / n;
	return sum / n + 1;
}
int main (){ //fast;
	int n;
	//Input>>n;
	std::cin>>n;
	while(n--){
		std::cout<<solve()<<endl;
		//Output<<solve()<<endl;
	}	
	return 0;
}
