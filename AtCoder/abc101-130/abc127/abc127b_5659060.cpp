// https://atcoder.jp/contests/abc127/submissions/5659060

#include <bits/stdc++.h>
using namespace std;

// utility of stdin,stdout
#define BUFS cout <<
#define BUFE << endl 

int main(int argc, char const *argv[]){
	int r,d;
	std::vector<int> x(13);
	cin >> r >> d >> x.at(0);
	for (int i = 1; i <= 10; ++i)
	{
		x.at(i) = r * x.at(i - 1) - d;
		BUFS x.at(i) BUFE;
	}
	return 0;
}

