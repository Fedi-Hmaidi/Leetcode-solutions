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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        while(head != nullptr){
            v.push_back(head->val);
            head=head->next;
        }
        while (left <= right) {
            swap(v[left - 1], v[right - 1]);
            left++;
            right--;
        }
        ListNode* ptr = nullptr;
        ListNode* ptr2 = nullptr;
        
        for(auto x:v){
            if(ptr == nullptr){
                ptr = new ListNode(x);
                ptr2 = ptr;
            }else{
                ptr2->next = new ListNode(x);
                ptr2=ptr2->next;
            }
        }
        return ptr;
        
        
    }
};