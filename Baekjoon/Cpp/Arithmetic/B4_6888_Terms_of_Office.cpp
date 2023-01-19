#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 6888 Terms of Office
    // 수학
    int y, input;
    cin >> y >> input;
    while(y <= input) {
        cout << "All positions change in year " << y << '\n';
        y += 60;
    }
 
    return 0;
}
