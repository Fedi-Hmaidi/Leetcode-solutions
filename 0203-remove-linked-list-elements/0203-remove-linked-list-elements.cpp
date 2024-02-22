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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int> v;
        while(head != nullptr){
            v.push_back(head->val);
            head = head->next;
        }
        ListNode* pointer = nullptr ;
        ListNode* pointer2 = nullptr;
        for(auto x:v){
            if(x != val){
               if(pointer == nullptr){
                   pointer= new ListNode(x);
                   pointer2 = pointer;
               }else{
                   pointer2->next = new ListNode(x);
                   pointer2=pointer2->next;
               }
            }
        }
        return pointer;
    }
};