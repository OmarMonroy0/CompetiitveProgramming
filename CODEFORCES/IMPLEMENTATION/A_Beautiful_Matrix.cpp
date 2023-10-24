//A. Beautiful Matrix
// https://codeforces.com/contest/263/problem/A

#include<iostream>
#include<algorithm>
void solve(){
    int i,j,k,x,y,imi,imj;
    for( i =0 ; i < 5; i ++){
        for(j = 0; j < 5; j++){
            std::cin>>x;
            if(x == 1){
                imi = i;
                imj = j;
                break;
            }
        }
    }
    imi = std::max(2-imi,imi-2);
    imj = std::max(2-imj,imj-2);
    std::cout<<imi+imj<<std::endl;
}
int main (){
    solve();
    return 0;
}
