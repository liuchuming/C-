#include<iostream>
using namespace std;
int main() {
	int m, k;
	int num = 0;
	cin >> m >> k;
	int flag = 1;
	if (m % 19 == 0) {
		while (m > 0) {
			if (m == 3) {
				num++; break;
			}
			else if (m % 10 == 3) {
				num++; m /= 10;
			}
			else m /= 10;
		}
		if (num == k){
			cout << "YES" << endl;
			flag = 0;
		}
	}
	if (flag)cout << "NO" << endl;
	return 0;
}