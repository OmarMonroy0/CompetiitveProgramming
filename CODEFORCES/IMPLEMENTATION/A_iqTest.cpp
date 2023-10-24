//A. IQ TEST
//Codeforces Round #176 (Div.2)
//https://codeforces.com/contest/287/problem/A

#include<bits/stdc++.h>
#define T 4
using namespace std;
int VP(int x, int y){
    if(x < 0 || y < 0 || x >= T || y >= T)
        return false;
    return true;
}
 
int main (){
    int i,j,k,l,m,LR,UD;
    vector<vector<char>> v;
    v.resize(T);
    for(i = 0; i < T; i++)
        v[i].resize(T);
    for(i=0; i < T; i ++)
        for(j = 0; j <T; j++)
            cin>>v[i][j];
    for(i = 0; i < T; i ++){
        for(j = 0; j < T; j ++){
            LR = UD = 0;
            if(v[i][j] == '#'){
                if(VP(i,j+1)){
                    if(v[i][j+1] == '#') LR++;
                }
                if(VP(i,j-1)){
                    if(v[i][j-1] == '#') LR++;
                }
                if(VP(i+1,j)){
                    if(v[i+1][j] == '#') UD++;
                }
                if(VP(i-1,j)){
                    if(v[i-1][j] == '#') UD++;
                }
                if(LR >= 1 && UD >= 1) {cout<<"YES"; return 0;}
            }
        }
    }
    for(i = 0; i < T; i ++){
        for(j = 0; j < T; j ++){
            LR = UD = 0;
            if(v[i][j] == '.'){
                if(VP(i,j+1)){
                    if(v[i][j+1] == '.') LR++;
                }
                if(VP(i,j-1)){
                    if(v[i][j-1] == '.') LR++;
                }
                if(VP(i+1,j)){
                    if(v[i+1][j] == '.') UD++;
                }
                if(VP(i-1,j)){
                    if(v[i-1][j] == '.') UD++;
                }
                if(LR >= 1 && UD >= 1) {cout<<"YES"; return 0;}
            }
        }
    }
    cout<<"NO";
    return 0;
}
