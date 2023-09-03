#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 16727 ICPC
	// 구현
	int p1, s1, p2, s2;
	cin >> p1 >> s1 >> s2 >> p2;
	int chk = p1 + p2 - s1 - s2;
	if (chk > 0) cout << "Persepolis";
	else if (chk < 0) cout << "Esteghlal";
	else {
		if (s1 > p2) cout << "Esteghlal";
		else if (s1 < p2) cout << "Persepolis";
		else cout << "Penalty";
	}

	return 0;
}
