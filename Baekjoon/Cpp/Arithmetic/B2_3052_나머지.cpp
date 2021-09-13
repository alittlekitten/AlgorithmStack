#include <iostream>
#include <string>
#include <set>

using namespace std;

int main(void) {
	set<int> nums;
	int a;
	for (int i = 0; i < 10; ++i) {
		cin >> a;
		nums.insert(a % 42);
	}
	cout << nums.size();

	return 0;
}
