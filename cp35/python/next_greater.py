def next_greater(arr):
    n = len(arr)
    stack = []
    result = [-1] * n
    #
    for i in range(n - 1, -1, -1):
        while stack and stack[-1] <= arr[i]:
            stack.pop()
#
        if stack:
            result[i] = stack[-1]
        stack.append(arr[i])
#
    return result


#
#
result = next_greater([6, 8, 1, 2, 4, 3])
for i in result:
    print(i, end=' ')