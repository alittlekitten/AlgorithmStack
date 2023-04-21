#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	
	cout.tie(NULL);

	// 5026 박사 과정
	// 수학
	int t;
	string s;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> s;
		if (s == "P=NP") cout << "skipped\n";
		else {
			int tmp = s.find('+');
			int a = stoi(s.substr(0, tmp));
			int b = stoi(s.substr(tmp + 1));
			cout << a + b << '\n';
		}
	}
	
	return 0;
}
