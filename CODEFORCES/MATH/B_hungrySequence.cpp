//B. Hungry Sequence
//Codeforces Round #191 (Div.2)
// https://codeforces.com/contest/327/problem/B

//IN THIS PROGRAMM WE ARE CREATING THE ERATOSTHENES' SIEVE 
#include<iostream>
#include<bitset>
#include<vector>
#define FOR0(i,n) for(long long int i = 0; i < (long long int)n; i++)
#define FOR2(i,n) for(long long int i = 2; i<= (long long int)n; i+=2)
#define FOR3(i,n) for(long long int i = 3; i<= (long long int)n; i+=2)
#define FORSQ(j,i,n) for(long long int j = (long long int)i * (long long int)i; j <= (long long int)n; j += (long long int)i)                         
#define MAXN 10000000
using namespace std;
typedef long long int ll;
void Primes(vector<ll> &primes){
    bitset <MAXN> criba;
    criba.set();
    primes.push_back(2);
    FOR2(i,MAXN){criba[i] = 0;}
    FOR3(i,MAXN){
        if(criba[i]){
            primes.push_back(i);
            FORSQ(j,i,MAXN)
                criba[j] = 0;
        }
    }
}
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,t;
    vector<ll> v;
    Primes(v);
    cin>>n;
    FOR0(i,n)
        cout<<v[i]<<" ";
    return 0;
}
