#include <iostream>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 3009 네 번째 점
    // 기하학
    map<int, int> mx;
    map<int, int> my;
    int x, y;
    for (int i = 0; i < 3; ++i) {
        cin >> x >> y;
        mx[x]++;
        my[y]++;
    }

    for (auto i = mx.begin(); i != mx.end(); ++i) {
        if (i->second % 2 != 0) cout << i->first << " ";
    }

    for (auto i = my.begin(); i != my.end(); ++i) {
        if (i->second % 2 != 0) cout << i->first << " ";
    }

    return 0;
}
