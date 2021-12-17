#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 기존 배열 복사한 후에 중복 제거
	// 중복 제거한 요소들을 정렬한 후에 0부터 순서대로 값 부여 (map에 넣어줌)
	// 전체 배열 돌면서 새롭게 값 부여하고 출력
	
	int n, input;
	vector<int> v1;
	vector<int> v2;
	map<int, int> m;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		v1.push_back(input);
	}

	// vector 복사
	v2.resize(v1.size());
	copy(v1.begin(), v1.end(), v2.begin());

	// 복사한 vector 정렬 후 중복 제거
	sort(v2.begin(), v2.end());
	v2.erase(unique(v2.begin(), v2.end()), v2.end());

	// map에 압축된 좌표 삽입
	for (int i = 0; i < v2.size(); ++i) m[v2[i]] = i;

	// 각 좌표에 맞는 값 출력
	for (int i = 0; i < n; ++i) cout << m[v1[i]] << " ";
	
	return 0;
}
