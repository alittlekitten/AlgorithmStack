#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13223 소금 폭탄
	// 문자열
	string t1, t2;
	cin >> t1 >> t2;

	int hms1[3] = { 0 };
	int hms2[3] = { 0 };

	for (int i = 0; i < 3; ++i) {
		hms1[i] = stoi(t1.substr(3 * i, 2));
		hms2[i] = stoi(t2.substr(3 * i, 2));
	}
	if (hms2[2] - hms1[2] < 0) {
		hms2[2] += 60;
		++hms1[1];
	}
	if (hms2[1] - hms1[1] < 0) {
		hms2[1] += 60;
		++hms1[0];
	}
	if (hms2[0] - hms1[0] < 0 || t1 == t2) hms2[0] += 24;

	for (int i = 0; i < 3; ++i) {
		if ((hms2[i] - hms1[i]) / 10 == 0) cout << 0;
		cout << hms2[i] - hms1[i];
		if (i != 2) cout << ':';
	}

	return 0;
}
