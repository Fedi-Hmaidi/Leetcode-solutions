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
    ListNode *detectCycle(ListNode *head) {
        //zouz ybdw mn head
        ListNode *fast = head, *slow=head;
       
        while(fast != nullptr  && fast->next != nullptr){
             fast =fast->next->next; //fast yet7arek b 2nodes
             slow=slow->next;   //slow yet7rk b nod whda
            
            //yabkw y9admo hta yet9blo 
            if(fast == slow){   //wkt yetkblo 
                while(head != slow){ //n3wd nbda mn head w zouz yt7rko b nfs sspeed 
                    head=head->next;
                    slow=slow->next;
                }
                return head;  //wkt ytkblo adhka start mtaa loop l aandk nrj3 l head wktha
            }
        }
        return nullptr;
    }
};