//A. Boy or Girl
// https://codeforces.com/contest/236/problem/A

#include <iostream>
#include <vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    
    unsigned long long int n,i,j,tam,tam1;
    string aux,s;
    cin>>s;
    tam = s.length();
    sort(s.begin(),s.end());
    j = 0;
    for(i = 0; i < tam-1; i ++)
        if(s[i] != s[i+1])    
            j++;
    if(!(j % 2))
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
      
    
	return 0;
}
