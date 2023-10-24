//A. Boys and Girls
//Codeforces Round #154 (Div.2)
// https://codeforces.com/contest/253/problem/A  
#include<bits/stdc++.h>
using namespace std;
string solve(int n,int m){
    string s ="";
    int maxn = max(n,m),band;
    if(n == maxn){ while(n > m){ s+="B"; n--; band = 1;} }
    else{ while(m > n){ s+="G"; m--; band = 2;}}
    for(int i = 0; i < 2*m; i++){
        if(band == 1){ s+="G"; band = 2;}
        else {s+="B"; band = 1;}
    }
    return s;
}
 
int main (){
    int n,m;
    ifstream in("input.txt");
    ofstream out("output.txt");
    in>>n>>m;
    out <<solve(n,m);
}
