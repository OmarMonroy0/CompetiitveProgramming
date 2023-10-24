//A. Younng Physicist
// https://codeforces.com/contest/69/problem/A

#include <iostream>
 
bool solve(){
    int n,m,j,k,x=0,y=0,z = 0;
    std::cin>>n;
    for(int i = 0; i < n; i ++){
        std::cin>>m>>j>>k;
        x += m;
        y +=j;
        z += k;
    }
    return ( (x == 0 && y == 0 && z == 0) ? true:false);
}
 
int main() {
	std::cout<< (solve() == true ? "YES": "NO")<<std::endl;
	return 0;
}
