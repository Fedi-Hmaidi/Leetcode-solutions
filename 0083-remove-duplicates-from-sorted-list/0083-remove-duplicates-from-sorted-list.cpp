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
    ListNode* deleteDuplicates(ListNode* head) {
        set<int> st;
        while(head != nullptr){
            st.insert(head->val);
            head=head->next;
        }
        ListNode* ptr = nullptr;
        ListNode* ptr2 = nullptr;
      //nasn3 list jdida b elemeent mtaa set l aandi
       
        for(auto x:st){
            if(ptr == nullptr){
                ptr = new ListNode(x);
                ptr2=ptr;
            }else{
                ptr2->next =new ListNode(x);
                ptr2=ptr2->next;
            }
        }
        return ptr;

    }
};