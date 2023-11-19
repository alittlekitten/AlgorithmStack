#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30676 이 별은 무슨 색일까
	// 구현
	int n;
	cin >> n;
	if (n >= 620) cout << "Red";
	else if (n >= 590) cout << "Orange";
	else if (n >= 570) cout << "Yellow";
	else if (n >= 495) cout << "Green";
	else if (n >= 450) cout << "Blue";
	else if (n >= 425) cout << "Indigo";
	else cout << "Violet";

	return 0;
}
