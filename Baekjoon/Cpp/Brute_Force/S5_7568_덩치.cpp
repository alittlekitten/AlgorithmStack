#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, input1, input2, cnt;
    vector<vector<int>> v1;
    vector<int> v2;
    vector<int> ranking;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        v2.clear();
        cin >> input1 >> input2;
        v2.push_back(input1);
        v2.push_back(input2);
        v1.push_back(v2);
    }
    for (int i = 0; i < n; ++i) {
        cnt = 1;
        for (int j = 0; j < n; ++j) {
            if (v1[i][0] < v1[j][0] && v1[i][1] < v1[j][1]) cnt++;
        }
        ranking.push_back(cnt);
    }
   
    for (int i = 0; i < n; ++i) {
        cout << ranking[i] << " ";
    }
    
    return 0;
}
