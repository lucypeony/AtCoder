/*
����n���㣬����1��n���δ��������ӡ�����m����(A,B)��AB����������
��������Ҫ���������.

abc103_d

�Ȱ��ұ߶˵����������ѡ���ұ߶˵���С�ġ������ĵ����ߴ������ڱ�������ŵ��ұߣ����µı��ϵ����ž����µ������
̰�ķ�
*/
#include<algorithm>
#include<iostream>
#include<vector>
#include<fstream>
#include<string>
using namespace std;

typedef long long ll;
struct node {
	int l, r;
}a[100000+20];

bool cmp(node a, node b) {
	if (a.r == b.r)
		return a.l < b.l; //�ұ���ͬ�Ƚ����
	return a.r < b.r;		//�������ҽ�������
}

int main() {
	freopen("d.in", "r", stdin);
	freopen("d.out", "w", stdout);
	int n, m, i;
	cin >> n >> m;
	for (i = 0; i < m; i++)
		cin >> a[i].l >> a[i].r;
	int mn = a[0].r;
	for (i = 0; i < m; i++)
		mn = min(a[i].r, mn);

	sort(a, a + m, cmp);

	int now = mn, ans = 1;  //find the smallest 
	for (i = 1; i < m; i++) {
		if (a[i].l >= now) {
			now = a[i].r;//�����һ�����ݵ���ߴ����ж��ŵ��ұ�����Ȼ��Ҫ����
			ans++;
		}
	}
	cout << ans << endl;

	fclose(stdin);
	fclose(stdout);
	return 0;
}