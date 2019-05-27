// https://atcoder.jp/contests/abc127/submissions/5659060

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[]){
	int a,b;
	cin >> a >> b;
	cout << ((a <= 5) ? 0 : (a >= 13 ? b : b / 2));
	return 0;
}
