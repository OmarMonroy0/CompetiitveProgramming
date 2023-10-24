//A. Pangram
// https://codeforces.com/contest/520/problem/A

#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;
 
typedef long long ll;
 
bool Solve(){
    ll n,m,p,q;
    unordered_map<char,int> mp;
    string s,t;
    cin>>n;
    cin>>s;
    for(int i = 0; i < s.length(); i ++){
        if(s[i] >= 65 && s[i] <= 90)
            s[i] += 32;
    }
    for(int i = 0; i < s.length(); i++)
        mp[s[i]] ++;
   return (mp.size() == 26 ? true: false);
}
 
int main() {
    cout<<(Solve() == true ? "YES":"NO")<<endl;
	return 0;
}
