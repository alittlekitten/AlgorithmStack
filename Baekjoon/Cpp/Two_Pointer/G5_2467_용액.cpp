#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2467 용액
	// 투포인터
	int n;
	int arr[100001] = { 0 };
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
	
	int frontIdx = 0; // 앞쪽인덱스
	int backIdx = n-1; // 뒷쪽인덱스
	int minValue = 2000000000;
	int minIdx1 = 0;
	int minIdx2 = n-1;
	while (frontIdx < backIdx) {
		if (abs(arr[frontIdx] + arr[backIdx]) < minValue) {
			minValue = abs(arr[frontIdx] + arr[backIdx]);
			minIdx1 = frontIdx;
			minIdx2 = backIdx;
		}
	
		if (abs(arr[frontIdx] + arr[backIdx] < 0)) frontIdx++;
		else backIdx--;
	}
	cout << arr[minIdx1] << " " << arr[minIdx2];

	return 0;
}
