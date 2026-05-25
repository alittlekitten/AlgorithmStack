class Solution {
public:
    int addDigits(int num) {
        int tmp;
        int sum = 0;
        while (num > 9) {
            while (num != 0) {
                tmp = num % 10;
                sum += tmp;
                num = num / 10;
            }   
            num = sum;
            sum = 0;
        }
        
        return num;
    }
};
