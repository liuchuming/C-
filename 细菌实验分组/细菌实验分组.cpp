//编程题＃5：细菌实验分组
//注意： 总时间限制 : 1000ms 内存限制 : 65536kB
//
//描述
//有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，A亚种繁殖能力非常强，B亚种的繁殖能力很弱。在一次为时一个 小时的细菌繁殖实验中，实验员由于疏忽把细菌培养皿搞乱了，请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。
//
//输入
//输入有多行，第一行为整数n（n≤100），表示有n个培养皿。
//
//其余n行，每行有三个整数，分别代表培养皿编号，试验前细菌数量，试验后细菌数量。
//
//输出
//输出有多行：
//
//第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。
//
//然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。
//
//样例输入
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