#!/usr/bin/env python
def is_possible(A, m, mid):
    student_count = 1
    pages_count = A[0]

    for i in range(1, len(A)):

        # In this case, the current book can be allocated to the current student.
        if pages_count + A[i] <= mid:
            pages_count += A[i]

        # In this case, the allocation for a new student will have to be started.
        else:
            student_count += 1
            pages_count = A[i]

    return (student_count <= m)

def allocate_books(A, m):

    n = len(A)

    # low = the max value in array A[]
    # high = sum of array A[]
    low = A[0]
    high = A[0]
    for i in range(1, n):
        low = max(low, A[i])
        high += A[i]

    result = high
    while low <= high:
        mid = (low + high) // 2

        # if it is possible to allocate books such that no student reads more than `mid` number of pages,
        # then, anything >= mid is a valid probable output.
        if is_possible(A, m, mid):
            result = mid
            high = mid - 1
        else:
            low = mid + 1

    return result

if __name__ == '__main__':
    print(allocate_books([12, 34, 67, 90], 2))