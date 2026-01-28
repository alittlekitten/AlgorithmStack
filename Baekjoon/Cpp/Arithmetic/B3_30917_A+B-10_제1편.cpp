#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30917 A+B - 10 (제1편)
	// 수학
	int a = 1;
	int resp;
	while (1) {
		cout << "? A " << a << endl;
		cin >> resp;
		if (resp == 1) break;
		++a;
	}

	int b = 1;
	while (1) {
		cout << "? B " << b << endl;
		int resp = 0;
		cin >> resp;
		if (resp == 1) break;
		++b;
	}

	cout << "! " << a + b << '\n';

	return 0;
}
