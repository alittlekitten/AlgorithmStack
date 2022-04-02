#include <iostream>
#include <vector>
using namespace std;

int arr[1001];
int LIS[1001]; // 증가부분수열 수
int LIS2[1001]; // 감소부분수열 수


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    // 11054 가장 긴 바이토닉 부분 수열
    // ..dp? 완탐?
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        LIS[i] = 1;
        LIS2[i] = 1;
    }
    
    // 증가하는 부분수열 구하기
    for (int i = 0; i < n; ++i) { // 기준이 왼쪽부터 점차 오른쪽으로 이동
        for (int j = i - 1; j >= 0; --j) {
            if (arr[i] > arr[j] && LIS[i] <= LIS[j]) LIS[i] = LIS[j] + 1;
        }
    }
    
    // 감소하는 부분수열 구하기 (증가를 거꾸로)
    for (int i = n - 1; i >= 0; --i) { // 기준이 오른쪽부터 점차 왼쪽으로 이동
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] > arr[j] && LIS2[i] <= LIS2[j]) LIS2[i] = LIS2[j] + 1;
        }
    }

    // 최종결과
    for (int i = 0; i < n; ++i) {
        if (ans < LIS[i] + LIS2[i] - 1) ans = LIS[i] + LIS2[i] - 1;
    }

    cout << ans;
   
    return 0;
}
