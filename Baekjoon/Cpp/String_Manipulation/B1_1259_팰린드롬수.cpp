#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string input, chk;
	while (1) {
		chk = "yes";
		cin >> input;
		if (input == "0") break;
		for (int i = 0; i < input.size() / 2; ++i) {
			if (input[i] != input[input.size() - 1 - i]) chk = "no";
		}
		cout << chk << '\n';
	}

	return 0;
}
