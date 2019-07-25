/*
	submission #6510315 - User: herp_sy
	https://atcoder.jp/contests/abc134/submissions/6510315
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
	int n;
	cin >> n;
	std::vector<int> a(n),b(n);
	for (int i = 0; i < n; ++i){
		cin >> a.at(i);
		b.at(i) = a.at(i);
	}
	sort(b.begin(), b.end());
	reverse(b.begin(), b.end());
	for (int i = 0; i < n; ++i)
	{
		if(a.at(i) == b.at(0))	OUT(b.at(1)) BR;
		else OUT(b.at(0)) BR;
	}
	RET;
}
