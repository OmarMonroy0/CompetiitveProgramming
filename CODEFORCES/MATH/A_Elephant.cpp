//A.  Elephant 
// https://codeforces.com/contest/617/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
ll Solve(){
    int i,n,m,l,j,cont = 0;
    cin>>n;
    m = n / 5;
    cont += m;
    n = n - m*5;
    m = n / 4;
    cont += m;
    n = n - m*4;
    m = n / 3;
    cont += m;
    n = n - m*3;
    m = n / 2;
    cont += m;
    n = n - m*2;
    m = n;
    cont += m;
 
    return cont;
}
int main() {
    cout<<Solve();
    return 0;
}
