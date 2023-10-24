//A. Chips Moving
//https://codeforces.com/contest/1213/problem/A
//Codeforces Round #582 (Div.3)

#include <iostream>
#include<algorithm>
using namespace std;
typedef long long int ll;
int main() {
    ll m,n,a,b,p=0,im=0;
    cin>>n;
    for(int i = 0; i < n; i ++){
        cin>>a;
        if(a&1) im++;
        else p++;
    }
    cout<<min(im,p);
	return 0;
}
