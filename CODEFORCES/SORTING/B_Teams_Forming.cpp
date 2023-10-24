// B.Teams Forming 
// https://codeforces.com/contest/1092/problem/B

#include <bits/stdc++.h>
using namespace std;
int  solve(){
    int n,m,i,j,k,cont = 0;
    cin>>n;
    vector<int> v(n);
    for(i =0 ; i < n; i ++)
        cin>>v[i];
    sort(v.begin(),v.end());
    for(i = 0; i < v.size() -1; i += 2 ){
        k = v[i+1] - v[i];
        cont += k;
    }
    return cont;
}
int main() {
   cout<<solve();
	return 0;
}
