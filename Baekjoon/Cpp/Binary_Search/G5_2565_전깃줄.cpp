#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2565 전깃줄
	// 이분탐색, LIS, 가장 긴 증가하는 부분수열
	// n이 500이라 DP로 풀어도 되는데, LIS 배운 김에.. (14003번과 같은 문제)

	int LIS[501] = { 0 }; // LIS
	int idxLIS[501] = { 0 }; // arr 요소의 LIS에서의 위치
	vector<pair<int, int>> v; // 원본배열 (start, end)
	int n; // 전깃줄 개수
	int len = 0; // LIS에 들어간 요소의 수
	cin >> n;

	// 초기 배열 생성
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	// 전봇대 A의 순서대로 정렬
	sort(v.begin(), v.end());

	// 정렬해놓고 B의 LIS를 구함 (안겹치는 최대 전깃줄은 LIS가 될 것이므로!!)
	for (int i = 0; i < n; ++i) {
		auto tmp = lower_bound(LIS, LIS + len, v[i].second); // 정렬을 유지하면서 요소가 들어갈 위치를 찾아주는 lower_bound 사용
		*tmp = v[i].second; // v[i]를 LIS에서 넣어야 하는 위치에 삽입
		idxLIS[i] = distance(LIS, tmp); // arr[i]의 LIS위치값을 idxLIS에 넣기
		if (tmp == LIS + len) len++; // 만약 LIS의 마지막에 넣어야 하는 경우 len을 1 증가시킴
	}

	cout << v.size() - len; // LIS에 들어간 요소의 개수가 전깃줄의 최댓값이므로 전체 전깃줄에서 LIS의 length를 빼줌

    return 0;
}
