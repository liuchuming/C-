//����
//��һ��Ӣ�Ķ��ģ�����֮���Կո�ָ���ÿ�����ʰ�����ǰ����ڵı����ţ����뽫���������Ű棬Ҫ�����£�
//
//ÿ�в�����80���ַ���ÿ�����ʾ���ͬһ���ϣ���ͬһ�еĵ���֮����һ���ո�ָ������׺���β��û�пո�
//
//����
//��һ����һ������n����ʾӢ�Ķ����е��ʵ���Ŀ.�����n���Կո�ָ���Ӣ�ĵ��ʣ����ʰ�����ǰ����ڵı����ţ���ÿ�����ʳ��ȶ�������40����ĸ����
//
//���
//�Ű��Ķ����ı���ÿ���ı��ַ������80���ַ�������֮����һ���ո�ָ���ÿ���ı���β��û�пո�
//
//��������
//84
//One sweltering day, I was scooping ice cream into cones and told my four children they could "buy" a 
//cone from me for a hug.Almost immediately, the kids lined up to make their purchases.The three youngest
//each gave me a quick hug, grabbed their cones and raced back outside.But when my teenage son at the end 
//of the line finally got his turn to "buy" his ice cream, he gave me two hugs. "Keep the changes," he
//said with a smile.
//
//One sweltering day, I was scooping ice cream into cones and told my four
//children they could "buy" a cone from me for a hug.Almost immediately, the kids
//lined up to make their purchases.The three youngest each gave me a quick hug,
//grabbed their cones and raced back outside.But when my teenage son at the end
//of the line finally got his turn to "buy" his ice cream, he gave me two hugs.
//"Keep the changes," he said with a smile.
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cin.get();
	char words[1000][41];
	int wordsLen[1000];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 41; j++) {
			char temp;
			cin.get(temp);
			if(temp != ' ' && temp != '\n') {
				words[i][j] = temp;
			}
			else {
				wordsLen[i] = j;
				break;
			}
		}
	}
	for (int j = 0; j < wordsLen[0]; j++) {
		cout << words[0][j];
	}
	int length = wordsLen[0];
	for (int i = 1; i < n; i++) {
		if (length + 1 + wordsLen[i] <= 80) {
			cout << ' ';
			for (int j = 0; j < wordsLen[i]; j++) {
				cout << words[i][j];
			}
			length = length + 1 + wordsLen[i];
		}
		else {
			cout << endl;
			length = wordsLen[i];
			for (int j = 0; j < wordsLen[i]; j++) {
				cout << words[i][j];
			}
		}
	}
	return 0;
}