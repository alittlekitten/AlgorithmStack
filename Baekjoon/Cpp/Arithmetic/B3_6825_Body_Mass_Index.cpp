#include <iostream>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 6825 Body Mass Index
	// 수학
	double w, h;
	cin >> w >> h;
	double bmi = w / pow(h, 2);
	if (bmi < 18.5) cout << "Underweight";
	else if (bmi <= 25.0) cout << "Normal weight";
	else cout << "Overweight";

	return 0;
}
