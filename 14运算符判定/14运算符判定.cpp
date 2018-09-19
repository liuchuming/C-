//描述
//两个整数 a 和 b 运算后得到结果 c。表示为：a ? b = c，其中，？可能是加法 + ，减法 - ，乘法 * ，整除 / 或 取余 %。请根据输入的 a, b, c 的值，确定运算符。如果某种运算成立，则输出相应的运算符，如果任何运算都不成立，则输出 error.
//
//例如：
//
//输入：
//
//3, 4, 5
//
//输出：
//
//error
//
//若输入：
//
//3, 4, 3
//
//则输出：
//
//%
//
//输入
//a b和 c 的值在意行内输入，以逗号间隔
//
//输出
//五个运算符之一或 error
//
//样例输入
//
//6, 7, 13
//样例输出
//+
#include<iostream>
using namespace std;
int main() {
	int n = 0, m = 0, k = 0;
	char c1, c2;
	cin >> n >>c1>> m>>c2 >> k;
	int flag = 1;
	if (n + m == k)
		cout << '+';
	else if (n - m == k) 
		cout << '-';
	else if (n * m == k) 
		cout << '*';
	else if (n / m == k) 
	cout << '/';
	else if (n % m == k) 
		cout << '%';
	else cout << "error";
	cout << endl;
	return 0;
}