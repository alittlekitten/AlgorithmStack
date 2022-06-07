#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2744 대소문자 바꾸기
	// 문자열

	string a;
	cin >> a;
	for (int i = 0; i < a.size(); ++i) {
		if (a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
		else a[i] -= 32;
	}

	cout << a;

	return 0;
}
