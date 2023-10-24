//C. Bad Sequence
//  https://codeforces.com/contest/1214/problem/C

#include <iostream>
#include<string>
#include <stack>
 
using namespace std;
 
bool solve(){
    int n,m,i,j,cont = 0,k,l;
    string s;
    stack<char> sc;
    cin>>n;
    cin>>s;
    if(n&1) return false;
    for(i = 0; i < s.length(); i ++){
        if(s[i] == '(') sc.push(s[i]);
        else if (s[i] == ')'){
            if(!sc.empty()) sc.pop();
            else cont++;
        }
    }
    if(cont == 1 && sc.size() == 1)return true;
    if(cont == 0 && sc.size() ==0 ) return true;
    return false;
 }
 
int main() {
	cout<<(solve() == true? "Yes": "No")<<endl;
	return 0;
}
