//A. Bit ++
// https://codeforces.com/contest/282/problem/A

#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {        
   int n,i,aux,a,b,c;
   string s;    
   std::cin>>n;
   int cont = 0;
   for(i = 0; i <n; i ++)
   {
        cin>>s;
        if(s[1] == '+')
             cont ++;
        else if(s[1] == '-')
             cont --;     
    }
    cout<<cont;
    return 0;
}
