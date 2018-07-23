/*
abc103_c
这一题要求求出f(m)=m%a1 + m%a2 + ... ... + m%an的最大值。
因为m%ai的范围大于等于0，小于等于ai-1
所以f(m)的上限为sum(ai) - N
让每个式子的值都为最大
当m=a1*a2*...*an-1时可以满足
则最大值为sum(ai-1)
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
	long long ans = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> t;
		ans += t - 1;
	}
	cout << ans << endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}