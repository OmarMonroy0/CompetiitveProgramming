//A. Ultra Fast Mathematician
//https://codeforces.com/contest/61/problem/A

#include <iostream>
#include<vector>
#include<string>
 
using namespace std;
 
int main() {
 
    string s,l;
    int tam1,tam2,i,j,k;
    cin>>s>>l;
    vector<int> sV,lV;
    
    tam1 = s.length();
    tam2 = l.length();
    
    for(i = 0; i < tam1; i ++)
    {
        j = s[i] - '0';
        k = l[i] - '0';
        k = (j + k ) % 2;
        sV.push_back(k);
    
    }
    
    tam1 = sV.size();
    
    for(i = 0; i < tam1; i ++ )
        cout<<sV[i];
	return 0;
}
