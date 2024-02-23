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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v;
        while(list1!= nullptr){
            v.push_back(list1->val);
            list1 =list1->next;
        }
        while(list2!= nullptr){
            v.push_back(list2->val);
            list2 =list2->next;
        }
        sort(v.begin(),v.end());
        ListNode* head1=nullptr;
        ListNode* head2=nullptr;
        for(auto x:v){
            if(head1 == nullptr){
                head1 = new ListNode(x);
                head2=head1;
            }else{
                head2->next = new ListNode(x);
                head2=head2->next;
            }
        }
        return head1;
    }
};