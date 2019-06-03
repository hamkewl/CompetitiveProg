// https://atcoder.jp/contests/arc075/submissions/5660952

#include <bits/stdc++.h>
using namespace std;

// utility of stdin,stdout
#define BUFS cout << 
#define BUFE << endl 

int main(int argc, char const *argv[])
{
	int n,sum = 0;
	cin >> n;
	std::vector<int> s(n);
	for (int i = 0; i < n; ++i){
		cin >> s.at(i);
		sum += s.at(i);
	}
	if(sum % 10 != 0){
		BUFS(sum) BUFE;
		return 0;
	}
	else{
		sort(s.begin(), s.end());
		for (int i = 0; i < n; ++i)
		 {
		 	 if(s.at(i) % 10 != 0){
		 	 	sum -= s.at(i);
		 	 	break;
		 	 }
		 }
		sum = (sum % 10 == 0) ? 0 : sum;
		BUFS sum BUFE;
	}
	return 0;
}
