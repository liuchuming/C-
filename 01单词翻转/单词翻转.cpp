//����
//����һ�����ӣ�һ�У����������е�ÿһ�����ʷ�ת�������
//
//����
//ֻ��һ�У�Ϊһ���ַ�����������500���ַ�������֮���Կո��������ν����ָ�������в������ո���������ַ���
//
//���������cin.getline����һ�к���������ʵݹ鴦��
//
//���
//��תÿһ�����ʺ���ַ���������֮��Ŀո�����ԭ��һ�¡�
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