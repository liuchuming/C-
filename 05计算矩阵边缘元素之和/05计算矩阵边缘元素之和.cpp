#include<iostream>
using namespace std;
int main() {
	int k = 0;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int m=0, n=0;
		cin >> m >> n;
		int str[100][100];
		int num = 0;
		for (int p = 0; p < m; p++) {
			for (int q = 0; q < n; q++) {
				cin >> str[p][q];
				if (p == 0 || q == 0 || p == m - 1 || q == n - 1) {
					num += str[p][q];
				}
			}
		}
		cout << num << endl;
	}
	return 0;
}