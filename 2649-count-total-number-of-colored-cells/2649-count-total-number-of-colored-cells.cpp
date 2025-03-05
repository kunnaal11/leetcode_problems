class Solution {
public:
    long long coloredCells(int n) {
        return 1+ (2*(long long)(n-1)*n);
    }
};
/*The pattern of added cells follows an arithmetic sequence:1, 4, 8, 12, 16, ...

This sequence can be represented as 1+ 4 * (1, 2, 3, 4, ...)
For minute n, the number of added cells is 1+ 4 * (n-1)
The total number of added cells is the sum of this sequence:1+ 4 * (1 + 2 + ... + (n-1))
This sum is calculated by the formula:1+ 4 * ((n-1) * n / 2)==1+ 2*((n-1)(n))   */