#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 20232 Archivist
	// 구현
	int n;
	cin >> n;
	if (n == 1996 || n == 1997 || n == 2000 || n == 2007 || n == 2008 || n == 2013 || n == 2018) cout << "SPbSU";
	else if (n == 2006) cout << "PetrSU, ITMO";
	else cout << "ITMO";

	return 0;
}
