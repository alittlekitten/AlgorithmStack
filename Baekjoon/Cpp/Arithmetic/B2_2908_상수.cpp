#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string a, b;
	int a_int, b_int, big;
	cin >> a >> b;
	
	char tmp;

	tmp = a[2];
	a[2] = a[0];
	a[0] = tmp;

	tmp = b[2];
	b[2] = b[0];
	b[0] = tmp;
	
	a_int = stoi(a);
	b_int = stoi(b);

	if (a_int > b_int) big = a_int;
	else big = b_int;

	cout << big;

	return 0;
}
