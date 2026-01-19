#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	// 30876 Tren del Fin del Mundo
	// 수학
    int n, x, y;
    cin >> n;
    int xx = 1001;
    int yy = 1001;
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        if (y < yy) {
            xx = x;
            yy = y;
        }
    }
    cout << xx << " " << yy;

	return 0;
}
