//A. Anton and Danik
// https://codeforces.com/contest/734/problem/A 

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
void Solve(){
    int i,n,m,l,j,contA = 0,contB = 0;
    string s;
    cin>>n;
    cin>>s;
    for(i = 0; i < n; i ++){
        if(s[i] == 'A') contA++;
        else contB++;
    }
    if(contA > contB) cout<<"Anton";
    else if(contA < contB) cout<<"Danik";
    else cout<<"Friendship";
    
}
int main() {
    Solve();
    return 0;
}
