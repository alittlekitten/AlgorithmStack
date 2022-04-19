#include <iostream>
using namespace std;

int arr[1000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1002 터렛
    // 기하학

    int t, x1, y1, r1, x2, y2, r2;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if (x1 == x2 && y1 == y2) {
            if (r1 == r2) cout << -1 << '\n';
            else cout << 0 << '\n';
            continue;
        }
        int dist1 = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        int dist2 = (r1 + r2) * (r1 + r2); // 각 원이 따로 위치한 경우
        int dist3 = (r1 - r2) * (r1 - r2); // 한 원이 다른 원 안에 있는 경우
        
        if (dist1 == dist2 || dist1 == dist3) cout << 1 << '\n';
        else if (dist3 < dist1 && dist1 < dist2) cout << 2 << '\n';
        else cout << 0 << '\n';
    }

    return 0;
}
