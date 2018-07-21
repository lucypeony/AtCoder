/*
abc103_c
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

string rotate(string x) {
	string res = x[x.size() - 1] + x;
	res = res.substr(0, res.size() - 1);
	return res;
}

int main() {
	string S, T;
	cin >> S >> T;
	string st = S;
	for (int i = 0; i < S.size(); i++) {
		st = rotate(st);
		if (st == T) {
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;
	return 0;
}