#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> memo;

int max_value_helper(vector<int> &values, vector<int> &weights, int i, int W) {

    if (i == values.size()) { // If no items are left.
        return 0;
    }
    if (W == 0) { // If the remaining of the knapsack is zero.
        return 0;
    }

    if (memo[i][W] != -1) {
        return memo[i][W];
    }

    if (weights[i] > W) {
        return memo[i][W] = max_value_helper(values, weights, i + 1, W);
    }

    int result = max(max_value_helper(values, weights, i + 1, W - weights[i]) + values[i], // Considering the current item.
                     max_value_helper(values, weights, i + 1, W));                         // Ignoring the current item.

    
    return memo[i][W] = result;
}

int max_value(vector<int> values, vector<int> weights, int W) {
    
    int n = values.size();
    memo = vector<vector<int>> (n, vector<int> (W + 1, -1));
    return max_value_helper(values, weights, 0, W);
}


int main() {

    cout << max_value({60, 100, 120}, {10, 20, 30}, 50) << endl;
    cout << max_value({60, 100, 120}, {10, 20, 50}, 50) << endl;

    cout << max_value_bottom_up({60, 100, 120}, {10, 20, 30}, 50) << endl;
    cout << max_value_bottom_up({60, 100, 120}, {10, 20, 50}, 50) << endl;
}