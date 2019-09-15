/*
	https://atcoder.jp/contests/abc120/submissions/4444368
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int a,b,c;
	cin >> a >> b >> c;
	cout << ( (b / a) > c ? c : (b / a) ) << endl;
	return 0;
}
