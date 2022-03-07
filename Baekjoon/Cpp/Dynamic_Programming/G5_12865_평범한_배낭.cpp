#include <iostream>
#include <vector>

using namespace std;

int arr[101][100001] = { 0 };
vector<pair<int, int>> items;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 12865 평범한 배낭
    // DP (knapsack 문제는 쪼갤 수 있으면 그리디, 쪼갤 수 없으면 DP)

    int n, k, v, w;
    cin >> n >> k;

    items.push_back(make_pair(0, 0)); // 첫 칸 초기화
    for (int i = 0; i < n; ++i) {
        cin >> w >> v;
        items.push_back(make_pair(w, v)); // first는 무게, second는 가치
    }

    for (int i = 1; i <= n; ++i) { // 아이템 단계
        for (int w = 1; w <= k; ++w) { // 무게
            if (items[i].first <= w && arr[i - 1][w - items[i].first] + items[i].second > arr[i - 1][w]) { // 전체 기준 무게보다 해당 아이템이 가볍고(유효한 index 검사), w에서 현재 아이템의 무게를 뺀 것 까지의 무게를 허용했을 때 이전 요소까지의 최적 가치가 현재 w의 무게를 허용했을 때 현재 요소까지의 가치보다 작다면
                arr[i][w] = arr[i - 1][w - items[i].first] + items[i].second; // w-items[i].first의 무게를 허용했을 때 이전 요소까지의 가치에다가 현재 요소의 가치를 더한 것을 arr[i][w]에 할당 (기존 요소에 그대로 더하거나, 이전 요소를 빼고 넣었을 때의 최적값이 들어가게됨)
            }
            else {
                arr[i][w] = arr[i - 1][w]; // 그 외의 경우에는 기존의 아이템만 넣음 (현재 아이템을 넣지 않기 때문에 효용은 같은 w의 이전 요소와 같게됨
            }
        }
    }

    cout << arr[n][k];

    return 0;
}
