//A. Candies
// https://codeforces.com/contest/1343/problem/A

#include<iostream>
#include<vector>
#define endl '\n'
using namespace std;
typedef long long ll;
vector<ll> v = {1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,
                        262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,
                        268435456,536870912,1073741824};
 
int main (){
    long long i = 0,n,t;
    bool band;
    for(i = 1; i < v.size(); i ++){
        v[i] = v[i] + v[i-1];
    }
    cin>>t;
    while(t--){
        cin>>n;
        band = true;
        for( i = 1; i < v.size() && n > v[i]; i ++){
            if( n % v[i] == 0 && n != v[i]){
                cout<<n / v[i]<<endl;
                band = false;
                break;
            } 
            
        }
        if(band == true) cout<<1<<endl;
    }
    return 0;
}
