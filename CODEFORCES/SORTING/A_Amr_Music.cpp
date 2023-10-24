//A. Amr and Music
// https://codeforces.com/contest/507/problem/A

#include<bits/stdc++.h>
#define endl '\n'
#define all(x) x.begin(),x.end()
#define PB(x,y,z) x.push_back({y,z})
using namespace std;
typedef pair <int,int> P;
 
auto solve () -> void {
    int cont = 0,m,j,n,x,y,k,i;
    cin >> n >> k;
    vector<P> v(n,{0,0});
    vector <int > aux,aux1;
    for (i = 0; i < n; i ++) { cin >> v[i].first; v[i].second = i+1;}
    sort(all(v),[] (P a,P b) { return  a.first < b.first; });
    for (int i = 0; i < n; i ++){
        if(cont + v[i].first  > k) break;
        cont += v[i].first;
        aux.push_back(v[i].second);
    }
    cout << aux.size() << endl;
    for (auto x : aux) cout << x  << " ";
    //cout << endl;
}
 
auto main () -> int {
    //for (int i = 0; i  < 3; i ++)
        solve ();
    return 0;
}
