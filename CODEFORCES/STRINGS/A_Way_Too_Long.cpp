//A. Way Too Long Words 
// https://codeforces.com/contest/71/problem/A

#include <iostream>
#include <vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    
    unsigned long long int n,i,j;
    vector<string> ns;
    string aux;
    cin>>n;
    
    for(i = 0; i < n; i ++)
    {
        cin>>aux;
        ns.push_back(aux);
        
    }
    int tam,tam1;
    for(i = 0; i < n; i ++)
    {
        tam = ns[i].length();
        if(tam> 10)
            cout<<ns[i][0]<<tam -2<<ns[i][tam-1]<<endl;
        else
            cout<<ns[i]<<endl;
    }
 
	return 0;
}
