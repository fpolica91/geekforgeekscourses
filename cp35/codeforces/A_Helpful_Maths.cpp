#include <bits/stdc++.h>
using namespace std;
#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << "\n"

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string ss;
  string ans;
  vector<int>nums;
  cin>> ss;
  if(ss.size() == 1){
    cout << ss << "\n";
    return 0;
  }

  
  for(int i = 0; i < ss.size(); i++){
    if(ss[i] != '+'){
      nums.push_back(ss[i]-'0');
    }
  }

  sort(nums.begin(), nums.end());
  ans = to_string(nums[0]) + "+";
  for(int i =1; i < nums.size()-1; i++){
    ans+= to_string(nums[i])+"+";
  }
  ans+= to_string(nums[nums.size()-1]);

  cout << ans << "\n";
}
