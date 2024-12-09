#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 15366 Olivander
	// 정렬
    int n, input;
    vector<int> v1;
    vector<int> v2;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> input;
        v1.push_back(input);
    }
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v2.push_back(input);
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; ++i) {
        if (v1[i] > v2[i]) {
            cout << "NE";
            return 0;
        }
    }
    cout << "DA";

	return 0;
}
