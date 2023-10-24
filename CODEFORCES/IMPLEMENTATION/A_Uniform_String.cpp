// A.Uniform String
// https://codeforces.com/contest/1092/problem/A

#include <iostream>
using namespace std;
 
void solve(){
    int n,m,i,j,k;
    cin>>n>>m;
    k = n / m;
    string s = "";
    char c = 'a';
    for(i = 0; i < m; i++){
        for(j = 0;  j < k; j++)
            s += c;
        c++;
    }
    k = n % m;
    c--;
    for(i = 0; i <k; i++)
        s+= c;
    cout<<s<<endl;
}
 
 
int main() {
    int n;
    cin>>n;
    while(n--) solve();
	return 0;
}
