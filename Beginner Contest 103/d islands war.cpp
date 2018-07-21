/*
abc103_d
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

struct p {
	int x;
	int y;
};
int main() {
	freopen("d.in", "r", stdin);
	freopen("d.out", "w", stdout);
	int N, M;
	vector<p> pairs;
	int x, y;
	for (int i = 0; i < M; i++)
	{
		cin >> x >> y;
		p myp;
		myp.x = x;
		myp.y = y;
		pairs.push_back(myp);
	}


	fclose(stdin);
	fclose(stdout);
	return 0;
}