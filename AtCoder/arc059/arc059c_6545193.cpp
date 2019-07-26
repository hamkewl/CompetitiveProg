/*
	submission #6545193 - User: herp_sy
	https://atcoder.jp/contests/arc059/submissions/6545193
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

int pow2diff(int n1,int n2){
	return (n1 - n2) * (n1 - n2);
}

int main(int argc, char const *argv[]){
	int n;
	int sum,min = 0x3FFFFF;
	cin >> n;
	std::vector<int> a(n);
	for (int i = 0; i < n; ++i)	cin >> a.at(i);
	sort(a.begin(), a.end());
	
	for (int i = a.at(0); i <= a.at(n - 1); ++i)
	{
		sum = 0;
		for (int j = 0; j < n; ++j)	sum += pow2diff(i, a.at(j));
		if(sum < min)	min = sum;
	}
	OUT(min) BR;
	RET;
}
