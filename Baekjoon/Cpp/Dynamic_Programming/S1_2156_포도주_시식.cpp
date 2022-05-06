#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];
int dp[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

	  // 2156 포도주 시식
    // DP

    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> arr[i];
    }

    dp[1] = arr[1];
    dp[2] = arr[1] + arr[2];
    dp[3] = max(arr[1] + arr[2], max(arr[1] + arr[3], arr[2] + arr[3]));
    
    // i번째껄 뽑는지 안뽑는지 여부, i-1번째껄 뽑는지 안뽑는지 여부에 따라 경우의 수를 판단해서 max값을 dp에 저장한다
    for (int i = 4; i <= n; ++i) {
        dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], max(dp[i - 2] + arr[i], dp[i - 1]));
    }

    cout << dp[n];

    return 0;
}

