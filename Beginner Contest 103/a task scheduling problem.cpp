/*
abc103_a
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main() {
	vector<int> a;
	int t;
	while (cin >> t) {
		a.push_back(t);
	}

	sort(a.begin(), a.end());
	int ans = 0;
	for (int j = 1; j < a.size(); j++) {
		ans += abs(a[j] - a[j - 1]);
	}

	cout << ans << endl;
	return 0;
}