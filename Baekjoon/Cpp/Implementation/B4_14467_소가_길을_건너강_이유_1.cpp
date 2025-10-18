#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 14467 소가 길을 건너간 이유 1
	// 구현
    int n;
	cin >> n;
	if (n != 1 && n != 3) {
		cout << "EI";
		return 0;
	}
    
	cin >> n;
	if (n != 6 && n != 8) {
		cout << "EI";
		return 0;
	}
    
	cin >> n;
	if (n != 2 && n != 5) {
		cout << "EI";
		return 0;
	}
    
	cout << "JAH";

	return 0;
}
