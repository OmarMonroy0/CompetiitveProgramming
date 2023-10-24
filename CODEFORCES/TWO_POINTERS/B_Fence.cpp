//B. Fence 
//Codeforces Round #211 (Div.2)
// https://codeforces.com/contest/363/problem/B

#include <bits/stdc++.h>
#define FOR(i,n) for(int i = 0; i < (int)n; i++)
#define FOR1(i,k,n) for(int i = (int)k; i < (int)n; i++)
#define endl "\n"
using namespace std;
int solve(){
    int n = 0,j = 0, m =0,sum = 0,minor = INT_MAX,k = 0,pos = 0;
    cin>>n>>k;
    vector<int> v(n);
    FOR(i,k){
        cin>>v[i];
        sum += v[i];
    }
    FOR1(i,k,n)  cin>>v[i];
    minor = min(minor, sum);
    for(int i = 1, j = k;  j < n; j ++,i++){
        sum += v[j] - v[i-1];
        if(sum < minor){
            minor = min(minor,sum);
            pos = i;
        }
    }
    return pos+1;
}
int main() {
	cout<<solve();
	return 0;
}
