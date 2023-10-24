// A.Soldier and Bananas
// https://codeforces.com/contest/546/problem/A

#include <iostream>
using namespace std;
int main() {
    int k,n,w,i,aux,j;
    cin>>k>>n>>w;
    aux = k *( (w * ( w + 1)) / 2);
    j = aux - n;
    if (j < 0)
        j = 0;
    cout<<j;
    
	return 0;
}
