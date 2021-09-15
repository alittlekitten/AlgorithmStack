#include <iostream>
#include <vector>
using namespace std;

int main() {
	// n이 나오는 순간 그 이후로 내림차순이 들어오지 않으면 NO다
	// n이 나올 때 까지는 계속 증가하는 오름차순이 나오되, 1칸 내려가는건 허용된다
	int n, input, now, in, out;
	bool ascending, chk;
	vector<string> v;
	vector<int> stack;
	cin >> n;
	
	ascending = true;
	chk = true;
	now = 0;
	in = 0;
	out = 0;

	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (ascending == true && input > now) {
			now = input;
			out++;
			while (in != input) {
				v.push_back("+");
				in++;
				stack.push_back(in);
			}
			v.push_back("-");
			stack.pop_back();
		}
		else if (ascending == true && input == stack.back()) {
			now = input;
			out++;
			v.push_back("-");
			stack.pop_back();
		}
		else if (ascending == true && input < now - 1){
			chk = false;
			break;
		}

		if (ascending == false && input < now) {
			out++;
			v.push_back("-");
			now = input;
			stack.pop_back();
		}
		else if (ascending == false && input > now){
			chk = false;
			break;
		}

		// 꼭대기를 찍는 순간 포착
		if (n == input) ascending = false;
	}

	if (chk == false) cout << "NO";
	else {
		for (auto iter = v.begin(); iter != v.end(); ++iter)
			cout << *iter << '\n';
	}

	return 0;
}
