//B. Airport
// https://codeforces.com/contest/218/problem/B

#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
typedef pair<int,int> P;
P solve(){
    int n,i,j,k,m,x,y,max = 0,min = 0;
    cin>>n>>m;
    vector<int> v(m),v1(m);
    for(i = 0; i < m; i ++){
        cin>>v[i];
        v1[i] = v[i];
    }
    x = n;
    while(n--){
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        max += v[0];
        v[0]--;
        
    }
    while(x--){
        vector<int> v2;
        for(int i =0 ; i < v1.size();i++){
            if(v1[i] == 0) continue;
            v2.push_back(v1[i]);
        }
        sort(v2.begin(),v2.end());
        
        min += v2[0];
        v2[0]--;
        copy(v2.begin(),v2.begin()+v2.size(),v1.begin());
    }
    //cout<<max<<endl;
    return {max,min};
}
 
int main (){
    P m;
    m = solve();
    cout<<m.first<<" "<<m.second;
    return 0;
}
