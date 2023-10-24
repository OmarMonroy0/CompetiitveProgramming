// https://codeforces.com/contest/1512/problem/C
#include <iostream>
#include<vector>
#include<string>
#define For0(i,n) for(int i = 0; i < int(n);i ++)
#define For1(i,n) for(int i  = 0;  i < int(n) / 2; i++)
using namespace std;
typedef long long int ll;
 
void solution(){
	ll t,a,b,c,d,e,f,g,i,j,k,l,n;
	ll cA,cB;
	string s;
	cin>>a>>b;
	cin>>s;
	    int tam = s.length();
	    n = a + b;
	    For0(i,tam){
	        if(s[i] == '0') a--;
	        else if(s[i] == '1') b --;
	        if( a < 0  || b < 0 ){cout<<"-1"; return; }
	    }
	    For0(i,tam){
	        if(s[i] == '0' && s[n-i-1] == '?'){
	            s[n-i-1] = '0';
	            a--;
	            if(a < 0){cout<<"-1"; return;}
	        }
	        else if(s[i] == '1' && s[n-i-1] == '?'){
	            s[n-i-1] = '1';
	            b--;
	            if(b < 0){cout<<"-1"; return;}
	        }
	    }
	    For1(i,tam){
	        if(s[i] == '?' && s[n-i-1] == '?'){
	             if(a>=2){
	                s[i] = '0';
	                s[n-i-1] = '0';
	                a-=2;
	              }
	             else if(b>=2){
	                s[i] = '1';
	                s[n-i-1] = '1';
	                b-= 2;
	             }
	             else{cout<<"-1";return;}
	         }
	    }
	    if(tam & 1){
	        ll half = n /2;
	        if(s[half] == '?'){
	                if(a>0){ s[half] = '0'; a--; }
	                else if(b>0){ s[half] = '1';  b--; }
	            else{cout<<"-1"; return ;}
	        }
	    }
	   For1(i,n){
	    if(s[i] != s[n-i-1]){
	        cout<<"-1"; return ;}
	   }
	   For0(i,n)
	       cout<<s[i];
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll t,ans;
	cin>>t;
	For0(i,t){
	    solution();
	    cout<<"\n";
	}
	return 0;
}
