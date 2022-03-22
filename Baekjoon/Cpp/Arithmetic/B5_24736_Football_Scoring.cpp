#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 24736 Football Scoring
	// 수학

	int t, f, s, p, c;
	for (int i = 0; i < 2; ++i){
		cin >> t >> f >> s >> p >> c;
		cout << t * 6 + f * 3 + s * 2 + p + c * 2 << " ";
	}

	return 0;
}
