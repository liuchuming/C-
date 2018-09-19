//描述
//输入一个句子（一行），将句子中的每一个单词翻转后输出。
//
//输入
//只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。所谓单词指的是所有不包含空格的连续的字符。
//
//这道题请用cin.getline输入一行后再逐个单词递归处理。
//
//输出
//翻转每一个单词后的字符串，单词之间的空格需与原文一致。
//hello    world.
//olleh.dlrow
#include<iostream>
using namespace std;
int main() {
	char sentence[501];
	cin.getline(sentence, 501);
	
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i] == ' ') {
			cout << ' ';
		}
		else {
			int tmp = i;
			int j = 0;
			for ( j = i; sentence[j] != ' '; j++) {
				if (sentence[j] == '\0')
					break;
			}
			i = j - 1;
			for (int m = i; m >= tmp; m--) {
				cout << sentence[m];
			}

		}
	}
	//cout << '\0' << endl;
	return 0;
}
//#include<iostream>
//using namespace std;
//
//int main() {
//	char c[7] = "China";
//	char sentence[501] = { '\0' };
//	cin.getline(sentence, 500);
//	for (int i = 0; sentence[i] != '\0'; i++) {
//		if (sentence[i] == ' ') {
//			cout << ' ';
//		}
//		else {
//			int temp = i;
//			int j = 0;
//			for (j = i; sentence[j] != ' '; j++) {
//				if (sentence[j] == '\0') {
//					break;
//				}
//			}
//			i = j - 1;
//			for (int k = i; k >= temp; k--) {
//				cout << sentence[k];
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}