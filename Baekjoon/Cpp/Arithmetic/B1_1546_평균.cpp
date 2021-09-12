#include <iostream>

using namespace std;

int main(void) {
    int n, score;
    int maxscore = 0;
    double total = 0;
    double average = 0;

    cin >> n;
    for (int i = 0; i < n; ++i) { // 최댓값 찾기
        cin >> score;
        total += score;
        if (maxscore < score) maxscore = score;
    }
    total = (double)total / (double)maxscore * 100; // 조작한 점수 총합 구하기 - 소숫점 있으니까 double형이어야함!!
    average = total / n; // 평균구하기

    cout << average;

}
