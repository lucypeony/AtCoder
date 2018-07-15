#include<iostream>
#include<fstream>
#include<climits>
using namespace std;

typedef long long int ll;
typedef pair<int, int> P;

ll gcd(ll x, ll y) {
	if (x == 0) return y;
	return gcd(y%x, x);
}

int N;
long long A, B, C, D;

void solve() {
	if (A < B || D < B)
		cout << "No" << endl;
	else {
		long g = gcd(B, D);
		long worst = g - A % g;
		if (C >= B - worst) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> A >> B >> C >> D;
		solve();
	}
	return 0;
}