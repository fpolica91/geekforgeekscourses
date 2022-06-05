memo = []


def max_value_helper(values, weights, i, W):
    if i == len(values):
        return 0
    if W == 0:
        return 0

    if memo[i][W] != -1:
        return memo[i][W]

    if weights[i] > W:
        memo[i][W] = max_value_helper(values, weights, i + 1, W)
        return memo[i][W]

    result = max(
        max_value_helper(values, weights, i + 1, W - weights[i]) +
        values[i],  # Considering the current item.
        max_value_helper(values, weights, i + 1,
                         W))  # Ignoring the current item.
    memo[i][W] = result
    return memo[i][W]


def max_value(values, weights, W):
    n = len(values)
    global memo
    memo = [[-1 for _ in range(W + 1)] for _ in range(n)]

    return max_value_helper(values, weights, 0, W)


if __name__ == '__main__':
    print(max_value([60, 100, 120], [10, 20, 30], 50))
    print(max_value([60, 100, 120], [10, 20, 50], 50))
