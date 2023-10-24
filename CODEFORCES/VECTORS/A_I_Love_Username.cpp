//A. I_love_%username%
// https://codeforces.com/contest/155/problem/A

#include <iostream>
#include<vector>
#include<stdlib.h>
 
using namespace std;
const unsigned long long int large = 100001;
//typedef pair<> Par; 
 
int main()
{
    unsigned long long int n,i,j,best,worst,count = 0;
    vector<int> scores;
    
    cin>>n;
    cin>>j;
    best = worst = j;
    
    for(i =  1; i < n; i ++)
    {
        cin>>j;
        if(j > best)
        {
           best = j;
           count ++;
        }
        if(j < worst)
        {
            worst = j;
            count ++;
        }
    }
    cout<<count;
    return 0;
}
