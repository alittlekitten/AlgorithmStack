#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 1297 TV 크기
    // 기하학
    int diagonal, heightRatio, widthRatio;
    cin >> diagonal >> heightRatio >> widthRatio;
    double x = sqrt((double)(diagonal * diagonal) / (heightRatio * heightRatio + widthRatio * widthRatio));
    int height = floor(heightRatio * x);
    int width = floor(widthRatio * x);
    cout << height << " " << width << "\n";

    return 0;
}
