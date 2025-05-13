#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2948 2009년
	// 구현
	int m, d;
	int arr[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string day[7] = { "Wednesday", "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday" };
	cin >> d >> m;

	for (int i = 0; i < m - 1; ++i) d += arr[i];
	cout << day[d % 7];

	return 0;
}
