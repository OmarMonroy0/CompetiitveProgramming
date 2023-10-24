//A. Spy Detected!
//Codeforces Round #713 (Div.3)
//https://codeforces.com/contest/1512/problem/A

#include<iostream>
#include<map>
#include<vector>
using namespace std;
 
int main (){
    int l,m,n,t,aux;
    vector<int> v;
    map<int,int> ma;
    map<int,int>  ::iterator it;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i = 0; i < n; i ++){
            cin>>m;
            ma[m]++;
            v.push_back(m);
        }
        for(it = ma.begin(); it != ma.end(); it++){
            if(it->second == 1)
                aux = it->first;        
        
        }
        for(int i = 0; i < n; i++){
            if(v[i] == aux){ cout<<i+1<<"\n"; break;}
        }
        v.clear();
        ma.clear();
    }
    return 0;
}
