// 1490A
//https://codeforces.com/contest/1490/problem/A
#include <iostream>
#include<vector>
#define FOR(i,n) for (int i = 0; i < (int)n; i++) 
#define FOR1(i,n) for(int i = 0; i < (int)n-1; i++)
#include<algorithm>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int j,k,l,t,a,b,n,cont,maxN,minN,sum;
	vector<int> vec;
	cin>>t;
	
	while(t--){
	   cin>>a;
	   cont = 0;
	   FOR(i,a){
	       cin>>b;
	       vec.push_back(b);
	   }
	   FOR1(i,a){
	       maxN = max(vec[i],vec[i+1]);
	       minN = min(vec[i],vec[i+1]);
	       if(maxN / minN <= 2  && maxN % minN == 0);
	       else{
	           while(minN*2 < maxN){ minN *= 2; cont ++;}
	       }
	   }
	   cout<<cont<<"\n";
	   vec.clear();
	}
	return 0;
}
