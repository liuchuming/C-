//����
//��һ��С�͵ı���ϵͳ���������¹��ܣ�
//
//��1��ͳ��ÿ����������Ʊ����Ǯ��
//
//��2��ͳ��ÿ�෢Ʊ����Ǯ��
//
//����ϵͳ��Ϊ���£����跢Ʊ�����A��B��C����; һ���������ˣ�ID�ֱ�Ϊ1��2��3��
//
//����
//ϵͳ����������У�ÿ�е�һ����Ϊ��ԱID�����ͣ�1��2��3�����ڶ�����Ϊ��Ʊ������(����������100)��֮���Ƕ����Ʊ����ַ��ͣ�A��B��C������Ӧ��Ʊ�������ȸ�����, ������1000.0����
//
//���
//����������У�ǰ����Ϊÿ�ˣ���ID��С���������������Ʊ��Ǯ����������λС������������Ϊÿ�෢Ʊ����Ǯ����������λС������
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