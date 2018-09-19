#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int a[10000];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int max = a[0];
	int sum = 0;
	int num = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		sum += a[i];
		num++;
		if (sum > 2 * max) {
			break;
		}
	}
	cout << num << endl;
	return 0;
}