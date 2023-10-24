//A. Is your horseshoes on the other hoof?
// https://codeforces.com/contest/228/problem/A

#include <iostream>
#include <vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    
    unsigned long long int n,i,j,aux;
    vector<unsigned long long int> ns;
    
    for(i = 0; i < 4;i ++)
    {
        cin>>n;
        ns.push_back(n);
    }
    int tam = ns.size();
    sort(ns.begin(),ns.end());
    int cont = 0;
    for(i= 0; i < tam -1; i ++)
    {
        if(ns[i] == ns[i+1])
        {
            cont ++;
        }
        
    }
    
    cout <<cont;  
    
	return 0;
}
