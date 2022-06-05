#include<bits/stdc++.h>
using namespace std;


// This function returns true if it is possible to allocate books to less-than-or-equal-to-m students
// such that no student reads more than `mid` number of pages.
bool is_possible(vector<int> &A, int m, int mid) {

    int student_count = 1;
    int pages_count = A[0];

    for (int i = 1; i < A.size(); i++) {

        // In this case, the current book can be allocated to the current student.
        if (pages_count + A[i] <= mid) {
            pages_count += A[i];
        }

        // In this case, the allocation for a new student will have to be started.
        else {
            student_count++;
            pages_count = A[i];
        }
    }

    return (student_count <= m);
}

int allocate_books(vector<int> A, int m) {

    int n = A.size();

    // low = the max value in array A[]
    // high = sum of array A[]
    int low = A[0], high = A[0];
    for (int i = 1; i < n; i++) {
        low = max(low, A[i]);
        high += A[i];
    }
    int result = high;

    while (low <= high) {
        int mid = (low + high) / 2;

        // if it is possible to allocate books such that no student reads more than `mid` number of pages,
        // then, anything >= mid is a valid probable output.
        if (is_possible(A, m, mid)) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {

    cout << allocate_books({12, 34, 67, 90}, 2) << endl;
    cout << allocate_books({10, 20, 10, 30}, 2) << endl;
}