#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 31429 SUAPC 2023 Summer
	// 구현
	int n;
	int ballon[11] = { 12, 11, 11, 10, 9, 9, 9, 8, 7, 6, 6 };
	int time[11] = { 1600, 894, 1327, 1311, 1004, 1178, 1357, 837, 1055, 556, 773 };
	cin >> n;
	cout << ballon[n - 1] << " " << time[n - 1];

	return 0;
}
