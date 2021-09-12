#include <iostream>

using namespace std;

int main(void) {
    int n;
    int answer = 0;
    string nums;
    cin >> n >> nums;
    for (int i = 0; i < n; ++i)
        answer += nums[i] - '0'; // 아스키코드 연산
    cout << answer;
}
