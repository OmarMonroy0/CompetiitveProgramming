//A. Petya and Strings
// https://codeforces.com/contest/112/problem/A

    #include <iostream>
    #include <vector>
    #include<algorithm>
    //<>
    using namespace std;
     
    int main() {
        
        string s,aux;
        int n,i, l,m;
        
        cin>>s>>aux;
        
        n = s.length();
        
        for(i = 0; i < n; i ++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z' )
                s[i] += 32;
            if(aux[i] >= 'A' && aux[i] <= 'Z' )
                aux[i] += 32;
            if(s[i] >aux[i])
            {
                cout<<"1";
                return 0;
            }
            if(s[i] < aux[i])
            {
                cout<<"-1";
                return 0;
            }
        }
        cout<<"0";
    	return 0;
    }
