#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20205 교수님 그림이 깨지는데요?
	// 구현
	int n, k;
	int arr[101][101] = { 0 };
	cin >> n >> k;

	bool chk;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> chk;
			for (int a = i * k; a < i * k + k; ++a) {
				for (int b = j * k; b < j * k + k; ++b) {
					arr[a][b] = chk;
				}
			}
		}
	}

	for (int i = 0; i < n * k; ++i) {
		for (int j = 0; j < n * k; ++j) {
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}

	return 0;
}
