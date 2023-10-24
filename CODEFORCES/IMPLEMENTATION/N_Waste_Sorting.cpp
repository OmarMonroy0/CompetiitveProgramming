// N. Waste Sorting
// https://codeforces.com/contest/1468/problem/N

#include <iostream>
#include <algorithm>
#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
 
bool solve(){
    int c1,c2,c3,a1,a2,a3,a4,a5;
    int cont;
    cin>>c1>>c2>>c3>>a1>>a2>>a3>>a4>>a5;
    if( a1 <= c1){ c1 -= a1; a1 = 0;}
    else return false;
    if(a2 <= c2){ c2 -= a2; a2 = 0;}
    else return false;
    if(a3 <= c3) { c3 -= a3; a3 = 0; }
    else return false;
    if(c1 > 0){
        int miN = min(c1,a4);
        c1 -= miN;
        a4 -= miN;
    }
    //cout<<c1<< " "<<c2<<" "<<c3<<" ";
    if(c3 > 0){
        int miN = min(c3,a4);
        c3 -= miN;
        a4 -= miN;
    }
    if(c2 > 0){
        int miN = min(c2,a5);
        c2 -= miN;
        a5 -= miN;
    }
    if(c3 > 0){
        int miN = min(c3,a5);
        c3 -= miN;
        a5 -= miN;
    }
    //cout<<a1<<" "<<a2<<" "<<a3<<" "<<a4<<" "<<a5;
    if(a1 > 0 || a2> 0 || a3 > 0 ||a4 > 0 || a5 > 0)
        return false;
    return true;
}
int main() { fast;
	int t;
	cin>>t;
	while(t--)
	    cout<<( (solve() == true)? "YES": "NO")<<endl;
	return 0;
}
