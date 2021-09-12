#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string tc;
	int n;
	vector<int> score_v;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> tc;
		int score = 0;
		int qs = 1;
		for (int i = 0; i < tc.size(); ++i) {
			if (tc[i] == 'O') {
				score += qs;
				qs++;
			}
			else qs = 1;
		}
		score_v.push_back(score);
	}
	for (int i = 0; i < n; ++i) {
		cout << score_v[i] << endl;
	}
}
