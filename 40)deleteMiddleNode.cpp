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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *curr=head;
        ListNode *temp=head;
       
        while(n--)
        {
            curr=curr->next;
        }
        if(curr==NULL)return head->next;
        while( curr->next!=NULL) 
        {
            curr=curr->next;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *curr=head;
        int count=1;
        while(curr->next)
        {
            count++;
            curr=curr->next;
        }
        int n=count/2;
        // if(n%2!=0)
        return removeNthFromEnd(head,count-n);
        // return removeNthFromEnd(head,cunt-n1);
    }
};