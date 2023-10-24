// https://codeforces.com/contest/1154/problem/A
// A. Restoring Three Numbers

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main (){
    int x,y,z,w;
    vector<int> v(4);
    for(int i =0; i < 4; i ++)
        cin>>v[i];
    sort(v.begin(),v.end());
    cout<<v[3]-v[0]<<" "<<v[3]-v[1]<<" "<<v[3]-v[2];
    return 0;
}
