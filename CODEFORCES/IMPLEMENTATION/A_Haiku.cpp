//A. Haiku
// https://codeforces.com/contest/78/problem/A

#include<bits/stdc++.h>
using namespace std;
 
bool isVowel(char c){
	if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;
	return false;
}
 
int main (){
	string s,s1, s2,s3;
	int i, j , k , cont = 0, cont1 = 0, cont2 = 0;
	getline(cin,s);
	getline(cin,s1);
	getline(cin,s2);
	for(i =0; i  < s.length(); i ++){
		if(isVowel(s[i]))
			cont++;
	}
	if(cont != 5 ) {
		cout<<"NO";
		return 0;
	
	}
	for(i =0; i  < s1.length(); i ++){
		if( isVowel(s1[i]))
			cont1++;
	}
	if(cont1 != 7 ) {
		cout<<"NO";
		return 0;
	}
	for(i =0; i  < s2.length(); i ++){
		if( isVowel(s2[i]))
			cont2++;
	}
	if(cont2 != 5 ) {
		cout<<"NO";
		return 0;
	}
	cout<<"YES";
 
	return 0;
}
