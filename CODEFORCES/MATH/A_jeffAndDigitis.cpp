//A. Jeff and digits
//Codeforces Round #204 (Div.2)
// https://codeforces.com/contest/352/problem/A

#include<iostream>
using namespace std;
 
int main (){
    int l,m,n,t,a,c0 = 0,c5 = 0;
    cin>>t;
    for(int i = 0; i < t; i ++){
        cin>>a;
        if(a == 0) c0++;
        else if(a == 5) c5++;
    }
    if(c5 >= 9 && c0 >0){
        while(c5 >= 9 && c0 > 0){
            for(int i = 0; i < 9; i ++){
                cout<<"5";
                c5--;
            }
        }
        while(c0> 0){ cout<<"0"; c0--;}
    }
    else if(c0 > 0)
        cout<<"0";
    else
        cout<<"-1";
    
    return 0;
}
