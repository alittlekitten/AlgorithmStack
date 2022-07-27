#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 17874 Piece of Cake!
    // 수학
    int a, b, c;
    cin >> a >> b >> c;
    
    int row, col;
    row = max(a-b, b);
    col = max(a-c, c);
    cout << row * col * 4;

    return 0;
}
