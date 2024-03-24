#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(NULL);

	// 1365 꼬인 전깃줄
	// 이분탐색
	int n, s;
	int arr[100001] = { 0 }; // LIS 넣는 용도의 배열
	int len = 0; // LIS의 길이
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		// 정상적인 경우 입력값을 그대로 arr에 넣고 len에 1 더하기
		if (!len || arr[len - 1] < s) arr[len++] = s;
		else {
			// 이분탐색을 위한 lower_bound 사용 (lower_bound값이 가리키는 주소값 반환)
			// lower_bound는 정렬을 깨지 않고 배열에 input 요소가 들어갈 수 있는 위치를 이분탐색으로 찾아주는 함수, 매개변수는 (시작점, 끝점, 입력값) 
			auto tmp = lower_bound(arr, arr + len, s);
			*tmp = s;
		}
	}
	cout << n - len;

	return 0;
}
