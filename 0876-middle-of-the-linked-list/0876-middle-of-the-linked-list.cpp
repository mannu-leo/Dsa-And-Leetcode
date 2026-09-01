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
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int n;
        if(count%2!=0){
            n=count/2+1;    
        }
        else{
            n=count/2+1;
        }
        ListNode * temp1=head;
        for(int i=1;i<n;i++){
            temp1=temp1->next;
        }
        head=temp1;
        return head;
    }
};