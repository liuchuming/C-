//����
//��ĳ���ַ��������Ȳ�����100�����������š������źʹ�Сд��ĸ���涨���볣��������ʽ��һ�����κ�һ�������Ŷ����ڵ����������ұ��Ҿ��������������ƥ�䡣дһ�������ҵ��޷�ƥ��������ź������ţ����ԭ���ַ�����������һ�б������ƥ������š�����ƥ�����������"$"��ע, ����ƥ�����������"?"��ע.
//
//����
//��������������ݣ�ÿ������һ�У�����һ���ַ�����ֻ�����������źʹ�Сд��ĸ���ַ������Ȳ�����100
//
//ע�⣺cin.getline(str, 100)���ֻ������99���ַ���
//
//���
//��ÿ��������ݣ�!!!������У���һ�а���ԭʼ�����ַ�!!!���ڶ�����"$", "?"�Ϳո���ɣ�"$"��"?"��ʾ��֮��Ӧ�������ź������Ų���ƥ�䡣
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
int check(bool in, int s) {//in ��ʾ�Ƿ��ջ
	for (int i = s; i < 100; i++) {
		if (output[i] == ')') {
			if (in == false) {
				output[i] = '?';//û��ջ֮ǰ����������ֱ�ӽ��б��
			}
			if (in == true) {//��ջ֮��������������ѣ��������ˣ���ջ
				output[i] = ' ';
				output[s - 1] = ' ';
				return 0;
			}
		}
		if (output[i] == '(') { //����������������ջ��
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