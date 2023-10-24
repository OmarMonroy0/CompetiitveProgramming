//A. Colorful Stones (Simpified Edition)
// https://codeforces.com/contest/265/problem/A

#include<bits/stdc++.h>
#define endl '\n' 
using namespace std;
 
int solve(){
	string s, s1,s2;
	int n,m,l,i,j,k = 0;
	cin>>s>>s1;
	j = 0;
	for(i = 0; i < s.length(); i ++){
		for(; j < s1.length(); j++){
			if(s[i] == s1[j]){
				k++;
				j++;
				break;
			}
		}
	}
		
	return k+1;
}
int main (){
	cout<<solve();
	return 0;
}
