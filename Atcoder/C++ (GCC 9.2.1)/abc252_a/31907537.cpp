#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int ans =0;
	if (s == "Monday") ans = 5;
	if (s == "Tuesday") ans = 4;
	if (s == "Wednesday") ans = 3;
	if (s == "Thursday") ans = 2;
	if (s == "Friday") ans = 1;
	cout<< ans <<endl;
	return 0;
}