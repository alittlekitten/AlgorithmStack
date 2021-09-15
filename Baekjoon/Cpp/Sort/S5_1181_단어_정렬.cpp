#include <iostream>
#include <set>
#include <string>
using namespace std;

// set 정렬조건 바꾸기 위해 구조체 구현
struct comp {
	bool operator() (const string& a, const string& b) const {
		// 사이즈 같으면 단어 아스키코드가 작은 것이 앞으로
		if (a.size() == b.size())
			return a < b;
		// 사이즈 다르면 사이즈 작은 것이 앞으로 
		return a.size() < b.size();
	}
};

int main() {
	set<string, comp> s;
	int n;
	cin >> n;

	string input;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		s.insert(input);
	}

	for (auto i : s) cout << i << '\n';

	return 0;
}
