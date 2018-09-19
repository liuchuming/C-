//����⣣4��Ѱ��ƽ���ϵļ����
//��Դ : POJ(Coursera��������POJ����ɵ�ϰ�⽫�������Coursera�����ɼ���)
//
//	ע�⣺ ��ʱ������ : 1000ms �ڴ����� : 65536kB
//
//	����
//	��һ��ƽ���ϣ������������(x, y), (a, b), ���˵(x, y)֧����(a, b)������ָx >= a, y >= b;
//
//��ͼ����������(a, b)��������(x, y)Ϊ���Ͻǵ�һ�����޵������ڡ�
//
//����n����ļ��ϣ�һ���������ɸ��㣬���ǲ��ᱻ�����е��κ�һ����֧�䣬��Щ���������ֵ�㡣
//
//����ҳ����еļ���㣬����x������С����������������ꡣ
//
//����涨��n������100�����Ҳ����ǵ������Ϊ�����������
//
//����
//����������У���һ����������n����ʾ�ǵ������ڶ��а���n��������꣬����ֵ�������������귶Χ��0��100�����������в�����������ͬ�ĵ㡣
//
//���
//��x��������С�����˳��������м���㡣
//
//�����ʽΪ : (x1, y1), (x2, y2), ...(xk, yk)
//
//	ע�⣺�����ÿ����֮����","�ָ�, ���һ����֮��û��",", ������Ͷ�������ᱻ�д�
//
//	��������
//	5
//	1 2 2 2 3 1 2 3 1 4
//	�������
//
//	(1, 4), (2, 3), (3, 1)
//#include <iostream>
//using namespace std;
//
//#define MAX_N 100
//
//struct Point {
//	int x;
//	int y;
//	bool isMax;
//	//Point() : x(0), y(0), isMax(false) {}
//};
//
//int sortX(Point p[], int n)
//{
//	//int maxX = p[0].x;
//	int i;
//	for (i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (p[i].x > p[j].x) {
//				Point t = p[i];
//				p[i] = p[j];
//				p[j] = t;
//			}
//		}
//		//if (p[i + 1].x > maxX)
//		//	maxX = p[i + 1].x;
//	}
//
//	return p[i].x;
//}
//
//int main()
//{
//	int n;
//	Point p[MAX_N] = {};
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> p[i].x >> p[i].y;
//	for (int i = 0; i < n; i++) {
//		bool isMax = true;
//		for (int j = 0; j < n; j++) {
//			if (i != j && p[j].x >= p[i].x && p[j].y >= p[i].y) {
//				isMax = false;
//				break;
//			}
//		}
//		p[i].isMax = isMax;
//	}
//
//	int maxX = sortX(p, n);
//	int idx = 0;
//	for (; idx < n; idx++) {
//		if (p[idx].isMax) {
//			cout << '(' << p[idx].x << ',' << p[idx].y << ')';
//			if (p[idx].x < maxX)
//				cout << ',';
//		}
//	}
//
//	return 0;
//}

#include<iostream>
using namespace std;
struct Point {
	int x=0;
	int y=0;
	bool isMax=true;
};
int sortX(Point p[], int n) {
	int i;
	for (i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (p[i].x > p[j].x) {
				Point t = p[i];
				p[i] = p[j];
				p[j] = t;
			}
		}
	}
	return p[i].x;
}
int main() {
	int n=0;
	cin >> n;
	Point p[100];
	for (int i = 0; i < n; i++) {
		cin >> p[i].x >> p[i].y;
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i != j && p[i].x <= p[j].x&&p[i].y <= p[j].y) {
				p[i].isMax = false;
				break;
			}
		}
	}
	int maxX = sortX(p, n);
	for (int i = 0; i < n; i++) {
		if (p[i].isMax) {
			cout << '(' << p[i].x << ',' << p[i].y << ')';
			if (p[i].x < maxX)
				cout << ',';
		}
	}
	return 0;
}