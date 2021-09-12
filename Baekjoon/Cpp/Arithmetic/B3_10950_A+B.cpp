#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int n, a, b;
    cin >> n;
	vector<int> values;
	for (int i = 0; i < n; ++i){
		cin >> a >> b;
		values.push_back(a + b);
	}
	for (int i = 0; i < n; ++i) {
		cout << values[i] << endl;
	}
}
