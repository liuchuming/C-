//����һ����ʽΪyyyy - mm - dd�����ڣ����꣭�£��գ���������������һ������ڡ����Լٶ���������ڲ�����1600 - 01 - 01��Ҳ������2999 - 12 - 30��
//
//����
//�����һ�У���ʽΪyyyy - mm - dd�����ڡ�
//
//���
//���Ҳ��һ�У���ʽΪyyyy - mm - dd������
//2010 - 07 - 05
//2010 - 07 - 06
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int year, month, days;
	char c1, c2;
	cin >> year >> c1 >> month >> c2 >> days;
	int daysTable[2][13] = { {0,31,28,31,30,31,30,31,31,30,31,30,31},{0,31,29,31,30,31,30,31,31,30,31,30,31} };
	int isPrime = -1;
	isPrime = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	int daysofmonth = daysTable[isPrime][month];
	++days;
	if (days > daysofmonth) {
		days = 1;
		month += 1;
	}
	if (month > 12) {
		year += 1;
		month = 1;
	}
	cout << year << c1 << setw(2) << setfill('0') << month << c2 << setw(2) << setfill('0') << days << endl;
	return 0;
}