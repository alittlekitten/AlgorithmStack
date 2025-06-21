#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 13116 30번
	// 애드혹
    int t, a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
	    while (a != b) {
	    	if (a > b) a /= 2;
	    	else b /= 2;
	    }
        cout << a << "0\n";
    }

	return 0;
}
