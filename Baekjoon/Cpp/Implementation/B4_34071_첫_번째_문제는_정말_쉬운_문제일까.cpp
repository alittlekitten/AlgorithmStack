#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34071 첫 번째 문제는 정말 쉬운 문제일까?
	// 구현
	int n, x;
	cin >> n;
	
	int arr[101] = { 0 };
	int first = -1;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		if (i == 0) first = arr[i];
	}
	sort(arr, arr + n);
	if (first == arr[0]) cout << "ez";
	else if (first == arr[n - 1]) cout << "hard";
	else cout << "?";

	return 0;
}
