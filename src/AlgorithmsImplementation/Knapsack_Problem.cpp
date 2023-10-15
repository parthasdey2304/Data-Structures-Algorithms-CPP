#include <iostream>
#include <vector>

// Function to solve the 0/1 Knapsack problem using dynamic programming
int knapsack(int W, const std::vector<int>& weights, const std::vector<int>& values, int n) {
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(W + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= W; ++w) {
            // If the current item's weight exceeds the capacity, skip it
            if (weights[i - 1] > w)
                dp[i][w] = dp[i - 1][w];
            else
                dp[i][w] = std::max(dp[i - 1][w], dp[i - 1][w - weights[i - 1]] + values[i - 1]);
        }
    }

    return dp[n][W];
}

int main() {
    std::vector<int> values = {60, 100, 120};
    std::vector<int> weights = {10, 20, 30};
    int capacity = 50;
    int n = values.size();

    int maxValue = knapsack(capacity, weights, values, n);
    std::cout << "Maximum value in the knapsack: " << maxValue << std::endl;

    return 0;
}
