//Codeforces Round #481 (div. 3)
//A.Remove Duplicates
// https://codeforces.com/contest/978/problem/A
#include<iostream>
#include<map>
using namespace std;
int main (){
    map<int,int> m1,m2;
    map<int,int> ::iterator it1; 
    int t,a;
    cin>>t;
    for(int  i = 0; i < t; i ++){
        cin>>a;
        m1[a] = i;
    }
    for(it1 = m1.begin(); it1 != m1.end(); it1++)
        m2[it1->second] = it1->first;
    cout<<m2.size()<<"\n";
    for(it1 = m2.begin(); it1 != m2.end(); it1++)
        cout<<it1->second<<" ";
    return 0;
}
