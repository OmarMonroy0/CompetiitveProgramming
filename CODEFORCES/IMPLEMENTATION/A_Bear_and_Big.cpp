//A. Bear  and Big Brother
// https://codeforces.com/contest/791/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
ll Solve(){
    int i,n,m,l,j,contA = 0,contB = 0;
    cin>>n>>m;
    for(i = 1; ; i ++){
        if(n > m) break;
        n *= 3;
        m *= 2;
    }
    return i;
}
int main() {
    cout<<Solve()-1;
    return 0;
}
