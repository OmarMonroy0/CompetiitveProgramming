//A. Calculating Function
// https://codeforces.com/contest/486/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
typedef long long ll;
ll Solve(){
    int64_t n;
    cin>>n;
    return (n % 2 == 0 ? n/2 : ((n+1)/2)*(-1));
}
int main() {
    cout<<Solve();
    return 0;
}
