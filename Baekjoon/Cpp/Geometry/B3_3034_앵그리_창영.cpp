#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 3034 앵그리 창영
    // 기하학

    int n, w, h, input;
    cin >> n >> w >> h;
    int limitSquare = w * w + h * h;
    
    for (int i = 0; i < n; ++i){
        cin >> input;
        if (input * input <= limitSquare) cout << "DA" << '\n';
        else cout << "NE" << '\n';
    }

    return 0;
}
