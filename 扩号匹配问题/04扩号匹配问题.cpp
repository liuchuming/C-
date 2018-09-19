//描述
//在某个字符串（长度不超过100）中有左括号、右括号和大小写字母；规定（与常见的算数式子一样）任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。写一个程序，找到无法匹配的左括号和右括号，输出原来字符串，并在下一行标出不能匹配的括号。不能匹配的左括号用"$"标注, 不能匹配的右括号用"?"标注.
//
//输入
//输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字母，字符串长度不超过100
//
//注意：cin.getline(str, 100)最多只能输入99个字符！
//
//输出
//对每组输出数据，!!!输出两行，第一行包含原始输入字符!!!，第二行由"$", "?"和空格组成，"$"和"?"表示与之对应的左括号和右括号不能匹配。
//((ABCD(x)
//)(rttyy())sss)(
//
//((ABCD(x)
//$$
//)(rttyy())sss)(
//? ? $\

//#include<iostream>
//#include<stack>
//using namespace std;
//int main() {
//	char str[101];
//	
//	while (cin.getline(str, 100)) {
//		char mark[101];
//		stack<char> S;
//		int i;
//	
//	for (i = 0; str[i] != '\0'; i++) {
//		if (str[i] == '(') {
//			S.push(i);
//			mark[i] = ' ';
//		}
//		else if (str[i] == ')') {
//			if (S.empty()) {
//				mark[i] = '?';
//			}
//			else {
//				S.pop();
//				mark[i] = ' ';
//			}
//		}
//		else {
//			mark[i] = ' ';
//		}
//		
//		}
//	while (!S.empty()) {
//		mark[S.top()] = '$';
//		S.pop();
//		
//	}
//	mark[i] = '\0';
//	for(int m = 0; str[m] != '\0'; m++){
//	cout << str[m];
//	}
//	cout <<'\0'<< endl;
//	for (int q = 0; mark[q] != '\0'; q++) {
//		cout << mark[q];
//	}
//	cout << endl;
//	}
//	return 0;
//}#include<iostream>
#include<iostream>
#include <cstring>
using namespace std;
char input[101];
char output[101];
bool in = false;
int check(bool in, int s) {//in 表示是否进栈
	for (int i = s; i < 100; i++) {
		if (output[i] == ')') {
			if (in == false) {
				output[i] = '?';//没进栈之前遇到‘）’直接进行标记
			}
			if (in == true) {//进栈之后，遇到‘）’则把（）都吃了，出栈
				output[i] = ' ';
				output[s - 1] = ' ';
				return 0;
			}
		}
		if (output[i] == '(') { //如果遇到‘（’则进栈；
			output[i] = '$';
			check(true, i + 1);
		}
		if (output[i] != '('&&output[i] != ')'&&output[i] != '?'&&output[i] != '$') {
			if (output[i] == '\0' || i == 99)
				return 0;
			else
				output[i] = ' ';
		}
	}
}
int main() {
	while (cin.getline(input, 101)) {
		memcpy(output, input, sizeof(input));
		check(false, 0);
		for (int i = 0; i < 100; i++) {
			if (input[i] != '\0') {
				cout << input[i];
				if (i == 99) {
					cout << endl;
					break;
				}
			}
			else {
				cout << endl;
				break;
			}
		}
		for (int i = 0; i < 100; i++) {
			if (output[i] != '\0') {
				cout << output[i];
				if (i == 99) {
					cout << endl;
					break;
				}
			}
			else {
				cout << endl;
				break;
			}
		}
	}
	return 0;
}