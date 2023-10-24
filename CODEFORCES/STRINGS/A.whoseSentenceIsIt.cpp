//A. Whose Sentence Is It
//Codeforces Round #185 (Div.2)
//https://codeforces.com/contest/312/problem/A

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string s = "lala.",t = "miao.",u="",u1,u2;
	int tam,n,i,j;
	cin>>n;
	getchar();
	while(n--){
	    getline(cin,u);
	    u2 = u1 = "";
	    int k = u.length();
	    if(k < 5) cout<<"OMG>.< I don't know!\n";
	    else{
	        for(i = 0; i < 5; i ++) u1 += u[i];
	        for(i = k-5;  i< k;  i++) u2 += u[i];
	        if(!u1.compare(t) && !u2.compare(s))
	            cout<<"OMG>.< I don't know!\n";
	        else if ( !u1.compare(t)) cout<<"Rainbow's\n";
	        else if(!u2.compare(s)) cout<<"Freda's\n";
	        else cout<<"OMG>.< I don't know!\n";
	    }
	    
	}
	
	return 0;
}
