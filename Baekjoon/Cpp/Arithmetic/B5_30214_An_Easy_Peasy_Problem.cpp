#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30214 An Easy-Peasy Problem
	// 수학
	int s1, s2;
	cin >> s1 >> s2;
	if (s1 * 2 >= s2) cout << "E";
	else cout << "H";

	return 0;
}
