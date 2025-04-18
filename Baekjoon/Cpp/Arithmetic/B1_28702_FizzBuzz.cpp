#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 28702 FizzBuzz
	// 수학
	string s;
	int n = 0;
	for (int i = 0; i < 3; ++i) {
		cin >> s;
		if (s != "FizzBuzz" && s != "Fizz" && s != "Buzz") n = stoi(s) + 3 - i;
	}

	if (!(n % 15)) cout << "FizzBuzz";
	else if (!(n % 5) && (n % 3)) cout << "Buzz";
	else if ((n % 5) && !(n % 3)) cout << "Fizz";
	else cout << n;

	return 0;
}
