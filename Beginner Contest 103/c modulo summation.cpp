/*
abc103_c
��һ��Ҫ�����f(m)=m%a1 + m%a2 + ... ... + m%an�����ֵ��
��Ϊm%ai�ķ�Χ���ڵ���0��С�ڵ���ai-1
����f(m)������Ϊsum(ai) - N
��ÿ��ʽ�ӵ�ֵ��Ϊ���
��m=a1*a2*...*an-1ʱ��������
�����ֵΪsum(ai-1)
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