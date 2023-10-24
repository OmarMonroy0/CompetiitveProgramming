//A. Nearest Interesting Number
// https://codeforces.com/contest/1183/problem/A

#include<iostream>
using namespace std;
typedef long long ll;
ll solve(){
    ll n, m ,k ,i,j = 0;
    cin>>n;
    m = n;
    string s = "";
    while(1){
        int sum = 0;
        s = to_string(n);
        for(i = 0; i < s.length(); i ++)
            sum += (s[i] - '0');
        if(sum % 4 == 0) break;
        n = stoi(s);
        n++;
        j++;
    }
    return j+m;
}
int main(){
    cout<<solve();
    return 0;
}
