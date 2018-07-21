/*
abc103_c
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

int main() {
	freopen("c.in", "r", stdin);
	freopen("c.out", "w", stdout);
	int N, t;
	cin >> N;
	vector<int> a;
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		a.push_back(t);
	}

	sort(a.begin(), a.end());



	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}