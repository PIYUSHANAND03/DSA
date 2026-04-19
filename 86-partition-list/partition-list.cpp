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
        ListNode*small=new ListNode(0);
        ListNode*large=new ListNode(0);
        ListNode*small_pointer=small;
        ListNode*large_pointer=large;
        while(head!=NULL){
            if(head->val<x){
                small_pointer->next=head;
                small_pointer=small_pointer->next;
            }
            else{
                large_pointer->next=head;
                large_pointer=large_pointer->next;
            }
            head=head->next;
        }
        small_pointer->next=large->next;
        large_pointer->next=NULL;
        return small->next;
    }
};