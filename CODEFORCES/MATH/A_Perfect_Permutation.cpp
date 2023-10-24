//A. Perfect Permutation
// https://codeforces.com/contest/233/problem/A

#include <iostream>
#include<vector>
#include<string>
 
using namespace std;
 
int main()
{
    int number,i;
    vector<int> ay;
    cin>>number;
    ay.resize(number+1);
    if(number == 1  || number % 2 == 1)
    {   
        cout << -1;        
        return 0;
    }
    
    
    if(number % 2 == 0)
    {
        ay[1] = 2;
        ay[2] = 1;
        for(i = 3; i <= number; i ++)
            ay[i] = ay[i-2] +2;
    }
 
   for(i = 1; i <= number; i++)
    cout <<ay[i]<<" ";
    return 0;
}
