//读入一个格式为yyyy - mm - dd的日期（即年－月－日），输出这个日期下一天的日期。可以假定输入的日期不早于1600 - 01 - 01，也不晚于2999 - 12 - 30。
//
//输入
//输入仅一行，格式为yyyy - mm - dd的日期。
//
//输出
//输出也仅一行，格式为yyyy - mm - dd的日期
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