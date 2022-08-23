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
    bool isPalindrome(ListNode* head) {
        ListNode*curr=head;
        string s;
        while(curr!=NULL)
        {
            s+=curr->val;
            curr=curr->next;
        }
        string t=s;
        reverse(t.begin(),t.end());
        return s==t;
    }
};