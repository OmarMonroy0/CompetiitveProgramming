//A. Alphabetical Strings
// https://codeforces.com/contest/1547/problem/B

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define endl "\n"
using namespace std;
int const n = 101;
int maxN = 0;
string s1 = "abcdefghijklmnopqrstuvwxyz";
bool solve(){
    long long l,m,i,j,a,b,x;
    string s ="";
    cin>>s;
    i = 0;
    j = s.length()-1;
    long long k = j;
    bool band = true;
    while(i <= j && band == true){
        if(s1[k] == s[i]){
            i++;
            k--;
        }
        else if(s1[k]  == s[j]){
            j--;
            k--;
        }
        else band = false;
    }
    return band;
}
int main (){
    long long l;
    cin>>l;
    while(l--)
        cout<<(solve() == true ? "YES": "NO")<<endl;
    return 0;
}
