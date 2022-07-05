#include <bits/stdc++.h>
using namespace std;

vector<int> smallestDifference(vector<int> a, vector<int> b) {
  vector<int> result;
  int u = 0;
  int v = 0;
  int n = a.size();
  sort(a.begin(),a.end());
  sort(b.begin(), b.end());
  int currDiff = INT_MAX;
  int prevDiff = INT_MAX;
  
  while(u < a.size() and v < b.size()){
    int s1 = a[u];
    int s2 = b[v];

    if(s1 == s2){
      return{
        s1, 
        s2,
      };
    }

    if(s1 > s2){
      currDiff = s1 - s2; 
      v++;
    }
    else if(s2 > s1){
      currDiff = s2 - s1;
      u++;
    }

    

    if(prevDiff > currDiff){
      prevDiff = currDiff;
      result = {s1, s2};
    }
  }
  
  return result;
}





int main(){

}