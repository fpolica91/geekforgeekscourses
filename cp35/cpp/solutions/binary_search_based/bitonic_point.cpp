#include <bits/stdc++.h>
using namespace std;

// bitonic point geekforgeeks
// https://practice.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array/
// problem statement:
  // Given an array of integers, which is increasing and then decreasing, find the maximum value in it.

int bitonic_point(vector<int> &nums, int n){
  int st = 0;
  int end = n - 1;
  while(st <= end){
    int mid = (st + end) / 2;
    if(nums[mid] > nums[mid + 1] and nums[mid] > nums[mid - 1]){
      return nums[mid];
    }else{
      // if number is less than the previous one and greater than the next one, then it is the bitonic point
      if(nums[mid] > nums[mid + 1] and nums[mid] < nums[mid - 1]){
        end = mid - 1;
      }else{
        st = mid + 1;
      }
    }
  }
  return -1;
}



int main(){
  vector<int> nums = {1,15,25,45,42,21,17,12,11};
  vector<int> nums2 = {1,2,3,4,5,6,7,8,9,10};
  cout << bitonic_point(nums, nums.size()) << "\n";
  cout << bitonic_point(nums2, nums2.size()) << "\n";
  return 0;
}

