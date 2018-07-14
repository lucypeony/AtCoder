#include<iostream>

using namespace std;

int N; //number of slimes 
int a[101]; // colors of the slimes 

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++)
		cin >> a[i];

	int res = 0;

	for (int i = 2; i < N; i++) {
		if (a[i - 1] == a[i])
		{
			res++;
			a[i] = res + N;
		}
	}

	cout << res << endl;
	return 0;
}