/*
给你n个点，他们1到n依次从左到右连接。问你m对数(A,B)。AB不能相连。
问你最少要拆多少条边.

abc103_d

先按右边端点进行排序，先选择右边端点最小的。如果别的点的左边大于现在被割掉的桥的右边，则新的被断掉的桥就是新的这个点
贪心法
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
		return a.l < b.l; //右边相同比较左边
	return a.r < b.r;		//对数据右进行排序
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
			now = a[i].r;//如果下一个数据的左边大于切断桥的右边则仍然需要切桥
			ans++;
		}
	}
	cout << ans << endl;

	fclose(stdin);
	fclose(stdout);
	return 0;
}