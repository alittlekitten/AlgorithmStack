#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 5523 경기 결과
    // 수학
    int n, a, b;
    int ascore = 0;
    int bscore = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a >> b;
        if (a > b) ++ascore;
        else if (a < b) ++bscore;
    }
    cout << ascore << " " << bscore;
  
    return 0;
}
