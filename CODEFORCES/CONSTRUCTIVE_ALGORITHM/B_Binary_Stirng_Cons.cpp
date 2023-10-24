// B. Binary String Constructing
//https://codeforces.com/contest/1003/problem/B

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#define endl "\n"
using namespace std;
int const n = 101;
int maxN = 0;
string solve(){
    long long l,m,i,j,a,b,x;
    string s ="";
    cin>>a>>b>>x;//a --> zeros
    if(x == 1){
        for(i = 0; i < b; i ++) s += '1';
        for(i = 0; i < a; i ++) s+= '0';
        return s;
    }
        for(i = 0,j = 0;  i < x -1; i++){
            maxN = max(a,b);
            if(j == x) break;
            if(maxN == a){
                s+='0'; 
                j++;
                a--;
                if(j == x) break;
                s+='1';
                j++;
                b--;
                if(j == x) break;
                
            }
            else{
                s += '1';
                b--;
                j++;
                if(j == x) break;
                s += '0';
                a--;
                j++;
            }
        }
        if(s[j-1] == '1'){
            while(b--)
                s += '1';
            while(a--)
                s+= '0';
        }
        else{   
            while(a--)
                s += '0';
            while(b--)
                s+= '1';
        }
 
    return s;
}
int main (){
    cout<<solve();
    return 0;
}
