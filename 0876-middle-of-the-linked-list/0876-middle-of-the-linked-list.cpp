/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  vector<int> v;
  ListNode* middleNode(ListNode* head) {
    ListNode *ptr = head;
        int l=0;
      while(ptr != nullptr){
          l++;                  // l=1          l=2 .....
          ptr = ptr->next;   //ptr address 2    address3 .....
      }
      int mid=l/2;
      ptr=head;
      while(ptr&&mid--){
        ptr=ptr->next;
      }
      return ptr;
  }
};
