//A. Squats
// https://codeforces.com/contest/424/problem/A

#include<bits/stdc++.h>
#define endl '\n'
typedef long long ll;
using namespace std;
void solve(){
	int n, i,m,l,k,si = 0,stand = 0;
	string s,s1;
	cin>>n>>s;
	for(i = 0; i < n; i ++){
		if(s[i] == 'x')  si++;
		else stand ++;
	}
	if(si == stand )
		cout<<0<<endl<<s;
	else{
		int h = n / 2;
		int M = max(si, stand);
		l = M - h;
		int cont = 0;
		if(M == si){
			for(i = 0; i  < n; i ++){
				if(s[i] == 'x'){
					s[i] = 'X';
					cont++;
				}
				if(cont == l) break;
			}
		
		}
		else{
			for(i = 0; i < n; i ++){
				if(s[i] == 'X'){
					s[i] = 'x';
					cont ++;
				}
				if(cont == l) break;
			}
		}
		cout<<l<<endl<<s;	
	
	}
	
 
}
int main (){
	solve();
	return 0;
}
