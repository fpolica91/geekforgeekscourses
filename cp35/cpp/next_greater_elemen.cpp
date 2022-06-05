#include<bits/stdc++.h>
using namespace std;

// TC: O(n)
// Aux Space: O(n)
vector<int> next_greater(vector<int> arr) {
    int n = arr.size();

    vector<int> result(n);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        
        // Popping the topmost smaller elements from the list of potential answers
        // to find the topmost greater element.
        while (!s.empty() and s.top() <= arr[i]) {
            s.pop();
        }

        // If there's no greater element in the list of potential answers.
        if (s.empty()) {
            result[i] = -1;
        }

        // If there's a greater element in the list of potential answers.
        else {
            result[i] = s.top();
        }

        s.push(arr[i]);
    }

    return result;
}

int main() {

    vector<int> result = next_greater({6, 8, 1, 2, 4, 3});
    for (int i : result) {
        cout << i << " ";
    }
}