#include <iostream>
#include <string>
#include <deque>
#include <sstream>
#include <algorithm>

using namespace std;

deque<string> split(string input, char delimiter) {
	deque<string> answer;
	stringstream ss(input);
	string temp;

	while (getline(ss, temp, delimiter)) {
		answer.push_back(temp);
	}

	return answer;
}

deque<string> reverse(deque<string> v) {
	for (int i = 0; i < v.size() / 2; ++i) {
		string tmp;
		tmp = v[i];
		v[i] = v[v.size() - 1 - i];
		v[v.size() - i - 1] = tmp;
	}
	return v;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	// R의 개수를 세어서 홀수일 때 마지막 딱 1번만 뒤집어야함
	// D를 할 때는 맨 앞이 지워진다는 것을 생각

	int t, n;
	string p, arr;

	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> p >> n >> arr;
		arr = arr.substr(1, arr.size() - 2);
		deque<string> d = split(arr, ',');

		int Rcounter = 0;
		bool errorChk = false;

		// R와 D 판단
		for (int j = 0; j < p.size(); ++j) {
			if (p[j] == 'R') Rcounter++;
			else if (p[j] == 'D') {
				if (d.size() == 0) {
					cout << "error\n";
					errorChk = true;
					break;
				}
				if (Rcounter % 2) d.pop_back();
				else d.pop_front();
			}
		}

		if (errorChk) continue;

		// R이 홀수번 나왔다면 v 뒤집기
		if (Rcounter % 2) d = reverse(d);
		
		// 출력
		cout << '[';
		for (int j = 0; j < d.size(); ++j) {
			cout << d[j];
			if (j != d.size() - 1) cout << ',';
		}
		cout << ']' << '\n';
	}

	return 0;
}
