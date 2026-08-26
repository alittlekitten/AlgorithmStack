class Solution {
public:
    int nthUglyNumber(int n) {
        int arr[1691] = {0};
        int two = 1;
        int three = 1;
        int five = 1;
        arr[1] = 1;

        for(int i = 2; i < n + 1; ++i) {
            int tmp2 = arr[two] * 2;
            int tmp3 = arr[three] * 3;
            int tmp5 = arr[five] * 5;

            arr[i] = min(tmp2, min(tmp3, tmp5));
            if(arr[i] == tmp2) ++two;
            if(arr[i] == tmp3) ++three;
            if(arr[i] == tmp5) ++five;
        }

        return arr[n];
    }
};
