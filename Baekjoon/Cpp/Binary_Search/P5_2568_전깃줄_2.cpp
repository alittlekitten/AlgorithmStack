#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2568 전깃줄 - 2
	// 이분탐색, LIS, 가장 긴 증가하는 부분수열
	// 2565의 업그레이드.. DP로 풀면 전봇대 연결 위치가 최대 500000이라 터짐!! 무조건 이분탐색!!

	int LIS[500001] = { 0 }; // LIS
	int idxLIS[500001] = { 0 }; // arr 요소의 LIS에서의 위치
	bool chk[500001] = { 0 };
	vector<pair<int, int>> v; // 원본배열 (start, end)
	int n; // 전깃줄 개수
	int len = 0; // LIS에 들어간 요소의 수
	vector<int> extracted; // 전봇대 A에서 추출된 친구들
	map<int, int> m;
	cin >> n;

	// 초기 배열 생성
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		v.push_back(make_pair(x, y));
		m[y] = x; // y로 x를 구할 수 있게 map 작성
	}

	// 전봇대 A의 순서대로 정렬 (NlogN이라.. 살았다..)
	sort(v.begin(), v.end());

	// 정렬해놓고 B의 LIS를 구함 (안겹치는 최대 전깃줄은 LIS가 될 것이므로!!)
	for (int i = 0; i < n; ++i) {
		auto tmp = lower_bound(LIS, LIS + len, v[i].second); // 정렬을 유지하면서 요소가 들어갈 위치를 찾아주는 lower_bound 사용
		*tmp = v[i].second; // v[i]를 LIS에서 넣어야 하는 위치에 삽입
		idxLIS[i] = distance(LIS, tmp); // arr[i]의 LIS위치값을 idxLIS에 넣기
		if (tmp == LIS + len) len++; // 만약 LIS의 마지막에 넣어야 하는 경우 len을 1 증가시킴
	}

	// LIS에 안들어가는 요소의 전봇대 A의 위치를 extracted에 넣기
	for (int i = n - 1; i >= 0; --i) {
		if (idxLIS[i] != len - 1) extracted.push_back(m[v[i].second]);
		else {
			len--;
		}
	}

	// 없애야 하는 요소의 수
	cout << extracted.size() << '\n';

	// 정렬해서 출력
	sort(extracted.begin(), extracted.end());
	for (int i = 0; i < extracted.size(); ++i) {
		cout << extracted[i] << '\n';
	}

	return 0;
}
