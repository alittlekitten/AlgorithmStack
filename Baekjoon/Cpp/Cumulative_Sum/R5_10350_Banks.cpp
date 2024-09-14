#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10350 Banks
	// 누적합
	int n;
	int arr[20001] = { 0 }; // 모든 점에서 누적합을 시작해야하기 때문에 2배만큼의 공간이 필요
	cin >> n;

	// 입력
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
		arr[i + n] = arr[i];
	}

	// 누적합 처리
	for (int i = 0; i < n * 2; ++i) arr[i + 1] += arr[i];

	// 모든 음의 누적합에 대해 음수의 누적합의 절대값을 전체 누적합으로 나눈 값의 올림을 모든 음수에 누적합에 적용한다
	long long ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n + i; ++j) {
			if (arr[j] - arr[i] < 0) {
				ans += (long long)ceil(((-1) * (double)arr[j] + arr[i]) / ((double)arr[n + i] - arr[i]));
			}
		}
	}

	cout << ans;

// 	for (int i = 0; i < n * 2; ++i) cout << arr[i] << " ";

	// 모든 음의 누적합에 대해 음수의 누적합의 절대값을 전체 누적합으로 나눈 값의 올림을 모든 음수에 누적합에 적용한다
	//cout << ceil((-1) * (double)minus / (double)total) * minus * -1;

	// 그런데 이게 왜 가능한걸까
	// arr[minIdx]값이 abs(minValue) * 2만큼 증가하고, 양 옆의 값이 abs(minValue)만큼 감소하므로 총 합은 항상 같다
	// -7 1 1 같은 케이스는 어떨까
	// 7 -6 -6 -> 1 6 -12 -> -11 -6 12 -> 11 -17 1 -> -6 17 -16 -> -22 1 16 -> 22 -21 -6 -> 1 21 -27 -> -26 -6 27 ... 
	// 전체 합이 음수면 의미가 없다 -> 불가능

	// 1 -2 -1 3 같은 케이스는 어떨까 (문제 예제)
	// -1 2 -3 3 -> -1 -1 3 0 -> 1 -2 3 -1 -> -1 2 1 -1 -> 1 1 1 -2 -> -1 1 -1 2 -> 1 0 -1 1 -> 1 -1 1 0 -> 0 1 0 0

	// 1 -2 -1 4는 어떨까
	// -1 2 -3 4 -> -1 -1 3 1 -> 1 -2 3 0 -> -1 2 1 0 -> 1 1 1 -1 -> 0 1 0 1
	// 6 3/2
	// ceil(음수의 누적합 / 전체 누적합/) * abs(음수의 누적합) ?

	// 최대 합이 변하지 않기 때문에 가장 작은 수를 양 옆에 더해주면 못해도 돌아갈 일은 없다

	return 0;
}
