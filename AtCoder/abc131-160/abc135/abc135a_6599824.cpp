/*
	submission #6599824 - User: herp_sy
	https://atcoder.jp/contests/abc135/submissions/6599824
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
	int a,b;
	int k;
	cin >> a >> b;
	k = (a + b) / 2;
	if(abs(a - k) == abs(b - k))	OUT(k) BR;
	else OUT("IMPOSSIBLE") BR;
	RET;
}
