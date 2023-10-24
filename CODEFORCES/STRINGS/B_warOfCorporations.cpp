//https://codeforces.com/contest/625/problem/B
//B. War of the Corporations
//Codeforces Round #342 (Div.2)

#include<iostream>
#include<string>
#include<set>
using namespace std;
 
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,i,j,k,x,y,cont = 0,aux;
    string s,t,u="";
    cin>>s>>t;
    x = s.size();
    y = t.size();
    for(i = 0; i < x; i ++){
        int aux = i;
        if(s[i] == t[0]){
            for(j = 0; j < y && i < x; i ++,j++){
                if(s[i] == t[j]) u += s[i];
                else break;
            }
            i--;
            if(t.compare(u) == 0)
                cont++;
            else
             i = aux;
            
        }
        u = "";
    }
    cout<<cont;
    return 0;
}
