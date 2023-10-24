// https://codeforces.com/contest/1/problem/A
// A. Theatre Square

#include<iostream>
 
long long solve(){
    long long  l,m,n,a;
    long long x,y;
    std::cin>>n>>m>>a;
    if(a == 1) return n*m;
    if(n == 1 || m == 1){
        x = n*m;
        y = x / a;
        if(x % a != 0) y++;
        return y;
    }
    if(n < a & m < a) return 1;
    x = n / a;
    y = m / a;
    if(n % a != 0) x++;
    if(m%a != 0) y++;
    long long z = x * y;
    
    return z; 
}
 
int main(){
    std::cout<<solve();
    return 0;
}
