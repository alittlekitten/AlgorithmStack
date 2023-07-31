#include <iostream>
using namespace std;

int arr[101];

void swap(int a, int b) {
	int tmp = arr[a];
	arr[a] = arr[b];
	arr[b] = tmp;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10813 공 바꾸기
	// 구현
	int n, m, ii, jj;
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) arr[i] = i;
	for (int i = 0; i < m; ++i) {
		cin >> ii >> jj;
		swap(ii, jj);
	}
	for (int i = 1; i <= n; ++i) cout << arr[i] << ' ';

	return 0;
}
