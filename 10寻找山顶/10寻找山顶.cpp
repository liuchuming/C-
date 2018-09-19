#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int str[22][22];
	for (int i = 1; i < m+1; i++) {
		for (int j = 1; j < n+1; j++) {
			cin >> str[i][j];
		}
	}
	for (int i = 0; i <= m + 1; i++) {
		for (int j = 0; j <= n + 1; j++) {
			if (i == 0 || j == 0 || i == m + 1 || j == n + 1) {
				str[i][j] = -1;
			}
		}
	}
	for (int i = 1; i < m + 1; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (str[i][j] >= str[i - 1][j] && str[i][j] >= str[i + 1][j] && str[i][j] >= str[i][j - 1] && str[i][j] >= str[i][j + 1]) {
				cout << i - 1 << ' ' << j - 1 << endl;
			}
		}
	}
	return 0;
}