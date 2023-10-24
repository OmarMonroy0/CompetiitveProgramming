//B. TMT Document
// https://codeforces.com/contest/1509/problem/B

#include<bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;
 
bool solve(string s){
    ll contT = 0, contM  = 0;
    stack<char> st,st1;
    
    if(s == "TMT") return true;
    if(s[0] == 'M') return false;
    for(auto l: s){
        if(l == 'T') contT++;
        else contM++;
    }
    if(contM *2 != contT) return false;
    //cout<<contM*2<<" "<<contT<<endl;
    for(auto m : s){
        if( m == 'T') st.push(m);
        else {
            if(st.empty()) return false;
            else{
                if( st.top() == 'T') st.pop();
                else if(st.top() == 'M') st.push('M');
            }
        }
    }
    for( ll i = s.length()- 1; i >= 0; i --){
        char  m  = s[i];
        if( m == 'T') st1.push(m);
        else {
            if(st1.empty()) return false;
            else{
                if( st1.top() == 'T') st1.pop();
                else if(st1.top() == 'M') st1.push('M');
            }
        }
    }
    
    return true;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t,m;
    string s;
    cin>>t;
    while(t--){
        cin>>m;
        fflush(stdin);
        cin>>s;
        cout<<(solve(s) == true ? "YES" : "NO")<<endl;
        s = "";
    }
    return 0;
}
