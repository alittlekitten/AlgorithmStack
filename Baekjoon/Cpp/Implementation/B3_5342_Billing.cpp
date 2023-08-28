#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 5342 Billing
	// 구현
	string s;
	double ans = 0;
	map<string, double> m;
	m["Paper"] = 57.99;
	m["Printer"] = 120.50;
	m["Planners"] = 31.25;
	m["Binders"] = 22.50;
	m["Calendar"] = 10.95;
	m["Notebooks"] = 11.20;
	m["Ink"] = 66.95;

	while (1) {
		cin >> s;
		if (s == "EOI") break;
		else ans += m[s];
	}

	cout << fixed;
	cout.precision(2);
	cout << "$" << ans;

	return 0;
}
