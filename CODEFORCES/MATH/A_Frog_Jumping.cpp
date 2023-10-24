// A.Frog Jumping
// https://codeforces.com/contest/1077/problem/A

#include <iostream>
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
ll solve(){
    ll n,m,k,l,a,b,c,d;
    cin>>n>>m>>l;
    a = l / 2;
    b = a;
    if(l % 2 == 1) a++;
    return n*a - m *b;
}
int main() {
	ll m;
	cin>>m;
	while(m--)
	    cout<<solve()<<endl;
	return 0;
}
