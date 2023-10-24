//A. Vasya and Football
//Codeforces Round #281 (Div.2)
// https://codeforces.com/contest/493/problem/A
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n,m,i,j,k,l,tim,num;
    char card,host;
    string s1,s2,t1,t2;
    vector<int> home(100),vis(100);
    cin>>s1>>s2;
    cin>>n;
    while(n--){
        cin>>tim>>host>>num>>card;
        if(host == 'h'){
            if(home[num] < 2){
                if(card == 'y'){
                    home[num]+=1;
                    if(home[num] == 2){ cout<<s1<<" "<<num<<" "<<tim<<"\n";}
                }
                else{
                    home[num] = 2;
                    cout<<s1<<" "<<num<<" "<<tim<<"\n";
                }
            }
            
        }
        else if(host == 'a'){
            if(vis[num] < 2){
                if(card == 'y'){
                    vis[num]+=1;
                    if(vis[num] == 2){ cout<<s2<<" "<<num<<" "<<tim<<"\n";}
                }
                else{
                    vis[num] = 2;
                    cout<<s2<<" "<<num<<" "<<tim<<"\n";
                }
            }
            
        }
    }
    
    
    return 0;
}
