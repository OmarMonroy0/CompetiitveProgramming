//A. Valera and Antique Items
//https://codeforces.com/contest/441/problem/A
//Codeforces Round #252 (Div.2)

#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	long long int n,m,i,j,x,y,cont=0;
	vector<int> v;
	bool band;
	cin>>n>>m;
	for(i = 0; i < n; i++){
	    band = true;
	    cin>>x;
	    for(j = 0; j < x; j++){
	        cin>>y;
	        if(y  < m){
	            if(band == true){
	            v.push_back(i+1);  cont++;  band = false;}
	       }
	    }
	}
	cout<<cont<<"\n";
	for(auto k: v)
	    cout<<k<<" ";
	return 0;
}
