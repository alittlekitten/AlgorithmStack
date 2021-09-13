#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int hour, minute;
	cin >> hour >> minute;
	if (minute - 45 < 0) {
		if (hour == 0) hour = 23;
		else hour--;
		minute += 15;
	}
	else minute -= 45;

	cout << hour << " " << minute;

	return 0;
}
