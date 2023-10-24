// A. Beautiful Year
// https://codeforces.com/contest/271/problem/A

#include<iostream>
#include<vector>
using namespace std;
 
int main ()
{
	unsigned long long int year,units,hund,tens,tho,j;
	
	cin>>year;
	
	for(year = year +1;;year++)
	{
		j = year;
		units = j % 10;
		j /=10;
		tens = j % 10;
		j /= 10;
		hund = j % 10;
		j /= 10;
		tho  = j % 10;
		//cout<<year<<endl;
		if(units != tens && units != hund && units != tho && tens != hund && tens != tho && hund != tho)
		{
			cout<<year;
			break;
		}
	}
	
	
 
	return 0; 
}
