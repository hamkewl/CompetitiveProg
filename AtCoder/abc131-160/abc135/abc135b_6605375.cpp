/*
	submission #6605375 - User: herp_sy
	https://atcoder.jp/contests/abc135/submissions/6605375
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
	int cnt = 0;

	cin >> n;
	std::vector<int> p(n + 3);
	for (int i = 1; i <= n; ++i){
		cin >> p.at(i);
		if(p.at(i) != i)	++cnt;
	}
	if(cnt >= 3)	OUT("NO");
	else OUT("YES");
	RET;
}
