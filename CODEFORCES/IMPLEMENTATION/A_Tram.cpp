//A. Tram.cpp
// https://codeforces.com/contest/116/problem/A

 #include <iostream>
#include<vector>
#include<stdlib.h>
 
using namespace std;
const unsigned long long int large = 100001;
//typedef pair<> Par; 
 
int main()
{
    unsigned long long int n,i,j,a,b,people = 0,mayor;
    //vector<int> scores;
    
    cin>>n;
    
    cin>>a>>b;
    people = people  - a + b;
    mayor = people;
    
    for(i = 1; i < n; i ++)
    {
        cin>>a>>b;
        people = people - a + b;
        
        if(people > mayor)
            mayor = people;
    }
    cout <<mayor;
    return 0;
}
