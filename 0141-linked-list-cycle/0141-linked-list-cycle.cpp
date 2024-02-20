/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //if address visited mra okhra yaani f cycle else mnch f cycle w  nrj3 false;
        vector<ListNode*>v;
       int l=0;
        while(head != nullptr){
            v.push_back(head);
            int cnt = count(v.begin(),v.end(),head);
            if(cnt > 1){
                return true;
            }
            head=head->next;
        }

       
        return false;
        
    }
};