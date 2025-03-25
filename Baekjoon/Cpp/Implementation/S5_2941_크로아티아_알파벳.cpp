#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 2941 크로아티아 알파벳
	// 구현
	string s;
	string arr[8] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	cin >> s;

	for (int i = 0; i < 8; ++i) {
		while (1) {
			int idx = s.find(arr[i]);
			if (idx == string::npos) break;
			s.replace(idx, arr[i].size(), "#");
		}
	}

	cout << s.size();

	return 0;
}
