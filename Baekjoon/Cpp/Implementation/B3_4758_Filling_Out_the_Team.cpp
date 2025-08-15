#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 4758 Filling Out the Team
	// 구현
    double speed, weight, strength;
    while (1) {
        bool chk = false;
        cin >> speed >> weight >> strength;
        if (!speed && !weight && !strength) break;
        if (speed <= 4.5 && weight >= 150 && strength >= 200) {
            cout << "Wide Receiver ";
            chk = true;
        }
        if (speed <= 6.0 && weight >= 300 && strength >= 500) {
            cout << "Lineman ";
            chk = true;
        }
        if (speed <= 5.0 && weight >= 200 && strength >= 300) {
            cout << "Quarterback ";
            chk = true;
        }
        if (!chk) cout << "No positions";
        cout << '\n';
    }

	return 0;
}
