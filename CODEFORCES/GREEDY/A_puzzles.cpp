//A. puzzles
//Codeforces Round #196 (Div.2)
//https://codeforces.com/contest/337/problem/A
#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int n,m,x,y,i,j;
    vector<int> v;
    multiset<int> s;
    multiset<int> ::iterator it;
    cin>>n>>m;
    v.resize(m+1);
    for(i = 1; i <= m; i ++){
        cin>>x;
        v[i] = x;
        s.insert(x);
    }
    for(it = s.begin(); it != s.end(); it++){
        int aux  = s.count(*it);
        if(aux  ==  n) { cout<<"0"; return 0;}
    }
    sort(v.begin(), v.end());
    int tam = v.size();
    int menor = 10000;
    for(i = 1; i <= tam-n; i++){
        if(v[i+n-1] - v[i] < menor)
            menor = v[i+n-1] - v[i];
    }
    cout<<menor;
    
    return 0;
}
