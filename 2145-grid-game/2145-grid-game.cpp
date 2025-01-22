class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        long long firstRowRemainSum = 0;
        for (int i = 0; i < grid[0].size(); i++) {
            firstRowRemainSum += grid[0][i];
        }

        long long secondRowRemainSum  = 0, minimizedRobot2Sum = LLONG_MAX;
        for(int Robot1Col = 0; Robot1Col < grid[0].size(); Robot1Col++) { //O(col);
            //Robot1 took this strategy
            firstRowRemainSum -= grid[0][Robot1Col];

            //Robot2 will try to do best after Robot1 has taken the above strategy
            long long bestOfRobot2 = max(firstRowRemainSum, secondRowRemainSum);

            minimizedRobot2Sum     = min(minimizedRobot2Sum, bestOfRobot2);

            secondRowRemainSum    += grid[1][Robot1Col];
        }

        return minimizedRobot2Sum;
    }
};
/*
note this condition is not true if we maxi rob1 and will get rob2 max in remiming(its not correct approch,let see why)
bcoz Let’s take this example, 
if grid =
[[2, 4, 6],
[8, 9, 10]], 

the first robot could take the path 2 -> 8 -> 9 -> 10 to maximize its points, leaving 4 and 6 for the second robot. 

But the better strategy is for the first robot to turn down at index 1, leaving either 6 or 8 for the second robot, which would then get max(6, 8) = 8 points instead of 10.

You can clearly see that here the point of Robot2 is prioritised instead of maximising the points of Robot1
so-->
## correct approch is that "rob1 should slelect such path so that robb2 will et minimum "   */