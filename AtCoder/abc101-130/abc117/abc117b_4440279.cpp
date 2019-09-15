/*
	https://atcoder.jp/contests/abc117/submissions/4440279
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,len = 0;
	cin >> n;
	vector<int> L(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> L.at(i);
	}
	sort(L.begin(), L.end());
	reverse(L.begin(), L.end());
	for (int i = 1; i < n; ++i)	len += L.at(i);
	if(L.at(0) < len)	cout << "Yes" << endl;
	else cout << "No" << endl;
}
