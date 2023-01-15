#include <iostream>
#include <vector>
using namespace std;

vector<int> fail(string s) {
	vector<int> v(s.size(), 0); // 실패 배열 (partial match table)
	int idx = 0; // 비교 시작 인덱스 (접두사와 접미사가 같은 경우의 길이이기도 함)
	for (int i = 1; i < s.size(); ++i) { // i는 비교 대상 인덱스 시작 위치
		while (idx > 0 && s[i] != s[idx]) {
			idx = v[idx - 1]; // 둘이 다르면 이전 비교 인덱스 요소랑 비교
			cout << idx << endl;
		}
		if (s[i] == s[idx]) v[i] = ++idx;
	}
	return v;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 1305 광고
	// 문자열(kmp)
	int l;
	string s;
	cin >> l >> s;
	vector<int> v = fail(s);
	cout << l - v[l - 1] << endl;

	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << " ";
	}

	return 0;
}
