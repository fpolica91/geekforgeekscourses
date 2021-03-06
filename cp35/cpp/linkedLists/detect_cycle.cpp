#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *detect_cycle(ListNode *head){
  // assign two pointers, one fast and one slow
  /**
   * fast pointer moves 2 steps at a time, slow pointer moves 1 step at a time
   * if there is a cycle, fast pointer will meet slow pointer
   * if there is no cycle, fast pointer will reach the end of the list
   * speed of fast pointer is 2x speed of slow pointer
   * when slow pointer reaches start of loop, fast pointer will be k steps in the loop
   * distance from start of loop to the meeting point is k-n steps where n is the length of the loop
   */ 
  ListNode *slow = head, *fast = head;
  while(fast and fast->next){
    slow = slow->next;
    fast = fast->next->next;
    // meeting point of slow and fast pointer, at this point they will be k steps away from the start of the loop
    if(slow == fast){
      break;
    }
  }
  // if there is no cycle, fast pointer will reach the end of the list
  if(!fast or !fast->next){
    return NULL;
  }
  slow = head;
  // the distance from start of loop to the meeting point is k-n steps where n is the length of the loop
  while(slow != fast){
    slow = slow->next;
    fast = fast->next;
  }
  // slow pointer is at the start of the loop
  return slow;
}

int main(){

}

