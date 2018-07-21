/*
输入 n 和 字符串 s ，代表 字符串 s 的长度为 2∗n
正着选 n个字符构成一个字符串 s1 ，然后倒着选 n 个字符构成一个字符串 s2，不能选重复的字符。

问：字符串 s1与 字符串 s2完全一样的的方案数是多少？
数据范围：
1<=n<=18
字符串 s都是小写字母
-----------------------------------------
由于N只有18，所以可以考虑先折半搜索。先搜前一半，用字符串hash把
蓝红两种颜色的字符串表示出来，存入一个map里面，再搜后一半，还是用字符串hash求出方案数
*/
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<map>
#define SF scanf
#define PF printf 
#define MAXN 350
using namespace std; 

typedef unsigned long long ll;

int n;
char s[MAXN];

map<pair<ll, ll>, ll> used[MAXN][MAXN];
ll ans;
void dfs1(int x, ll sum1, ll sum2, int len1, int len2) {
	if (x == n) {
		used[len1][len2][make_pair(sum1, sum2)]++;
		return;
	}
	dfs1(x + 1, sum1 * 131 + (ll)(s[x] - 'a' + 1), sum2, len1 + 1, len2);
	dfs1(x + 1, sum1, sum2 * 131 + (ll)(s[x] - 'a' + 1), len1, len2 + 1);
}

void dfs2(int x, ll sum1, ll sum2, int len1, int len2) {
	if (x == n - 1) {
		ans += used[len1][len2][make_pair(sum1, sum2)];
		return;
	}
	dfs2(x - 1, sum1 * 131 + (ll)(s[x] - 'a' + 1), sum2, len1 + 1, len2);
	dfs2(x - 1, sum1, sum2 * 131 + (ll)(s[x] - 'a' + 1), len1, len2 + 1);
}

int main() {
	SF("%d", &n);
	SF("%s", s);
	dfs1(0, 0, 0, 0, 0);
	dfs2(2 * n - 1, 0, 0, 0, 0);
	PF("%llu", ans);
}
