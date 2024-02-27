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
    ListNode* partition(ListNode* head, int x) {
        vector<int> num;
        vector<int> v;
        while(head != nullptr){
            if(head -> val < x){
                num.push_back(head->val);
            }else{
                v.push_back(head->val);
            }
            head = head->next;  
        }
        for(auto x:v){
            num.push_back(x);
        }
        ListNode* ptr = nullptr;
        ListNode* ptr2 = nullptr;
        for(auto x:num){
            if(ptr ==nullptr){
                ptr = new ListNode(x);
                ptr2=ptr;
            }else{
                ptr2->next = new ListNode(x);
                ptr2=ptr2->next;
            }
        }
    return ptr;
    }
};