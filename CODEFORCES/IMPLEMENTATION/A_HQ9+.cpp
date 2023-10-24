//A. HQ9+
// https://codeforces.com/contest/133/problem/A

#include <iostream>
#include <vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    
    string s,aux;
    int n,i, l,m;
    
    cin>> s;
    n = s.length();
    
    
    for(i = 0; i < n; i ++)
    {
        if(s[i] == 'H'|| s[i] == 'Q' || s[i] == '9')
        {
            std::cout << "YES";
            return 0;
        }
    }
    std::cout<<"NO";
	return 0;
}
