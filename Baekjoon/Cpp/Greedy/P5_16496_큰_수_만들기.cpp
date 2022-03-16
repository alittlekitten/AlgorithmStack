#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// 숫자들을 이어붙였을 때 더 큰 수
bool cmp(string a, string b) {
	return a + b > b + a;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16496 큰 수 만들기
	// 그리디

	int n;
	string s;
	vector<string> v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		v.push_back(s);
	}

	// 이어붙였을 때 더 큰 수를 나타내는 순서로 정렬
	sort(v.begin(), v.end(), cmp);

	// 0이 연속으로 오는 경우 처리
	if (v[0] == "0") cout << 0;
	else {
		for (int i = 0; i < n; ++i) {
			cout << v[i];
		}
	}
	
    return 0;
}
