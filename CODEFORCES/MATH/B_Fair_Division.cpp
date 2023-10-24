//B. Fair Division
// https://codeforces.com/contest/1472/problem/B

#include<iostream>
#define endl '\n'
using namespace std;
 
typedef long long ll;
bool solve(){
    ll i, j , k ,n , m, sum = 0, cont1 = 0, cont2 = 0;
    cin>>n;
    for(i =0 ; i < n; i ++){
        cin>>k;
        if(k == 1) cont1 ++;
        else cont2 ++;
        sum+= k;
    }
    if(cont1 == 0) return (cont2 % 2 == 0 ? true:false);
    if(cont2 == 0) return (cont1 % 2 == 0 ? true:false);
    return (sum % 2 == 0 ? true : false);
}
 
int main (){
    ll t;
    cin>>t;
    while(t--)
        cout<<(solve() == true? "YES" :"NO")<<endl;
}
