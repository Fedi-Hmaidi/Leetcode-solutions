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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        
        for(int i=0; i<lists.size(); i++){
            ListNode *p = lists[i]; //f louel y5o list[1,4,5] ymchi alha hta l p ywli null, yt3ada ba3dha l linked list lkhra....ybka akaka lin size ykml
            while(p != nullptr){
                nums.push_back(p->val);
                p=p->next;
            }
        }
       //beki khdma nrml
        sort(nums.begin(), nums.end());
        ListNode *ptr=nullptr;
        ListNode *ptr2=nullptr;
        for(auto x:nums){
            if(ptr == nullptr){
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