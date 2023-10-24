//A. Helpful Maths
// https://codeforces.com/contest/339/problem/A

#include <iostream>
#include<vector>
#include<stdlib.h>
#include<string>
#include<algorithm>
using namespace std;
const unsigned long long int large = 100001;
//typedef pair<> Par; 
 
int main()
{
    int  n,tam,i,aux,aux1;
    string c;
    vector<int> operators;
    cin>>c;
    tam = c.length();
    for(i = 0; i < tam; i ++ )
    {
        if(c[i] >= 48 && c[i] <= 57)
        {
            aux = c[i] -'0';
            operators.push_back(aux);
        }
        
    }
    tam = operators.size();
    sort(operators.begin(),operators.end());
    cout<< operators[0];
    for(i = 1; i < tam; i ++)
    {
        cout<<"+"<< operators[i];
    }    
    return 0;
}
