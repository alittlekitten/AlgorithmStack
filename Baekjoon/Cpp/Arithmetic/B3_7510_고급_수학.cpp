#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 7510 고급 수학
    // 수학
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a >> b >> c;
        int nums[3] = { 0 };
        nums[0] = a;
        nums[1] = b;
        nums[2] = c;
        sort(nums, nums + 3);

        cout << "Scenario #" << i + 1 << ":\n";
        if (nums[0] * nums[0] + nums[1] * nums[1] == nums[2] * nums[2]) cout << "yes";
        else cout << "no";
        cout << "\n\n";
    }

    return 0;
}
