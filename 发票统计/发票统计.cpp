//描述
//有一个小型的报账系统，它有如下功能：
//
//（1）统计每个人所报发票的总钱数
//
//（2）统计每类发票的总钱数
//
//将此系统简化为如下：假设发票类别共有A、B、C三种; 一共有三个人，ID分别为1、2、3。
//
//输入
//系统输入包含三行，每行第一个数为人员ID（整型，1或2或3），第二个数为发票总张数(张数不超过100)，之后是多个发票类别（字符型，A或B或C）和相应发票金额（单进度浮点型, 不超过1000.0）。
//
//输出
//输出包含六行，前三行为每人（按ID由小到大输出）所报发票总钱数（保留两位小数），后三行为每类发票的总钱数（保留两位小数）。
//1 5 A 1.0 A 2.0 C 1.0 B 1.0 C 1
//3 3 B 1 C 2 C 1
//2 4 B 1 A 1 C 1 A 1
//1 6.00
//2 4.00
//3 4.00
//A 5.00
//B 3.00
//C 6.00
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	float p[4] = { 0.0 }, type_invoice[4] = { 0.0 };
	for (int i = 0; i < 3; i++) {
		int index, number;
		cin >> index >> number;
		for (int i = 0; i < number; i++) {
			char type_input = '\0';
			float  num_input=0.0;
			cin >> type_input >> num_input;
			p[index] += num_input;
			if (type_input == 'A')
				type_invoice[1] += num_input;
			if (type_input == 'B')
				type_invoice[2] += num_input;
			if (type_input == 'C')
				type_invoice[3] += num_input;

		}
	}
	cout << "1 "<<setiosflags(ios::fixed)<<setprecision(2)  << p[1] << endl;
	cout << "2 " << setprecision(2) << p[2] << endl;
	cout << "3 " << setprecision(2) << p[3] << endl;
	cout << "A " << setprecision(2) << type_invoice[1] << endl;
	cout << "B " << setprecision(2) << type_invoice[2] << endl;
	cout << "C " << setprecision(2) << type_invoice[3] << endl;
	return 0;

}