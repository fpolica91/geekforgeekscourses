#include <bits/stdc++.h>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

void print_list(ListNode *head){
  ListNode *curr = head;
  while(curr){
    cout << "linked list value is -> " << curr->val << endl;
    curr = curr->next;
  }
}

ListNode *insert_at_beginning(ListNode *head, int data){
  ListNode *newNode = new ListNode(data);
  newNode->next = head;
  head = newNode;
  return head;
}

ListNode *insert_at_end(ListNode *head, int data){
  ListNode *newNode = new ListNode(data);
  if(head == NULL){
    return newNode;
  }
  while(head->next){
    head = head->next;
  }
  head->next = newNode;
  return head;
}

ListNode * get_middle(ListNode *head){
  ListNode *fast = head, *slow = head;
  while(fast and fast->next){
    slow = slow->next;
    fast = fast->next->next;
    if(slow == fast){
      break;
    }
  }
  return slow;
}



int main(){
  ListNode *head = new ListNode(1);
  head->next = new ListNode(2);
  head->next->next = new ListNode(3);
  head->next->next->next = new ListNode(4);
  head = insert_at_beginning(head, 0);
  insert_at_end(head, 5);
  cout << "the middle of the linked list -> " <<  get_middle(head)->val << endl;
  print_list(head);
}