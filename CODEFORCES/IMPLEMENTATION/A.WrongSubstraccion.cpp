//https://codeforces.com/contest/977/problem/A
#include<iostream>
#include<string>
using namespace std;
typedef long long int ll;
int main (){
    ll a,b,c,d,e,f,k;
    string s,t,u,v;
    cin>>s>>k;
    while(k>0){
        a = s.length();
        if(k < (s[a-1] - '0'))
            break;
        if(s[a-1] != '0'){
            b = (s[a-1] -'0');
            k-= b;
            e = stoi(s);
            e -= b;
            s = to_string(e);
        }
        else if(k > 0 && s[a-1] == '0')
        {   
            s.pop_back();
            k--;
        }
    }
    if(k > 0 ){
        int tam = s.length();
        e = stoi(s);
        e -= k;
        s = to_string(e);
        k  = 0;
    }
    cout<<s;
    return 0;
}
