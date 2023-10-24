//A. Eugeny and Array
// https://codeforces.com/contest/302/problem/A

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl '\n'
#define fi first
#define se second
#define all(x) x.begin(),x.end()
#define PB(x,y,z) x.push_back({y,z})
using namespace std;
typedef pair <int,int> P;
int ones = 0, onesN = 0;
auto solution () -> bool{
    int l,r,aux,aux1;
    cin >>l >> r;
    aux =  r - l;
    if ( !(aux & 1)) return false;
    aux ++;
    aux1 = aux / 2;
    //cout << ones << "     " << onesN << "  " << aux1 << "   "; 
    return  ( ones >= aux1 && onesN >= aux1);
    
}
auto main () -> int {
    fast;
    int n,m,k;
    cin >> n >> m;
    for(int i = 0; i < n ; i++){
        cin >> k;
        if ( k == 1 ) ones ++;
        else onesN++;
    }
    for (int i = 0; i < m; i ++)
        cout << solution () << endl;
    return 0;
}
