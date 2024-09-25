#include <iostream>
#include <set>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 10867 중복 빼고 정렬하기
	// 구현
	int n, input;
	set<int> s;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		s.insert(input);
	}

	for (int elem : s) cout << elem << " ";

	return 0;
}
