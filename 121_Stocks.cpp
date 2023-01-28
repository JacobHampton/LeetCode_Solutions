#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int left = 0;
        int right = 0;
        int maxProfit = 0;

        while (right < prices.size()){
            if (prices[left] < prices[right])
                maxProfit = std::max(maxProfit, prices[right] - prices[left]);
            else
                left = right;
            right++;
        }
        return maxProfit;
    }
};

int main(){
    Solution newSolution;
    std::vector<int> priceExample{1,4,5,2,6};
    newSolution.maxProfit(priceExample);

    return 0;
}