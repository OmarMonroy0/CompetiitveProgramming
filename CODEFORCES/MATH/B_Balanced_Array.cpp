// https://codeforces.com/contest/1343/problem/B
//B. Balanced Array

#include <iostream>
#include<vector>
#define endl '\n'
using namespace std;
 
void solve(){
    int n,m,i,j,k,sum1 = 0,sum2 = 0;
    cin>>n;
    m = n;
    n /= 2;
    if(n&1){
        cout<<"NO"<<endl;
        return ;
    }
    vector<int> v(n),v1(n);
    cout<<"YES"<<endl;
    
    for(j = 0, i = 2; j < n; j++){
        v[j] = i;
        sum1 += i;
        i+=2;
    }
    for(j = 0, i = 1; j < n-1; j++){
        v1[j] = i;
        sum2 +=i;
        i+=2;
    }
    int dif = sum1 - sum2;
    v1[n-1] = dif; 
    for(auto l : v) cout<<l<<" ";
    for(auto l: v1 )cout<<l<<" ";
    cout<<endl;
}
 
int main() {
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
