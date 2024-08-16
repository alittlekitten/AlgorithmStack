#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13414 수강신청
	// 해시, 맵
	int k, l;
	string num; // 학번
	cin >> k >> l;

	map<string, int> m;
	vector<pair<int, string>> v;


	for (int i = 1; i <= l; ++i) {
		cin >> num;
		m[num] = i; // 중복신청 체크
	}

	for (auto iter = m.begin(); iter != m.end(); ++iter) {
		// 최종 입력 순서대로 정렬
		v.push_back(make_pair(iter->second, iter->first));
	}

	// 정렬
	sort(v.begin(), v.end());

	// 수강신청 성공한 사람의 학번 출력
	for (int i = 0; i < v.size(); ++i) {
		if (i < k) cout << v[i].second << '\n';
	}

	return 0;
}
