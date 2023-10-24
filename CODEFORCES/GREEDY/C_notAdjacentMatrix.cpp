//C. Not Adjacent Matrix
//Codeforces Round #719 (Div.3)
//https://codeforces.com/contest/1520/problem/C

#include<iostream>
#include<vector>
using namespace std;
int main (){
    int t,n,m,i,j,k,l;
    cin>>t;
    while(t--){
        cin>>n;
        if(n == 1) cout<<"1\n";
        else if( n == 2) cout<<"-1\n";
        else{
            for(i = 2,j = 1; i <= n*n; i+=2,j++)
            {
                cout<<i<<" ";
                if(j%n == 0) cout<<"\n";
                
            }
            for(i = 1; i <= n*n; i +=2,j++){
                cout<<i<<" ";
                if(j%n == 0) cout<<"\n";
                
            }
        }
    }
    
    return 0;   
}
