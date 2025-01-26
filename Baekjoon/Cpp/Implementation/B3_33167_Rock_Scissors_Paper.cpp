#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 33167 じゃんけん (Rock-Scissors-Paper)
	// 구현
	int n;
	string s1, s2;
	cin >> n >> s1 >> s2;
	
	int a1 = 0;
	int a2 = 0;
	for (int i = 0; i < n; ++i) {
		if (s1[i] == 'R' && s2[i] == 'S' || s1[i] == 'S' && s2[i] == 'P' || s1[i] == 'P' && s2[i] == 'R') ++a1;
		else if (s1[i] == 'S' && s2[i] == 'R' || s1[i] == 'P' && s2[i] == 'S' || s1[i] == 'R' && s2[i] == 'P') ++a2;
	}
	cout << a1 << " " << a2;

	return 0;
}
