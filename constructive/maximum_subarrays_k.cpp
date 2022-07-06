#include <bits/stdc++.h>
using namespace std;

vector<int> max_of_subarrays(vector<int> nums, int n, int k){
  vector<int> ans;
  list<int> possibles;
  int i =0;
  int j = 0;
  while(j < n){
    // remove all elements slammer than nums[j] as they can't be part of the max subarray
    while(possibles.size() >  0 and possibles.back() < nums[j]){
      possibles.pop_back();
    }
    possibles.push_back(nums[j]);
    if(j - i + 1 < k){
      j++;
      continue;
    }
    else if(j - i + 1 == k){
      ans.push_back(possibles.front());
      // if current highest element is about to be out of the window of from i - j of size k, remove it
      //  example k = 2 and [1, 5, 2, 4, 5]  when we get to subarray from 2 onwards, 5 will no longer be considered 
      // as part the maximum element of that given subarray

      if(possibles.front() == nums[i]){
        possibles.pop_front();
      }
      i++;
      j++;
    }
  }

  return ans;
}



int main(){
  vector<int> ans =max_of_subarrays({1,2,3,1}, 4, 2);
  for(auto x:ans){
    cout << x << " ";
  }
  return 0;
}






