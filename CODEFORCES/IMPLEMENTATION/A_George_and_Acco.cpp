//A. George and Accommodation
// https://codeforces.com/contest/467/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
ll Solve(){
    int n,m,l,j,cont = 0;
    cin>>n;
    for(int i = 0; i < n; i ++){
        cin>>l>>m;
        if(m -l >= 2) cont++;
    }
    return cont;
    
}
int main() {
    cout<<Solve();
    return 0;
}
