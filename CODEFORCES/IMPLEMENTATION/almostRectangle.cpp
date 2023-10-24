/* https://codeforces.com/contest/1512/problem/B 
     ALMOST RECTANGLE */
#include<iostream>
#include<vector>
#include<string>
#define foriN(i,n) for(int i = 0; i < int(n) ; i++)
using namespace std;
typedef pair<int,int> Par;
int main (){
    int t,n,m,j,i;
    int a,b,ox,oy,cont=0,ox1,oy1,rex,rey,rex1,rey1;
    vector<Par> vecPar;
    string s;
    cin>>t;
    
    while(t--){
        cont = 0;
        cin>>n;
        foriN(i,n){
            cin>>s;
            foriN(j,n){
                if(s[j] == '*')
                    vecPar.push_back({i,j});
            }
        }
        ox = vecPar[0].first;
        oy = vecPar[0].second;
        ox1 = vecPar[1].first;
        oy1 = vecPar[1].second;
        if(ox == ox1 || oy == oy1){
                if(ox == ox1){
                    rex = (ox + 1) % n;
                    rex1 = (ox1 + 1) % n;
                    rey = oy;
                    rey1 = oy1;
                }
            else if(oy == oy1){
                    rey = (oy + 1) % n;
                    rey1 = (oy1 + 1) % n;
                    rex = ox;
                    rex1 = ox1;
                }
        }
        else {
            rex = ox;
            rey = oy1;
            rex1 = ox1;
            rey1 = oy;
        }
        foriN(i,n){
            foriN(j,n){
                if( (i == ox && j == oy) || (i == ox1 && j == oy1) || (i == rex && j == rey) || (i == rex1 && j == rey1)){
                    cout<<"*";
                }
                else 
                    cout<<".";
            }
            cout<<"\n";
        }
        vecPar.clear();
    }
    
    return 0;
}
