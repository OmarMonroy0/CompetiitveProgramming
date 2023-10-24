//A. Space Navigation
// https://codeforces.com/contest/1481/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
bool solve(){
    int c1,c2,c3,a1,a2,a3,a4,a5;
    string s,t;
    int i,j,k;
    cin>>c1>>c2;
    cin>>s;
    vector<int> v(4,0);
    a1 = s.length();
    for(i = 0; i < a1; i ++){
        if(s[i] == 'R') v[0]++;
        else if(s[i] == 'U') v[1] ++;
        else if(s[i] == 'L') v[2] ++;
        else v[3] ++;
    }
    if(c1 > 0){
        if(v[0] < c1 )return false;
    }
    if(c1 < 0){
        if(v[2] < (c1*(-1))) return false;
    }
    if( c2 > 0) {
        if(v[1] < c2) return false;
    }
    if( c2 < 0){
        if(v[3] < (c2* (-1))) return false;
    }
    return true;
    
}
int main() { fast;
	int t;
	cin>>t;
	while(t--)
	    cout<<( (solve() == true)? "YES": "NO")<<endl;
	return 0;
}
