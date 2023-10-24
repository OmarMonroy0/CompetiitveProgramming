//A. Arpa's hard exam and Mehdard's naive cheat
//https://codeforces.com/contest/742/problem/A
//Codeforces Round #383(Div.2)

#include<iostream>
using namespace std;
int solve(long long int n){
    if(n == 0) return 1;
    if( n % 4 == 1) return 8;
    if(n % 4 == 2) return 4;
    if(n % 4 == 3) return 2;
    if( n % 4 == 0) return 6;
}
int main (){
    long long int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
