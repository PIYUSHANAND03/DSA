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
        int count=0;
        ListNode*temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        if(count==n){
             ListNode*new_head=head->next;
            delete head;
            return new_head;
        }
        int result = count - n;
        temp = head;
        while (result > 1) {
            temp = temp->next;
            result--;
        }
        ListNode* delete_node = temp->next;
        temp->next = temp->next->next;
        delete delete_node;

        return head;
    }
};