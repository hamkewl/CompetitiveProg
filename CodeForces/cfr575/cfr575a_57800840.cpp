/*
	submission #57800840 - User: hervtea_
	https://codeforces.com/contest/1196/submission/57800840
*/
 
#include <bits/stdc++.h>
using namespace std;
 
// utility of stdin,stdout
#define _CRT_SECURE_NO_WARNINGS
#define OUT cout << 
#define BR << endl
#define RET return 0
#define TLong long long
#define TBMod 1000000007
 
int main(int argc, char const *argv[]){
	int q;
	TLong a,b,c;
 
	cin >> q;
	for (int i = 0; i < q; ++i)
	{
		cin >> a >> b >> c;
		if((a + b + c) % 2)	OUT((a + b + c - 1) / 2) BR;
		else OUT((a + b + c) / 2) BR;
	}
	RET;
}