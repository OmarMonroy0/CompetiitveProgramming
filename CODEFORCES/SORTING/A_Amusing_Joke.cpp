//A. Amusing Joke
// https://codeforces.com/contest/141/problem/A

#include <iostream>
#include <vector>
#include<algorithm>
 
using namespace std;
 
int main() {
    
    unsigned long long int n,i,j,tam,tam1,tam2,a= 0,b=0,c=0;
    std::vector<char> l,m;
    string aux,s,r;
    cin>>s>>aux>>r;
    
    tam = s.length();
    tam1 = aux.length();
    tam2 = r.length();
    for(i = 0;  i < tam; i ++)
        l.push_back(s[i]);
    for(i = 0;  i < tam1; i ++)
        l.push_back(aux[i]);
    for(i = 0;  i < tam2; i ++)
        m.push_back(r[i]);
    
    sort(l.begin(),l.end());
    sort(m.begin(),m.end());
    tam = l.size();
    tam1 = m.size();
    
    if(tam != tam1)
    {
        cout<<"NO";
        return 0;
    }
    
    for(i = 0; i < tam; i ++)
    {
        if(l[i] != m[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
	return 0;
}
