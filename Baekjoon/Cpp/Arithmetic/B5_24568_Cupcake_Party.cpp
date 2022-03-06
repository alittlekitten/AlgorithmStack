#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 24568 Cupcake Party
    // 수학

    int r, s;
    cin >> r >> s;
    
    int cupcake = r * 8 + s * 3;
    cout << cupcake - 28;

    return 0;
}
