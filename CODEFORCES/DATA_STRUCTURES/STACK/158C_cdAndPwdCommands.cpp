//158C
//C - Cd and pwd commands
//https://codeforces.com/contest/158/problem/C

#include<iostream>
#include<list>
#include<string>
#define FOR(i,n) for(int i = 0; i < (int)n; i ++)
#define FOR4(i,n) for(int i = 4; i < (int)n; i ++)
#define FOR3(i,n) for(int i = 3; i < (int)n; i ++)
using namespace std;
typedef long long int ll;
 
int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    list<string> l1,l2,l3;
    list<string> ::iterator it;
    string s,t,u;
    ll a,b,c,d,x,y,z;
    cin>>x;
    x++;
    FOR(i,x){
        getline(cin,s);
        t = "";
        int tam = s.length();
        if(s[0] == 'p'){
            if(l1.empty() != true){
                for(it = l1.begin(); it != l1.end(); it++){
                    cout<<"/"<<*it;
                }
            }
            cout<<"/\n";
        }
        else if(s.compare("cd ..")== 0){
            if(l1.empty() != true)
                l1.pop_back();
            
        }
        else if(s[0] == 'c' && s[1] == 'd' && s[3] == '/' && tam == 4){
            while(!l1.empty())
                l1.pop_back();
        }
        else if(s[0] == 'c' && s[1] == 'd' && s[3] == '/' && tam > 4){
            while(!l1.empty())
                l1.pop_back();
            FOR4(i,tam){
                if(s[i] == '/'){
                    if(t.compare("..") == 0)
                        l1.pop_back();
                    else 
                        l1.push_back(t);
                    t = ""; 
                }
                else 
                    t += s[i];
            }
            if(t.compare("..") != 0)
                l1.push_back(t);
            else
                l1.pop_back();
        }
        else if(s[0] == 'c' && s[1] == 'd' && s[3] != '/' ){
            FOR3(i,tam){
                if(s[i] == '/'){
                    if(t.compare("..") == 0)
                        l1.pop_back();
                    else 
                        l1.push_back(t);
                    t = "";    
                }
                else
                   t += s[i]; 
            }
            if(t.compare("..") != 0)
                l1.push_back(t);
            else 
                l1.pop_back();
        }
    }   
    return 0;
}
