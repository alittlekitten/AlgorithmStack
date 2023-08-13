#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28431 양말 짝 맞추기
	// 구현
	int n;
	int arr[10] = { 0 };
	for (int i = 0; i < 5; ++i) {
		cin >> n;
		++arr[n];
	}
	
	for (int i = 0; i < 10; ++i) {
		if (arr[i] % 2) {
			cout << i;
			break;
		}
	}

	return 0;
}
