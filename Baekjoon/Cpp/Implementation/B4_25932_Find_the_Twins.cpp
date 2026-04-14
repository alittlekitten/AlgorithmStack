#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 25932 Find the Twins
	// 구현
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		int arr[10] = { 0 };
		bool chk1 = false;
		bool chk2 = false;

		for (int j = 0; j < 10; ++j) {
			cin >> arr[j];
			cout << arr[j] << " ";

			if (arr[j] == 17) chk1 = true;
			if (arr[j] == 18) chk2 = true;
		}

		if (chk1 && chk2) cout << "\nboth\n\n";
		else if (chk2) cout << "\nmack\n\n";
		else if (chk1) cout << "\nzack\n\n";
		else cout << "\nnone\n\n";

	}

	return 0;
}
