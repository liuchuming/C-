//����⣣1�����䲡��
//��Դ : POJ(Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)
//
//	ע�⣺ ��ʱ������ : 1000ms �ڴ����� : 65536kB
//
//	����
//	ĳ�����ҵĲ�����Ϊ��֢����ͨ��ֻ�е����˵ļ������س̶ȳ�������ס��֢�������������ֵ���ſ��԰�����ס��֢������
//
//	����Ҫ�����һ�����򣬸����˰��źò��������������س̶���0��10����ʾ��0��ʾСë����10��ʾ�ǳ����ء�
//
//	����
//	��һ�����벡�˵ĸ���m(m < 50)���Լ�����ס����֢�������������ֵa
//
//	������m�У�ÿ�б�ʾ���˱�ţ�����λ����0���룩���伲�������س̶ȣ���������1λС������
//
//	ÿ�����˵ļ������س̶ȶ���һ����
//
//	���
//	Ҫ���ղ��˵����س̶����ס����֢������Ĳ��˵ı��
//
//	ע�⣺
//
//	�����ǰ���в��˵����س̶Ȳ�������ס����֢������������None.�������������ţ�
//
//	��������
//	10 7.55
//	006 6.5
//	005 8.0
//	004 3.5
//	009 8.5
//	011 7.0
//	043 9.5
//	003 5.0
//	103 6.0
//	112 4.0
//	118 9.0
//
//	043 9.5
//	118 9.0
//	009 8.5
//	005 8.0
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int m;
	double level;
	int patient[50];
	double number[50];
	cin >> m >> level;
	for (int i = 0; i < m; i++) {
		
		cin >> patient[i]>>number[i];
	}
	int flag = 1;
	for (int i = 0; i < m; i++) {
		if (number[i] >=level ) {
			flag = 0;
			for (int j = i+1; j < m; j++) {
				if (number[j] >= level && number[j] >= number[i]) {
					double temp1;
					temp1 = number[i];
					number[i] = number[j];
					number[j] = temp1;
					int temp2;
					temp2 = patient[i];
					patient[i] = patient[j];
					patient[j] = temp2;
				}
			}
			
			
		}
	}
	if (flag)cout << "None." << endl;
	else {
		for (int i = 0; i < m; i++) {
			if (number[i] >= level) {
				cout << setw(3) << setfill('0') << patient[i];
				cout << ' ' << setiosflags(ios::fixed) << setprecision(1) << number[i] << endl;
			}
		}
		
	}
	return 0;
}