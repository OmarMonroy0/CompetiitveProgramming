//A. Tom Riddle's Diary
//Manthan, Codefast 17
// https://codeforces.com/contest/855/problem/A

#include<iostream>
#include<set>
using namespace std;
int main (){
    multiset<string> m;
    int n,i,j;
    string s;
    cin>>n;
    for(i = 0; i < n; i++){
        cin>>s;
        if(i > 0){
            j = m.count(s);
            if(j) cout<<"YES\n";
            else  cout<<"NO\n";
        }
        else{ cout<<"NO\n";}
        m.insert(s);
    }
 
    return 0;
}
