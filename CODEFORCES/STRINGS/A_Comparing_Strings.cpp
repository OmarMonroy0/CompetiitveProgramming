// A.Comparing Strings
// https://codeforces.com/contest/186/problem/A

#include<iostream>
#include<string>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v(26,0),v1(26,0);
bool solve(){
    string s, s1;
    int i, j,k, cont = 0;
    cin>>s>>s1;
    if(s.length() != s1.length()) return false;
    for(i = 0; i < s.length(); i ++){
        v[s[i]-'a'] = 1;
        v1[s1[i]-'a'] = 1;
    }
    for(i = 0; i < 26; i ++)
        if(v[i] != v1[i]) return false;
    for(i = 0; i < s.length(); i++)
        if(s[i] != s1[i] ) cont++;
    if(cont == 0 || cont == 2) return true;  
    return false;
}
 
int main (){
    cout<< (solve() == true ? "YES" : "NO");
}
