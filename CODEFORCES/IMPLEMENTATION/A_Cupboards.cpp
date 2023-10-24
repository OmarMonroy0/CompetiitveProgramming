//A. Cupboards
//https://codeforces.com/contest/248/problem/A

#include <iostream>
#include<vector>
#include<stdlib.h>
 
using namespace std;
const unsigned long long int large = 100001;
typedef pair<int,int> Par; 
 
int main()
{
    vector<Par> matrix;
    int i,number, j,aux,aux1,x0 = 0,x1 = 0,y0 = 0, y1 = 0;
    
    cin>>number;
    //number.resize(number +1);
    
    for(i = 0; i < number; i ++)
    {
        cin>>aux>>aux1;
        /*matrix[i].first = aux;
        matrix[i].second = aux1;
        */
        if(aux == 0)
            x0++;
        else if(aux == 1)
            x1 ++;
        if(aux1 == 0)
            y0 ++;
        else if(aux1 == 1)
              y1 ++;  
    }
    int resultP,result,resultP1;
    if(x0 > x1)
        resultP = number - x0; 
    else
        resultP = number - x1;
    
    if(y0 > y1)
        resultP1 = number - y0;
    else
        resultP1 = number - y1;
    
    result = resultP + resultP1;
    cout<<result;
    return 0;
}
