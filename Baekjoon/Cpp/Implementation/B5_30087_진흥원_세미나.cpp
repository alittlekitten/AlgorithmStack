#include <iostream>
#include <string>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30087 진흥원 세미나
	// 구현
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s;
		if (s == "Algorithm") cout << "204";
		else if (s == "DataAnalysis") cout << "207";
		else if (s == "ArtificialIntelligence") cout << "302";
		else if (s == "CyberSecurity") cout << "B101";
		else if (s == "Network") cout << "303";
		else if (s == "Startup") cout << "501";
		else if (s == "TestStrategy") cout << "105";
		cout << '\n';
	}

	return 0;
}
