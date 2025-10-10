#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34282 Fair Grading
	// 수학
	double x, y, z;
	cin >> x >> y >> z;
	
	double avg = (x + y + 2 * z) / 4;
	
	if (avg >= 90) cout << "A";
	else if (avg >= 80) cout << "B";
	else if (avg >= 70) cout << "C";
	else if (avg >= 60) cout << "D";
	else cout << "F";

	return 0;
}
