//����
//����ĵ�һ��������������������Ϊrow��col��
//������row�У�ÿ�а���col������������һ����ά�������顣
//��ע�������row��col��֤0 < row < 100, 0 < col < 100��
//	���
//	������˳�����ÿ��������ÿ������ռһ�С�
//	��������
//	3 4
//	1 2 4 7
//	3 5 8 10
//	6 9 11 12
//	�������
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