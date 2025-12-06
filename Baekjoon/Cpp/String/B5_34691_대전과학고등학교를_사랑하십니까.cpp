#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 34691 대전과학고등학교를 사랑하십니까?
	// 구현
	string s;
	while (1) {
		cin >> s;
		if (s == "animal") cout << "Panthera tigris\n";
		else if (s == "flower") cout << "Forsythia koreana\n";
		else if (s == "tree") cout << "Pinus densiflora\n";
		else break;
	}

	return 0;
}
