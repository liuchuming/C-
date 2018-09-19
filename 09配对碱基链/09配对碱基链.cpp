
#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	char line[1000][256];
	char c = cin.get();
	for (int i = 0; i < n; i++) {
		cin.getline(line[i], 256);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; line[i][j] != '\0'; j++) {
			if (line[i][j] == 'A')
				cout << 'T';
			else if (line[i][j] == 'T')
				cout << 'A';
			else if (line[i][j] == 'C')
				cout << 'G';
			else 
				cout << 'C';
		}
		cout << endl;
	}
	
	return 0;
}