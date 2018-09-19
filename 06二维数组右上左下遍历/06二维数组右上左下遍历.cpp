//输入
//输入的第一行上有两个整数，依次为row和col。
//余下有row行，每行包含col个整数，构成一个二维整数数组。
//（注：输入的row和col保证0 < row < 100, 0 < col < 100）
//	输出
//	按遍历顺序输出每个整数。每个整数占一行。
//	样例输入
//	3 4
//	1 2 4 7
//	3 5 8 10
//	6 9 11 12
//	样例输出
//	1
//	2
//	3
//	4
//	5
//	6
//	7
//	8
//	9
//	10
//	11
//	12
#include<iostream>
using namespace std;
int main() {
	int row, col;
	cin >> row >> col;
	int str[100][100];
	for (int i = 0; i < row; i++) 
		for (int j = 0; j < col; j++) 
			cin >> str[i][j];
	for (int j = 0; j < col; j++) {
		int r = 0;
		int c = j;
		while (r < row&&c >= 0)
			cout << str[r++][c--] << endl;

		}
	for (int i = 1; i < row; i++) {
		int r = i;
		int c = col - 1;
		while (r < row&&c >= 0)
			cout << str[r++][c--] << endl;
	}
	return 0;
}