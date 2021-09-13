#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int n, answer;
	cin >> n;
	if (n % 4 == 0) {
		if (n % 100 == 0) {
			if (n % 400 == 0) answer = 1;
			else answer = 0;
		}
		else answer = 1;
	}
	else answer = 0;
	
	cout << answer;

	return 0;
}
