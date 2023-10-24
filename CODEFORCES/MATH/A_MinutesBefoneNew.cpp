//A. Minutes Befores the New Year
//https://codeforces.com/contest/1283/problem/A

#include <iostream>
using namespace std;
 
int main() {
	int n,m,t,i,j;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(n == 0 && m == 0) cout<<0<<endl;
	    else {
	        n++;
	        i = 60-m;
	        j = (24 - n)*60;
	        cout<<i+j<<endl;
	    }
	    
	}
	
	return 0;
}
