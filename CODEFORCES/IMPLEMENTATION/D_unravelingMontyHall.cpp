//D. Unraveling Monty Hall
// https://codeforces.com/gym/101908/problem/D
//2018-2019 ACM-ICPC Brazil Subregional Programming Contest

#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);
#define FOR(i,n) for(unsigned long long i = 0; i < (unsigned long long)n; i ++)
#define FOR0(i,n) for(long int i = 0; i < (long int)n; i++)
#define fi first
#define se second
#define endl "\n"
#define endls "\n\n\n"
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vec;
typedef vector<ull> vecu;
typedef pair<int,int> PAR;
typedef pair<long int,long int> PARI;
typedef pair <float, float> PARF;
ll solve(){
   ll i, j,cont = 0,n,t;
   cin>>t;
   FOR0(i,t){
       cin>>n;
       if(n == 1 ) continue;
       cont++;
   }
   return cont;
}
 
int main() {
    cout<<solve();
	return 0;
}
