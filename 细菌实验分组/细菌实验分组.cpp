//����⣣5��ϸ��ʵ�����
//ע�⣺ ��ʱ������ : 1000ms �ڴ����� : 65536kB
//
//����
//��һ��ϸ����ΪA��B�������֣����ǵ���������������ȫ��ͬ�������ڷ�ֳ���������������A���ַ�ֳ�����ǳ�ǿ��B���ֵķ�ֳ������������һ��Ϊʱһ�� Сʱ��ϸ����ֳʵ���У�ʵ��Ա���������ϸ������������ˣ������дһ�����򣬸���ʵ���������������ֵ����������·ֳ����顣
//
//����
//�����ж��У���һ��Ϊ����n��n��100������ʾ��n��������
//
//����n�У�ÿ���������������ֱ�����������ţ�����ǰϸ�������������ϸ��������
//
//���
//����ж��У�
//
//��һ�����A��������������������ÿ�����A����������ı�ţ�����ֳ���������С�
//
//Ȼ��һ�����B��������������������ÿ�����B����������ı�ţ�Ҳ����ֳ���������С�
//
//��������
//5
//1 10 3456
//2 10 5644
//3 10 4566
//4 20 234
//5 20 232
//3
//1
//3
//2
//2
//5
//4
#include<iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	int id[100] = {0};
	double rate[100] = { 0.0 };
	for (int i = 0; i < n; i++) {
		int start = 0, end = 0;
		cin >> id[i] >> start >> end;
		rate[i] = (double) end / start;
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (rate[i] > rate[j]) {
				int id_temp = 0;
				double rate_temp = 0.0;
				id_temp = id[i];
				id[i] = id[j];
				id[j] = id_temp;
				rate_temp = rate[i];
				rate[i] = rate[j];
				rate[j] = rate_temp;
			}
		}
	}
	double dif = 0.0;
	dif = rate[0];
	int flag = 0;
	for (int i = 0; i < n - 1; i++) {
		if (dif < rate[i + 1] - rate[i]) {
			dif = rate[i + 1] - rate[i];
			flag = i + 1;
		}
	}
	cout << n - flag << endl;
	for (int i = flag; i < n; i++) {
		cout << id[i] << endl;
	}
	cout << flag << endl;
	for (int i = 0; i < flag; i++) {
		cout << id[i] << endl;
	}
	return 0;
}