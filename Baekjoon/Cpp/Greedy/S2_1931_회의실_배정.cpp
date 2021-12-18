#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(const pair<int, int>& a, const pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 그리이디
	// 가장 빨리 끝나는 회의를 선택하자

	int n, input1, input2;
	int answer = 0;
	vector<pair<int, int>> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input1 >> input2;
		v.push_back(make_pair(input1, input2));
	}

	sort(v.begin(), v.end(), comp);
	
	// 앞에서부터 빨리 끝나는 요소를 찾는다
	int t = 0; // 시간
	int index = 0; // 진행중인 회의의 인덱스
	while(index < v.size()){
		if (v[index].first >= t) {
			answer++;
			t = v[index].second;
		}
		index++;
	}
	cout << answer;

	return 0;
}
