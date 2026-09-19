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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp=head;
        ListNode *odd=NULL;
        ListNode *oddtail=NULL;
        ListNode *even=NULL;
        ListNode *eventail=NULL;
        int count=1;
        while(temp!=NULL){
            if(count%2==0){
                if(even==NULL){
                    even=temp;
                    eventail=temp;
                }
                else{
                    eventail->next=temp;
                    eventail=temp;
                }

            }
            else{
                if(odd==NULL){
                    odd=temp;
                    oddtail=temp;
                }
                else{
                    oddtail->next=temp;
                    oddtail=temp;;
                }
            }
            temp=temp->next;
            count++;
        }
        if(head==NULL||head->next==NULL){
            return head;

        }
        eventail->next=NULL;
        oddtail->next=even;
        return odd;
    }
};