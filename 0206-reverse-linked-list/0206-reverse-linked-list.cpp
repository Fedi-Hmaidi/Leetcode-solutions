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
    ListNode* reverseList(ListNode* head) {
        ListNode *nextptr = nullptr;
        ListNode *curptr = head;
        while(curptr != nullptr){
            ListNode *p = curptr->next;            //nasn3 variable nkhbi fih address mtaa l ba3di 

            curptr->next = nextptr;
            nextptr=curptr;
            curptr=p;
            
        }
        return nextptr;
    }
};