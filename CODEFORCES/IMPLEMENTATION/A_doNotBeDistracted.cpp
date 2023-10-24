// https://codeforces.com/contest/1520/problem/A
//A. Do not be distracted
//Codefores Round #719 (Div.3)
#include <iostream>
#include<vector>
#include<map>
#include<string>
using namespace std;
 
int main() {
	int t,l,m,n,x,y,z,i,j;
	string s;
	cin>>t;
	while(t--){
	    cin>>n;
	    cin>>s;
	    bool band =true;
	    //cout<<n<<" "<<s<<"\n";
	    vector<int> c;
	    c.resize(91);
	    for(i = 0; i < n; i++){
	        int aux = s[i];
	        if(c[s[i]]== 0){
	            c[s[i]] = 1;
	            for(i++; i  < n; i ++){
	                if(s[i] != aux){ i--; break;}
	            }
	        }
	        else{
	            band = false;
	            break;
	        }
	    }
	    if(band == true)
	        cout<<"YES\n";
	    else 
	        cout<<"NO\n";
	   s = "";
	}
	return 0;
}
