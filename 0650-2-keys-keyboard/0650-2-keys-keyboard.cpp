class Solution {
public:
    
     int minSteps(int n) {
        if (n == 1)
            return 0;
        int temp = n, ret = 0, i = 0;
        while (temp != 1 && i != 1) {
            for (i = temp / 2; i > 1; i--) {
                if (temp % i == 0) {
                    ret += temp / i;
                    temp = i;
                    break;
                }
            }
        }
        return ret + temp;
    }

};