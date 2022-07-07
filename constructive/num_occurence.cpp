#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        
        long long ans;
        
        if(q>2*n)
            return 0ll;
        
        if(n >= q)
            ans = q-1;
        else
            ans = (2*n)-q+1;
            
        return ans;
    }
};