//B. Books
#include <bits/stdc++.h>
#define FOR0(i,n) for(int i = 0; i < (int)n; i ++)
#define FOR1(i,n) for(int i = 1; i < (int)n; i++)
#define endl "\n"
#define _io  ios_base::sync_with_stdio(false);  cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
typedef unsigned long long ll;
ll solve(){
    ll n = 0,k= 0, i = 0, j =  0, cont = 0,t = 0,miN = INT_MAX,maX = 0,maxI = 0,minI= INT_MAX;
    const ll nm = 1;
    cin>>n>>k;
    vector<ll> v(n);
    FOR0(i,n)
        cin>>v[i];
    if(n == 1)
        return (v[0] <= k ? 1: 0);
    cont += v[0];
    for(i = 0, j = 0; i < n && j < n;){
        if(i == j){
            if(cont < k){
                maX = max(maX,nm);
                if(j+1 < n){
                    j++;
                    cont += v[j];
                }
                else j++;
            }
            else if(cont >= k){
                cont = 0;
                if(j+1 < n){
                    j++;
                    cont += v[j];
                    i = j;
                }
                else{i++; j++;}
            }
        }
        else{
            if(cont < k){
                maX = max(maX, j - i + 1);
                if(j+1 < n){
                    j++;
                    cont += v[j];
                }
                else j++;
            }
            else if( cont > k){
                cont -= v[i];
                i++;
            }
            else{
                maX = max(maX,j-i+1);
                cont-=v[i];
                i++;
                if(j+1 < n){
                    j++;
                    cont += v[j];
                }
                else j++;
                
            }
            
        }
    }
    return maX;
    
}
 
int main() { _io;
    cout<<solve();
    return 0;
}
