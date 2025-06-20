class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string sMax = s, sMin = s;

        // Get max version: replace first digit that is not '9' with '9'
        char toReplaceMax = '\0';
        for (char c : s) {
            if (c != '9') {
                toReplaceMax = c;
                break;
            }
        }
        if (toReplaceMax != '\0') {
            for (char &c : sMax) {
                if (c == toReplaceMax) c = '9';
            }
        }

        // Get min version: replace first digit that is not '0' with '0'
        char toReplaceMin = '\0';
        for (char c : s) {
            if (c != '0') {
                toReplaceMin = c;
                break;
            }
        }
        if (toReplaceMin != '\0') {
            for (char &c : sMin) {
                if (c == toReplaceMin) c = '0';
            }
        }

        int maxNum = stoi(sMax);
        int minNum = stoi(sMin);
        return maxNum - minNum;
    }
};
