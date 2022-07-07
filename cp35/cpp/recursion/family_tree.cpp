#include <bits/stdc++.h>
using namespace std;


string rec(int g, int n){
   
    // if fisrt generation or first child or nth generation
    if(g == 1 or n == 1)
        return "Male";
    int parent = (n + 1) / 2;
    // find parent which is previous generation
    string ans = rec(g - 1, parent);
    // if child is first child of parent then gender is the same
    if(n == 2 * parent - 1){
        return ans;
    }else{
        // else it is opposite
        if(ans == "Female")
            return "Male";
    }
    return "Female";

    
} 

string kthChildNthGeneration(int g, int n)
{    return rec(g,n);
	// Write your code here	
}

int main(){
  cout << kthChildNthGeneration(4,4) << endl;
}