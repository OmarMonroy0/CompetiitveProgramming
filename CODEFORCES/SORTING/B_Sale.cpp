// B. Sale
// https://codeforces.com/contest/34/problem/B

#include <iostream>
#include<vector>
#include<algorithm>
 
int main() {
    
    int n,i,j,k,m,aux,tvs = 0,tam,earns=0;
    std::vector<int>tvS;
    std::cin>>n>>k;
    
    for(i = 0; i < n; i ++)
    {
        std::cin>>m;
        if(m < 0)
            tvS.push_back(m);
    }
    tam = tvS.size();
    sort(tvS.begin(),tvS.end());
    
    for(i = 0; i < tam && i < k; i ++)
    {
         aux = tvS[i] * (-1);
         earns += aux;
    }
    std::cout<<earns;
    
	return 0;
}
